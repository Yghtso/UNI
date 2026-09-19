//
// Created by yghtso on 1/4/26.
//

#ifndef STM_UFFICIOPOSTALE_H
#define STM_UFFICIOPOSTALE_H
#include <iosfwd>

class UfficioPostale {
 public:
  static constexpr unsigned USER_MAX_NAME_LENGTH = 25;
  static constexpr unsigned DEFAULT_COUNTERS_NUMBER = 2;

  UfficioPostale(int M = DEFAULT_COUNTERS_NUMBER);
  friend std::ostream& operator<<(std::ostream& os, const UfficioPostale& p);
  void accodaUtente(const char* n, int sp);
  void serviUtente(int sp);

  ~UfficioPostale();
  void accodaPrioritario(char* n);

 private:
  struct User {
    char name[USER_MAX_NAME_LENGTH + 1]{};
    bool prioritized = false;
    User* next = nullptr;
  };

  unsigned inserted_index_prioritized(User* u);

  unsigned m_total_counters = DEFAULT_COUNTERS_NUMBER;
  User** m_counters = nullptr;
  unsigned m_total_users = 0;
  unsigned m_total_prioritized_users = 0;
};

#endif  // STM_UFFICIOPOSTALE_H
