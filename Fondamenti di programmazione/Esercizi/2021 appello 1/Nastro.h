//
// Created by yghtso on 1/6/26.
//

#ifndef STM_NASTRO_H
#define STM_NASTRO_H
#include <iosfwd>

class Nastro {
 public:
  Nastro();
  ~Nastro();

  void aggiungi(const char* s, int c);
  Nastro& consuma(const char* s);

  friend std::ostream& operator<<(std::ostream& os, const Nastro& n);
  void operator+=(const Nastro& other);
  friend Nastro operator|(const Nastro& lhs, const Nastro& rhs);

 private:
  struct Dish {
    char name[25 + 1]{};
    unsigned price = 0;
    Dish* next = nullptr;
  };

  Dish* m_head = nullptr;
  unsigned m_billing = 0;
};

#endif  // STM_NASTRO_H
