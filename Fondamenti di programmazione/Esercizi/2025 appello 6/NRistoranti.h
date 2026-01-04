//
// Created by yghtso on 1/3/26.
//

#ifndef STM_NRISTORANTI_H
#define STM_NRISTORANTI_H
#include <iosfwd>

class NRistoranti {
 public:
  static constexpr unsigned MAX_RESTAURANTS_NUMBER = 26;
  static constexpr unsigned DEFAULT_RESTAURANTS_NUMBER = 2;

  explicit NRistoranti(int N);
  NRistoranti(const NRistoranti& other);
  ~NRistoranti();

  friend std::ostream& operator<<(std::ostream& os, const NRistoranti& nrist);
  void aggiungiValutazione(char nomeRistorante, int giudice, int location,
                           int servizio, int menu, int conto) const;
  void aggiungiBonus(char nomeRistorante, int bonus) const;

  NRistoranti& operator~();
  NRistoranti operator!();

 private:
  struct Score {
    bool given = false;
    unsigned location = 0;
    unsigned service = 0;
    unsigned menu = 0;
    unsigned price = 0;
  };

  struct Restaurant {
    char name = ' ';
    Score* judges_scores = nullptr;
    unsigned total_score = 0;
    bool bonus_applied = false;
  };

  unsigned m_judges_and_restaurants_number = 0;
  Restaurant* m_restaurants = nullptr;
};

#endif  // STM_NRISTORANTI_H
