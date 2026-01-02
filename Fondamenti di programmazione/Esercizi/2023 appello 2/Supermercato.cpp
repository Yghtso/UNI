//
// Created by yghtso on 12/28/25.
//

#include "Supermercato.h"

#include <cstring>
#include <ostream>

void Supermercato::crea_prodotto(char* p, double pu) {
  if (p == nullptr || pu <= 0.0) return;

  for (Product* tmp = m_head; tmp != nullptr; tmp = tmp->next) {
    if (strcmp(tmp->name, p) == 0) return;
  }

  auto* new_product = new Product{new char[strlen(p) + 1], 0, pu, nullptr};
  strcpy(new_product->name, p);

  if (m_head == nullptr) {
    m_head = m_tail = new_product;
    return;
  }

  if (strcmp(p, m_head->name) < 0) {
    new_product->next = m_head;
    m_head = new_product;
    return;
  }

  Product* current = m_head;
  while (current->next != nullptr && strcmp(current->next->name, p) < 0) {
    current = current->next;
  }

  new_product->next = current->next;
  current->next = new_product;

  if (new_product->next == nullptr) {
    m_tail = new_product;
  }
}

bool Supermercato::esponi(const char* p, unsigned q, double pu) const {
  if (pu < 0) {
    return false;
  }

  Product* current = m_head;
  while (current != nullptr) {
    if (std::strcmp(current->name, p) == 0) {
      current->quantity += q;

      if (pu > 0) {
        current->price = pu;
      }
      return true;
    }
    current = current->next;
  }
  return false;
}

std::ostream& operator<<(std::ostream& os, const Supermercato& s) {
  os << "prodotti:\n";

  const Supermercato::Product* curr = s.m_head;
  while (curr != nullptr) {
    os << curr->name << " " << curr->quantity << " " << curr->price << "\n";
    curr = curr->next;
  }

  os << "\n";

  os << "clienti:\n";
  bool any_client = false;

  for (unsigned i = 0; i < Supermercato::SHOPPING_CARTS; ++i) {
    if (s.m_shopping_carts[i].client_id != 0) {
      any_client = true;

      os << "[" << (i + 1) << "-" << s.m_shopping_carts[i].client_id << "]: ";

      const Supermercato::Product* cart_curr = s.m_shopping_carts[i].head;
      while (cart_curr != nullptr) {
        os << cart_curr->name << " (" << cart_curr->quantity << ") | ";
        cart_curr = cart_curr->next;
      }
      os << "\n";
    }
  }

  if (!any_client) {
    os << "nessun cliente presente.\n";
  }

  return os;
}

Supermercato& Supermercato::operator+=(unsigned c) {
  if (c == 0) {
    return *this;
  }

  int free_cart_index = -1;
  for (unsigned i = 0; i < SHOPPING_CARTS; ++i) {
    if (m_shopping_carts[i].client_id == c) {
      return *this;
    }

    if (m_shopping_carts[i].client_id == 0 && free_cart_index == -1) {
      free_cart_index = i;
    }
  }

  if (free_cart_index != -1) {
    m_shopping_carts[free_cart_index].client_id = c;
    m_shopping_carts[free_cart_index].head = nullptr;
    m_shopping_carts[free_cart_index].tail = nullptr;
  }

  return *this;
}

void Supermercato::metti_nel_carrello(unsigned c, const char* p, unsigned q) {
  if (q <= 0) {
    return;
  }

  ShoppingCart* cart = nullptr;
  for (unsigned i = 0; i < SHOPPING_CARTS; ++i) {
    if (m_shopping_carts[i].client_id == c) {
      cart = &m_shopping_carts[i];
      break;
    }
  }

  if (cart == nullptr) {
    return;
  }

  Product* shelf_prod = m_head;
  while (shelf_prod != nullptr) {
    if (std::strcmp(shelf_prod->name, p) == 0) {
      break;
    }
    shelf_prod = shelf_prod->next;
  }

  if (shelf_prod == nullptr) {
    return;
  }

  unsigned qty_to_move = (q > shelf_prod->quantity) ? shelf_prod->quantity : q;

  if (qty_to_move == 0) {
    return;
  }

  shelf_prod->quantity -= qty_to_move;

  Product* curr = cart->head;
  Product* prev = nullptr;

  while (curr != nullptr && std::strcmp(curr->name, p) < 0) {
    prev = curr;
    curr = curr->next;
  }

  if (curr != nullptr && std::strcmp(curr->name, p) == 0) {
    curr->quantity += qty_to_move;
  } else {
    Product* new_node = new Product;

    new_node->name = new char[std::strlen(p) + 1];
    std::strcpy(new_node->name, p);

    new_node->quantity = qty_to_move;
    new_node->price = shelf_prod->price;

    new_node->next = curr;

    if (prev == nullptr) {
      cart->head = new_node;
    } else {
      prev->next = new_node;
    }

    if (new_node->next == nullptr) {
      cart->tail = new_node;
    }
  }
}

double Supermercato::acquista(unsigned c) {
  int cart_index = -1;
  for (unsigned i = 0; i < SHOPPING_CARTS; ++i) {
    if (m_shopping_carts[i].client_id == c) {
      cart_index = i;
      break;
    }
  }

  if (cart_index == -1) {
    return -1.0;
  }

  double totale_spesa = 0.0;
  ShoppingCart& cart = m_shopping_carts[cart_index];
  Product* curr = cart.head;

  while (curr != nullptr) {
    totale_spesa += (curr->quantity * curr->price);

    Product* temp = curr;
    curr = curr->next;

    delete[] temp->name;
    delete temp;
  }

  cart.head = nullptr;
  cart.tail = nullptr;
  cart.client_id = 0;

  return totale_spesa;
}