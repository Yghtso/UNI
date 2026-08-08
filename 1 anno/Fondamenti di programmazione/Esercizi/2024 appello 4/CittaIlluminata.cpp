//
// Created by yghtso on 12/25/25.
//

#include <cstring>
#include <iostream>

#include "CittaIlluminate.h"

CittaIlluminate::City::~City() {
  for (size_t i = 0; i < dimension; i++) {
    delete lights[i];
  }
  delete[] lights;
}

CittaIlluminate::CittaIlluminate() = default;

CittaIlluminate::CittaIlluminate(const CittaIlluminate &other) {
  City *new_city;

  for (const City *tmp = other.head; tmp != nullptr; tmp = tmp->next) {
    new_city = new City;
    new_city->dimension = tmp->dimension;
    new_city->lights_lighted = tmp->lights_lighted;
    strcpy(new_city->name, tmp->name);
    new_city->lights = new bool *[tmp->dimension];
    for (size_t i = 0; i < tmp->dimension; i++) {
      new_city->lights[i] = new bool[tmp->dimension]{};
      for (size_t j = 0; j < tmp->dimension; j++) {
        new_city->lights[i][j] = tmp->lights[i][j];
      }
    }

    if (tmp == other.head) {
      this->head = new_city;
      this->tail = new_city;
    } else {
      this->tail->next = new_city;
      this->tail = this->tail->next;
    }
  }
}

std::ostream &operator<<(std::ostream &os, const CittaIlluminate &c) {
  for (const CittaIlluminate::City *tmp = c.head; tmp != nullptr;
       tmp = tmp->next) {
    os << "- " << tmp->name << std::endl;

    for (size_t i = 0; i < tmp->dimension; i++) {
      for (size_t j = 0; j < tmp->dimension; j++) {
        os << (tmp->lights[i][j] ? 'A' : 'S') << ' ';
      }
      os << std::endl;
    }

    os << "Accese " << tmp->lights_lighted << '/'
       << tmp->dimension * tmp->dimension << std::endl;
  }
  return os;
}

void CittaIlluminate::aggiungi(const char *const nome, const int dim) {
  if (strlen(nome) > 20 || strlen(nome) == 0) return;

  if (dim <= 0) return;

  for (const City *tmp = head; tmp != nullptr; tmp = tmp->next) {
    if (strcmp(tmp->name, nome) == 0) {
      return;
    }
  }

  auto new_city = new City;
  new_city->dimension = dim;
  strcpy(new_city->name, nome);
  new_city->lights = new bool *[dim];
  for (size_t i = 0; i < dim; i++) {
    new_city->lights[i] = new bool[dim]{};
  }

  if (head == nullptr) {
    head = new_city;
    tail = new_city;
  } else {
    tail->next = new_city;
    tail = tail->next;
  }
}

void CittaIlluminate::commuta(const char *const nome, const int riga,
                              const int colonna) const {
  if (riga <= 0 || colonna <= 0) return;

  for (City *tmp = head; tmp != nullptr; tmp = tmp->next) {
    if (strcmp(tmp->name, nome) == 0) {
      if (riga > tmp->dimension || colonna > tmp->dimension) return;

      tmp->lights[riga - 1][colonna - 1] = !tmp->lights[riga - 1][colonna - 1];
      if (tmp->lights[riga - 1][colonna - 1]) tmp->lights_lighted++;
    }
  }
}

CittaIlluminate::~CittaIlluminate() {
  for (City *previous = nullptr, *current = head; current != nullptr;) {
    previous = current;
    current = current->next;
    delete previous;
  }
}

void CittaIlluminate::rimuovi(const char *nome) {
  if (strlen(nome) > 20) return;

  City *previous;
  City *current;
  for (previous = nullptr, current = head; current != nullptr;
       previous = current, current = current->next) {
    if (strcmp(current->name, nome) == 0) {
      for (size_t i = 0; i < current->dimension; i++) {
        for (size_t j = 0; j < current->dimension; j++) {
          if (current->lights[i][j]) return;
        }
      }
      break;
    }
  }

  if (current == nullptr) return;

  if (current == head) {
    head = head->next;
    delete current;
    return;
  }

  previous->next = current->next;
  delete current;
}

CittaIlluminate CittaIlluminate::operator~() {
  CittaIlluminate *ret = new CittaIlluminate(*this);

  for (City *tmp = ret->head; tmp != nullptr; tmp = tmp->next) {
    for (size_t i = 0; i < tmp->dimension; i++) {
      for (size_t j = 0; j < tmp->dimension; j++) {
        tmp->lights[i][j] = !tmp->lights[i][j];
        if (tmp->lights[i][j])
          tmp->lights_lighted++;
        else
          tmp->lights_lighted--;
      }
    }
  }

  return *this;
}

CittaIlluminate &CittaIlluminate::operator!() {
  for (City *tmp = head; tmp != nullptr; tmp = tmp->next) {
    double percentage = static_cast<double>(tmp->lights_lighted) /
                        static_cast<double>(tmp->dimension * tmp->dimension) *
                        100;

    if (percentage >= 20)
      for (size_t i = 0; i < tmp->dimension; i++) {
        for (size_t j = 0; j < tmp->dimension; j++) {
          tmp->lights[i][j] = false;
          tmp->lights_lighted = 0;
        }
      }
  }

  return *this;
}
