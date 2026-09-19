//
// Created by yghtso on 12/19/25.
//

#include "Scrabble.h"

#include <cstring>
#include <iostream>

Scrabble::Scrabble(size_t N) {
  if (N < min_dimension) return;

  dimension = N;
  slots = new char*[N];

  for (size_t i = 0; i < dimension; i++) slots[i] = new char[N];

  for (size_t i = 0; i < dimension; i++)
    for (size_t j = 0; j < dimension; j++) {
      slots[i][j] = '-';
    }
}

Scrabble::~Scrabble() {
  for (size_t i = 0; i < dimension; i++) delete[] slots[i];
  delete[] slots;
}

void Scrabble::aggiungi(char* str, unsigned r, unsigned c, char dir) {
  const unsigned indexable = dimension - 1;
  const size_t str_length = strlen(str);

  if (dir != 'O' && dir != 'V') return;
  if (str == nullptr) return;

  if (r > indexable || c > indexable) return;

  if (dir == 'V') {
    if (r + str_length > dimension) return;

    for (size_t i = 0; i < str_length; i++) {
      if (slots[r + i][c] == '-') continue;
      if (slots[r + i][c] != str[i]) return;
    }

    for (size_t i = 0; i < str_length; i++) {
      slots[r + i][c] = str[i];
    }

  } else {
    if (c + str_length > dimension) return;

    for (size_t i = 0; i < str_length; i++) {
      if (slots[r][c + i] == '-') continue;
      if (slots[r][c + i] != str[i]) return;
    }

    for (size_t i = 0; i < str_length; i++) {
      slots[r][c + i] = str[i];
    }
  }
}

Scrabble& Scrabble::operator=(const Scrabble& other) {
  if (&other == this) return *this;

  for (size_t i = 0; i < this->dimension; i++) delete[] this->slots[i];
  delete[] this->slots;

  this->dimension = other.dimension;

  this->slots = new char*[dimension];
  for (size_t i = 0; i < dimension; i++) this->slots[i] = new char[dimension];

  for (size_t i = 0; i < this->dimension; i++)
    for (size_t j = 0; j < this->dimension; j++) {
      this->slots[i][j] = other.slots[i][j];
    }

  return *this;
}

std::ostream& operator<<(std::ostream& os, const Scrabble& s) {
  if (s.slots == nullptr) return os;

  for (size_t i = 0; i < s.dimension; i++) {
    for (size_t j = 0; j < s.dimension; j++) {
      os << s.slots[i][j] << ' ';
    }
    os << std::endl;
  }
  return os;
}

bool Scrabble::esiste(char* str) {
  if (str == nullptr || strlen(str) > dimension) return false;

  size_t length = strlen(str);

  for (size_t i = 0; i < dimension; i++) {
    size_t consecutive = 0;
    for (size_t j = 0; j < dimension; j++) {
      if (slots[i][j] == str[consecutive]) {
        consecutive++;
        if (consecutive == length) return true;
      } else {
        if (slots[i][j] == str[0])
          consecutive = 1;
        else
          consecutive = 0;
      }
    }
  }

  for (size_t j = 0; j < dimension; j++) {
    size_t consecutive = 0;
    for (size_t i = 0; i < dimension; i++) {
      if (slots[i][j] == str[consecutive]) {
        consecutive++;
        if (consecutive == length) return true;
      } else {
        if (slots[i][j] == str[0])
          consecutive = 1;
        else
          consecutive = 0;
      }
    }
  }

  return false;
}

unsigned Scrabble::operator!() const {
  if (dimension == 0) return 0;

  unsigned max_contiguous_characters = 0;
  unsigned consecutive_characters = 0;

  for (size_t i = 0; i < dimension; i++) {
    for (size_t j = 0; j < dimension; j++) {
      if (slots[i][j] == '-' || j == dimension - 1) {
        if (slots[i][j] != '-') consecutive_characters++;

        if (max_contiguous_characters < consecutive_characters)
          max_contiguous_characters = consecutive_characters;

        consecutive_characters = 0;
      } else {
        consecutive_characters++;
      }
    }
    consecutive_characters = 0;
  }

  for (size_t i = 0; i < dimension; i++) {
    for (size_t j = 0; j < dimension; j++) {
      if (slots[j][i] == '-' || j == dimension - 1) {
        if (slots[j][i] != '-') consecutive_characters++;

        if (max_contiguous_characters < consecutive_characters)
          max_contiguous_characters = consecutive_characters;

        consecutive_characters = 0;
      } else {
        consecutive_characters++;
      }
    }
    consecutive_characters = 0;
  }

  return max_contiguous_characters;
}