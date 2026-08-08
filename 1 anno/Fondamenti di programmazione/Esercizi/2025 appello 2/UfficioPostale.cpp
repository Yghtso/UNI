//
// Created by yghtso on 1/4/26.
//

#include "UfficioPostale.h"

#include <cstring>
#include <ostream>

UfficioPostale::UfficioPostale(const int M)
    : m_total_counters{M <= 0 ? DEFAULT_COUNTERS_NUMBER : M},
      m_counters{new User* [m_total_counters] {}} {}

UfficioPostale::~UfficioPostale() {
  for (unsigned i = 0; i < m_total_counters; ++i) {
    const User* tmp = m_counters[i];
    while (tmp) {
      const User* prev = tmp;
      tmp = tmp->next;
      delete prev;
    }
  }
  delete[] m_counters;
}

std::ostream& operator<<(std::ostream& os, const UfficioPostale& p) {
  os << "Utenti totali: " << p.m_total_users << std::endl;
  os << "Prioritari: " << p.m_total_prioritized_users << std::endl;

  for (unsigned i = 0; i < p.m_total_counters; ++i) {
    os << "- Sportello " << i + 1 << ':';

    const UfficioPostale::User* tmp = p.m_counters[i];

    while (tmp) {
      if (tmp != p.m_counters[i]) os << ',';
      os << ' ' << tmp->name;
      if (tmp->prioritized) os << " (P)";
      tmp = tmp->next;
    }
    os << std::endl;
  }
  return os;
}

void UfficioPostale::accodaUtente(const char* n, const int sp) {
  if (strlen(n) > USER_MAX_NAME_LENGTH || strlen(n) == 0 ||
      sp > m_total_counters || sp <= 0)
    return;

  const auto new_user = new User{};
  strcpy(new_user->name, n);

  User* tmp = m_counters[sp - 1];
  User* tail = nullptr;

  while (tmp) {
    if (strcmp(tmp->name, n) == 0) return;
    tail = tmp;
    tmp = tmp->next;
  }

  if (!tail) {
    m_counters[sp - 1] = new_user;
  } else {
    tail->next = new_user;
  }
  m_total_users++;
}

void UfficioPostale::serviUtente(int sp) {
  if (sp <= 0 || sp > m_total_counters) return;

  if (!m_counters[sp - 1]) return;

  User* tmp = m_counters[sp - 1];
  m_counters[sp - 1] = m_counters[sp - 1]->next;
  m_total_users--;
  if (tmp->prioritized) m_total_prioritized_users--;
  delete tmp;
}

void UfficioPostale::accodaPrioritario(char* n) {
  if (strlen(n) > USER_MAX_NAME_LENGTH || strlen(n) == 0) return;

  unsigned counter_where_to_insert = 0;

  unsigned min_position = 0;
  for (const User* tmp = m_counters[0]; tmp && tmp->prioritized;
       tmp = tmp->next) {
    min_position++;
  }

  for (unsigned i = 1; i < min_position; ++i) {
    unsigned current_pos = 0;
    const User* current_tmp = m_counters[i];
    while (current_tmp && current_tmp->prioritized == true) {
      current_pos++;
      current_tmp = current_tmp->next;
    }
    if (current_pos < min_position) {
      min_position = current_pos;
      counter_where_to_insert = i;
    }
  }
}