//
// Created by yghtso on 1/6/26.
//

#include "Nastro.h"

#include <cstring>
#include <ostream>

Nastro::Nastro() = default;
Nastro::~Nastro() {
  for (const Dish* current = m_head; current; current = current->next) {
    const Dish* tmp = current;
    delete tmp;
  }
}

void Nastro::aggiungi(const char* s, int c) {
  if (!s || strlen(s) > 25) s = "";
  if (c < 0) c = 0;

  for (const Dish* current = m_head; current; current = current->next) {
    if (strcmp(current->name, s) == 0 && current->price != c) return;
  }

  auto new_dish = new Dish{.price = static_cast<unsigned>(c)};
  strcpy(new_dish->name, s);

  Dish* current = m_head;
  Dish* previous = nullptr;

  while (current) {
    if (current->price < new_dish->price) {
      previous = current;
      current = current->next;
      continue;
    }

    if (current->price == new_dish->price &&
        strcmp(current->name, new_dish->name) <= 0) {
      previous = current;
      current = current->next;
      continue;
    }

    break;
  }

  if (!previous) {
    new_dish->next = m_head;
    m_head = new_dish;
    return;
  }
  if (!current) {
    previous->next = new_dish;
    return;
  }

  new_dish->next = current;
  previous->next = new_dish;
}

std::ostream& operator<<(std::ostream& os, const Nastro& n) {
  os << "Piatti sul nastro:" << std::endl;
  for (const Nastro::Dish* current = n.m_head; current;
       current = current->next) {
    os << '\t' << current->name << ' ' << current->price << std::endl;
  }
  os << "Conto: " << n.m_billing << std::endl;
  return os;
}

Nastro& Nastro::consuma(const char* s) {
  Dish* current = m_head;
  Dish* previous = nullptr;

  while (current) {
    if (strcmp(current->name, s) == 0) {
      if (!previous) {
        m_head = m_head->next;
        m_billing += current->price;
        delete current;
        break;
      }

      previous->next = current->next;
      m_billing += current->price;
      delete current;
      break;
    }

    previous = current;
    current = current->next;
  }
  return *this;
}

void Nastro::operator+=(const Nastro& other) {
  for (const Dish* current = other.m_head; current; current = current->next) {
    aggiungi(current->name, static_cast<int>(current->price));
  }
}

Nastro operator|(const Nastro& lhs, const Nastro& rhs) {
  const auto result = new Nastro{};

  for (const Nastro::Dish* l_current = lhs.m_head; l_current;
       l_current = l_current->next) {
    bool should_insert = true;
    for (const Nastro::Dish* r_current = rhs.m_head; r_current;
         r_current = r_current->next) {
      if (strcmp(l_current->name, r_current->name) == 0 &&
          l_current->price > r_current->price) {
        should_insert = false;
      }
    }

    if (should_insert) {
      result->aggiungi(l_current->name, static_cast<int>(l_current->price));
    }
  }

  for (const Nastro::Dish* r_current = rhs.m_head; r_current;
       r_current = r_current->next) {
    bool should_insert = true;
    for (const Nastro::Dish* l_current = lhs.m_head; l_current;
         l_current = l_current->next) {
      if (strcmp(r_current->name, l_current->name) == 0 &&
          r_current->price > l_current->price) {
        should_insert = false;
      }
    }

    if (should_insert) {
      result->aggiungi(r_current->name, static_cast<int>(r_current->price));
    }
  }
  return *result;
}
