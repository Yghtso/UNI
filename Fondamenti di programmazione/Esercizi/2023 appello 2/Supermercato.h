//
// Created by yghtso on 12/28/25.
//

#ifndef STM_SUPERMERCATO_H
#define STM_SUPERMERCATO_H
#include <iosfwd>

class Supermercato {
 public:
  Supermercato() = default;
  static constexpr unsigned SHOPPING_CARTS = 5;
  void crea_prodotto(char* p, double pu);
  bool esponi(const char* p, unsigned q, double pu = 0.0) const;
  friend std::ostream& operator<<(std::ostream& os, const Supermercato& s);

  Supermercato& operator+=(unsigned c);
  void metti_nel_carrello(unsigned c, const char* p, unsigned q);
  double acquista(unsigned c);

 private:
  struct Product {
    char* name = nullptr;
    unsigned quantity = 0;
    double price = 0.0;
    Product* next = nullptr;
  };

  struct ShoppingCart {
    unsigned client_id = 0;
    Product* head = nullptr;
    Product* tail = nullptr;
  };

  Product* m_head = nullptr;
  Product* m_tail = nullptr;

  ShoppingCart* m_shopping_carts = new ShoppingCart[SHOPPING_CARTS];
};

#endif  // STM_SUPERMERCATO_H
