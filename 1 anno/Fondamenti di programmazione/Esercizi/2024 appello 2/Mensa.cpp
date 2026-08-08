//
// Created by yghtso on 12/23/25.
//

#include "Mensa.h"

#include <cstring>
#include <iostream>

Mensa::Mensa(const size_t N)
    : seats{new Seat[N]}, seats_amount{N}, free_seats(N) {}

Mensa::~Mensa() {
  for (size_t i = 0; i < seats_amount; i++) {
    if (!seats[i].free) delete seats[i].person_id;
  }
  delete seats;
}

std::ostream& operator<<(std::ostream& os, const Mensa& m) {
  if (m.seats_amount == 0 || m.seats == nullptr) {
    return os;
  }

  for (size_t i = 0; i < m.seats_amount; i++) {
    os << "sedia " << i + 1 << ": "
       << (m.seats[i].free ? "(non occupata)" : m.seats[i].person_id)
       << std::endl;
  }

  return os;
}

bool Mensa::occupa(const char* id) {
  if (id == nullptr) return false;

  if (free_seats == 0) return false;

  for (size_t i = 0; i < seats_amount; i++) {
    if (!seats[i].free && strcmp(seats[i].person_id, id) == 0) {
      return false;
    }
  }

  for (size_t i = 0; i < seats_amount; i++) {
    if (seats[i].free) {
      seats[i].free = false;
      seats[i].person_id = new char[strlen(id) + 1];
      strcpy(seats[i].person_id, id);
      free_seats--;
      return true;
    }
  }
  return false;
}

void Mensa::libera(size_t i) {
  if (i == 0 || i > seats_amount) return;

  if (seats[i - 1].free) return;

  seats[i - 1].free = true;
  delete seats[i - 1].person_id;
  seats[i - 1].person_id = nullptr;
  free_seats++;
}

Mensa::Mensa(const Mensa& other)
    : seats{new Seat[other.seats_amount]},
      seats_amount{other.seats_amount},
      free_seats(other.free_seats) {
  for (size_t i = 0; i < seats_amount; i++) {
    this->seats[i].free = other.seats[i].free;
    if (!this->seats[i].free) {
      this->seats[i].person_id = new char[strlen(other.seats[i].person_id) + 1];
      strcpy(this->seats[i].person_id, other.seats[i].person_id);
    }
  }
}

bool Mensa::occupaGruppo(const char* id, unsigned n) {
  if (free_seats < n || seats == nullptr || n == 0) return false;

  for (size_t i = 0; i < seats_amount; i++) {
    if (!seats[i].free && strcmp(seats[i].person_id, id) == 0) return false;
  }

  int counter = 0;
  for (int i = 0; i < seats_amount; i++) {
    if (seats[i].free) {
      counter++;
      if (counter == n) {
        for (int j = i; j > i - counter; j--) {
          seats[j].free = false;
          seats[j].person_id = new char[strlen(id) + 1];
          strcpy(seats[j].person_id, id);
          free_seats--;
        }
        return true;
      }
    } else {
      counter = 0;
    }
  }

  return false;
}

void Mensa::ordina() {
  if (seats == nullptr) return;

  for (size_t i = 0; i < seats_amount - 1; i++) {
    for (size_t j = i + 1; j < seats_amount; j++) {
      if (seats[j].free) {
        seats[j].person_id = seats[i].person_id;
        seats[j].free = false;
        seats[i].free = true;
        seats[i].person_id = nullptr;
        continue;
      }

      if (!seats[i].free &&
          strcmp(seats[j].person_id, seats[i].person_id) < 0) {
        char* tmp = seats[i].person_id;
        seats[i].person_id = seats[j].person_id;
        seats[j].person_id = tmp;
      }
    }
  }
}