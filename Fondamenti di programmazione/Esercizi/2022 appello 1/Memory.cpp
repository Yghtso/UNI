//
// Created by yghtso on 1/5/26.
//

#include "Memory.h"

#include <iostream>
#include <ostream>
#include <typeindex>

bool Memory::out_of_bounds(const int r, const int c) const {
  if (r < 0 || c < 0 || r >= m_dimension || c >= m_dimension) {
    return true;
  }

  return false;
}

bool Memory::correct_letter(char l) {
  if (l == 0 || l == 'G' || l == 'C' || l == 'S' || l == 'P' || l == 'T')
    return true;

  return false;
}

int Memory::char_to_type_index(const char t) {
  switch (t) {
    case 'G':
      return 0;
    case 'C':
      return 1;
    case 'S':
      return 2;
    case 'P':
      return 3;
    case 'T':
      return 4;
    default:
      return -1;
  }
}

Memory::Memory(const int dim)
    : m_dimension{dim <= 1 ? DEFAULT_GRID_SIZE : dim},
      m_grid{new char* [m_dimension] {}} {
  for (unsigned i = 0; i < m_dimension; i++) {
    m_grid[i] = new char[m_dimension]{};
  }
}

Memory::Memory(const Memory& other)
    : m_dimension{other.m_dimension}, m_grid{new char*[m_dimension]} {
  for (unsigned i = 0; i < m_dimension; i++) {
    m_grid[i] = new char[m_dimension]{};
    for (unsigned j = 0; j < m_dimension; j++) {
      m_grid[i][j] = other.m_grid[i][j];
    }
  }

  for (unsigned i = 0; i < 5; i++) {
    m_cards_left[i] = other.m_cards_left[i];
  }
}

Memory::~Memory() {
  for (unsigned i = 0; i < m_dimension; i++) {
    delete m_grid[i];
  }

  delete[] m_grid;
}

std::ostream& operator<<(std::ostream& os, const Memory& memory) {
  for (unsigned i = 0; i < memory.m_dimension; i++) {
    for (unsigned j = 0; j < memory.m_dimension; j++) {
      os << (memory.m_grid[i][j] == 0 ? '-' : memory.m_grid[i][j]) << ' ';
    }
    os << std::endl;
  }

  os << "Punteggio: " << memory.m_points << std::endl;

  return os;
}

void Memory::inserisci(const char tipo, const int riga1, const int colonna1,
                       const int riga2, const int colonna2) {
  if (out_of_bounds(riga1, colonna1) || out_of_bounds(riga2, colonna2)) return;
  if (m_grid[riga1][colonna1] != 0 || m_grid[riga2][colonna2] != 0) return;
  if (riga1 == riga2 && colonna1 == colonna2) return;
  if (!correct_letter(tipo)) return;

  const int type_index = char_to_type_index(tipo);
  m_cards_left[type_index] += 2;

  m_grid[riga1][colonna1] = tipo;
  m_grid[riga2][colonna2] = tipo;
}

void Memory::riassumi() {
  for (const unsigned int cards_left : m_cards_left) {
    if (cards_left != 0 && cards_left != 1) {
      std::cout << "Gatto: " << m_cards_left[0] / 2 << std::endl;
      std::cout << "Cane: " << m_cards_left[1] / 2 << std::endl;
      std::cout << "Serpente: " << m_cards_left[2] / 2 << std::endl;
      std::cout << "Pavone: " << m_cards_left[3] / 2 << std::endl;
      std::cout << "Tigre: " << m_cards_left[4] / 2 << std::endl;
      return;
    }
  }

  std::cout << "VITTORIA!" << std::endl;
}

bool Memory::flip(const int riga1, const int colonna1, const int riga2,
                  const int colonna2) {
  if (out_of_bounds(riga1, colonna1) || out_of_bounds(riga2, colonna2))
    return false;

  if (riga1 == riga2 && colonna1 == colonna2) return false;

  if (m_grid[riga1][colonna1] == 0 || m_grid[riga2][colonna2] == 0)
    return false;

  if (m_grid[riga1][colonna1] == m_grid[riga2][colonna2]) {
    m_points++;
    m_cards_left[char_to_type_index(m_grid[riga1][colonna1])] -= 2;
    m_grid[riga1][colonna1] = m_grid[riga2][colonna2] = 0;
    return true;
  }

  m_points--;
  return false;
}

Memory operator+(Memory self, const Memory& other) {
  const unsigned min_length = self.m_dimension < other.m_dimension
                                  ? self.m_dimension
                                  : other.m_dimension;

  for (int i = 0; i < min_length; i++) {
    for (int j = 0; j < min_length; j++) {
      if (self.m_grid[i][self.m_dimension - j - 1] == 0) {
        self.m_grid[i][self.m_dimension - j - 1] =
            other.m_grid[i][other.m_dimension - j - 1];
      }
    }
  }

  return self;
}

Memory& Memory::operator>>(int i) {
  const int rotations = (i % 4 + 4) % 4;

  if (rotations == 0) {
    return *this;
  }

  const auto new_grid = new char*[m_dimension];
  for (unsigned k = 0; k < m_dimension; ++k) {
    new_grid[k] = new char[m_dimension];
  }

  for (unsigned r = 0; r < m_dimension; ++r) {
    for (unsigned c = 0; c < m_dimension; ++c) {
      unsigned new_r = 0;
      unsigned new_c = 0;

      if (rotations == 1) {
        new_r = c;
        new_c = m_dimension - 1 - r;
      } else if (rotations == 2) {
        new_r = m_dimension - 1 - r;
        new_c = m_dimension - 1 - c;
      } else if (rotations == 3) {
        new_r = m_dimension - 1 - c;
        new_c = r;
      }

      new_grid[new_r][new_c] = m_grid[r][c];
    }
  }

  for (unsigned k = 0; k < m_dimension; ++k) {
    delete[] m_grid[k];
  }
  delete[] m_grid;

  m_grid = new_grid;

  return *this;
}
