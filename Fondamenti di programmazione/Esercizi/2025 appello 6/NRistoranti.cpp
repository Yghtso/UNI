//
// Created by yghtso on 1/3/26.
//

#include "NRistoranti.h"

#include <ostream>

NRistoranti::NRistoranti(const int N)
    : m_judges_and_restaurants_number{
          N > 1 && N < 27 ? N : DEFAULT_RESTAURANTS_NUMBER},
      m_restaurants{new Restaurant[m_judges_and_restaurants_number]} {
  for (unsigned i = 0; i < m_judges_and_restaurants_number; i++) {
    m_restaurants[i].name = 'A' + i;
    m_restaurants[i].judges_scores =
        new Score[m_judges_and_restaurants_number]{};
  }
}

NRistoranti::NRistoranti(const NRistoranti& other)
    : m_judges_and_restaurants_number{other.m_judges_and_restaurants_number},
      m_restaurants{new Restaurant[m_judges_and_restaurants_number]} {
  for (unsigned i = 0; i < m_judges_and_restaurants_number; i++) {
    const Restaurant& other_rest = other.m_restaurants[i];
    Restaurant& self_rest = m_restaurants[i];

    self_rest.name = other_rest.name;
    self_rest.total_score = other_rest.total_score;
    self_rest.bonus_applied = other_rest.bonus_applied;

    self_rest.judges_scores = new Score[m_judges_and_restaurants_number];

    for (unsigned j = 0; j < m_judges_and_restaurants_number; j++) {
      self_rest.judges_scores[j] = other_rest.judges_scores[j];
    }
  }
}

NRistoranti::~NRistoranti() {
  for (unsigned i = 0; i < m_judges_and_restaurants_number; i++) {
    delete[] m_restaurants[i].judges_scores;
  }

  delete[] m_restaurants;
}

std::ostream& operator<<(std::ostream& os, const NRistoranti& nrist) {
  os << nrist.m_judges_and_restaurants_number << " ristoranti e "
     << nrist.m_judges_and_restaurants_number << " giudici" << std::endl;

  for (unsigned i = 0; i < nrist.m_judges_and_restaurants_number; i++) {
    const NRistoranti::Restaurant& current_restaurant = nrist.m_restaurants[i];
    os << "- Ristorante " << current_restaurant.name
       << ", voto complessivo: " << current_restaurant.total_score << std::endl;

    for (unsigned j = 0; j < nrist.m_judges_and_restaurants_number; j++) {
      const NRistoranti::Score& current_judge =
          nrist.m_restaurants[i].judges_scores[j];
      os << "  Giudice " << j + 1 << ':' << std::endl;
      os << "    Location - " << current_judge.location << std::endl;
      os << "    Servizio - " << current_judge.service << std::endl;
      os << "    Menu - " << current_judge.menu << std::endl;
      os << "    Conto - " << current_judge.price << std::endl;
    }
  }

  return os;
}

void NRistoranti::aggiungiValutazione(const char nomeRistorante,
                                      const int giudice, int location,
                                      int servizio, int menu, int conto) const {
  if (giudice > m_judges_and_restaurants_number || giudice <= 0) return;

  if (location < 0 || location > 10 || servizio < 0 || servizio > 10 ||
      menu < 0 || menu > 10 || conto < 0 || conto > 10)
    return;

  Restaurant* target = nullptr;
  for (unsigned i = 0; i < m_judges_and_restaurants_number; i++) {
    if (m_restaurants[i].name == nomeRistorante) {
      target = &m_restaurants[i];
      break;
    }
  }

  if (!target) return;

  auto& score_entry = target->judges_scores[giudice - 1];

  if (score_entry.given) return;

  score_entry.given = true;
  score_entry.location = location;
  score_entry.service = servizio;
  score_entry.menu = menu;
  score_entry.price = conto;

  target->total_score += location + servizio + menu + conto;
}
void NRistoranti::aggiungiBonus(const char nomeRistorante,
                                const int bonus) const {
  if (bonus <= 1 || bonus >= 10) return;

  Restaurant* target = nullptr;
  for (unsigned i = 0; i < m_judges_and_restaurants_number; i++) {
    if (m_restaurants[i].name == nomeRistorante) {
      target = &m_restaurants[i];
      break;
    }
  }

  if (!target) return;
  if (target->bonus_applied) return;

  for (unsigned i = 0; i < m_judges_and_restaurants_number; i++) {
    if (!target->judges_scores[i].given) return;
  }

  for (unsigned i = 0; i < m_judges_and_restaurants_number; i++) {
    Score& current_judge = target->judges_scores[i];

    unsigned* min = &current_judge.location;
    if (current_judge.service < *min) min = &current_judge.service;
    if (current_judge.menu < *min) min = &current_judge.menu;
    if (current_judge.price < *min) min = &current_judge.price;

    if (*min + bonus <= 10) {
      *min += bonus;
      target->total_score += bonus;
      target->bonus_applied = true;
    }
  }
}

NRistoranti& NRistoranti::operator~() {
  for (unsigned i = 0; i < m_judges_and_restaurants_number - 1; i++) {
    for (unsigned j = 0; j < m_judges_and_restaurants_number - 1 - i; j++) {
      if (m_restaurants[j].total_score < m_restaurants[j + 1].total_score ||
          (m_restaurants[j].total_score == m_restaurants[j + 1].total_score &&
           m_restaurants[j].name > m_restaurants[j + 1].name)) {
        std::swap(m_restaurants[j], m_restaurants[j + 1]);
      }
    }
  }
  return *this;
}
NRistoranti NRistoranti::operator!() {
  unsigned new_dimension = 0;
  for (unsigned i = 0; i < m_judges_and_restaurants_number; i++) {
    if (m_restaurants[i].total_score >= 100) new_dimension++;
  }
  int size_to_alloc = (new_dimension > 1) ? new_dimension : 2;

  NRistoranti new_n_ristoranti(size_to_alloc);

  if (new_dimension == 0) return new_n_ristoranti;
  unsigned index_elements_copied = 0;
  for (unsigned i = 0; i < m_judges_and_restaurants_number; i++) {
    if (m_restaurants[i].total_score >= 100) {
      new_n_ristoranti.m_restaurants[index_elements_copied].name =
          m_restaurants[i].name;
      new_n_ristoranti.m_restaurants[index_elements_copied].total_score =
          m_restaurants[i].total_score;
      new_n_ristoranti.m_restaurants[index_elements_copied].bonus_applied =
          m_restaurants[i].bonus_applied;

      for (unsigned j = 0; j < size_to_alloc; j++) {
        if (j < m_judges_and_restaurants_number) {
          new_n_ristoranti.m_restaurants[index_elements_copied]
              .judges_scores[j] = m_restaurants[i].judges_scores[j];
        }
      }
      index_elements_copied++;
    }
  }

  return new_n_ristoranti;
}