#include "Battaglia.h"

#include <iostream>

Battaglia::Battaglia(const size_t m, const unsigned n)
    : dimension{m}, players_amount{n}, matrix{new int*[dimension]} {
  for (size_t i = 0; i < dimension; i++) {
    matrix[i] = new int[dimension]{};
  }
}

bool Battaglia::aggiungi(const size_t x1, const size_t y1, const size_t x2,
                         const size_t y2, unsigned player_id) {
  if (player_id == 0 || player_id > players_amount) return false;

  if (x1 >= dimension || y1 >= dimension || x2 >= dimension || y2 >= dimension)
    return false;

  if (x1 > x2 || y1 > y2) return false;

  for (size_t x = x1; x <= x2; x++) {
    for (size_t y = y1; y <= y2; y++) {
      if (matrix[x][y] != 0) return false;
    }
  }

  for (size_t x = x1; x <= x2; x++) {
    for (size_t y = y1; y <= y2; y++) {
      matrix[x][y] = static_cast<int>(player_id);
    }
  }
  return true;
}

std::ostream& operator<<(std::ostream& os, const Battaglia& b) {
  for (size_t x = 0; x < b.dimension; x++) {
    for (size_t y = 0; y < b.dimension; y++) {
      os << b.matrix[x][y] << ' ';
    }
    os << std::endl;
  }
  return os;
}

bool Battaglia::fuoco(size_t x, size_t y) {
  if (x >= dimension || y >= dimension) return false;

  if (matrix[x][y] <= 0) return false;

  matrix[x][y] = -matrix[x][y];
  return true;
}

bool Battaglia::operator+=(const Battaglia& other) {
  if (this->dimension != other.dimension ||
      this->players_amount != other.players_amount)
    return false;

  for (size_t x = 0; x < dimension; x++) {
    for (size_t y = 0; y < dimension; y++) {
      if (this->matrix[x][y] != 0 && other.matrix[x][y] != 0) return false;
    }
  }

  for (size_t x = 0; x < dimension; x++) {
    for (size_t y = 0; y < dimension; y++) {
      if (this->matrix[x][y] == 0) matrix[x][y] = other.matrix[x][y];
    }
  }
  return true;
}

bool operator==(const Battaglia& battaglia, unsigned player_id) {
  if (player_id > battaglia.players_amount) return false;

  for (size_t x = 0; x < battaglia.dimension; x++) {
    for (size_t y = 0; y < battaglia.dimension; y++) {
      if (battaglia.matrix[x][y] == player_id) return true;
    }
  }
  return false;
}

Battaglia::~Battaglia() {
  for (size_t x = 0; x < dimension; x++) {
    delete[] matrix[x];
  }
  delete[] matrix;
}