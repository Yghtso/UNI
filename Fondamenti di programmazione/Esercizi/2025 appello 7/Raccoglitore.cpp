//
// Created by yghtso on 1/4/26.
//

#include "Raccoglitore.h"

#include <ostream>

char Raccoglitore::color_to_char(const colore color) {
  switch (color) {
    case BIANCO:
      return 'B';
    case ROSSO:
      return 'R';
    case GIALLO:
      return 'G';
    case VERDE:
      return 'V';
    default:
      return '?';
  }
}

Raccoglitore::Raccoglitore(const int c)
    : m_number_of_rows{c <= 0 ? 1 : static_cast<unsigned>(c)},
      m_rows{new Row[m_number_of_rows]} {}

Raccoglitore::Raccoglitore(const Raccoglitore &other)
    : m_number_of_rows{other.m_number_of_rows},
      m_rows{new Row[m_number_of_rows]} {
  for (unsigned i = 0; i < m_number_of_rows; ++i) {
    Row &s_row = this->m_rows[i];
    s_row.elements = other.m_rows[i].elements;

    for (const ColoredBlock *tmp = other.m_rows[i].head; tmp != nullptr;
         tmp = tmp->next) {
      auto *new_colored_block = new ColoredBlock{tmp->color, nullptr};

      if (s_row.tail == nullptr) {
        s_row.tail = s_row.head = new_colored_block;
      } else {
        s_row.tail->next = new_colored_block;
        s_row.tail = new_colored_block;
      }
    }
  }
}

Raccoglitore::~Raccoglitore() {
  for (unsigned i = 0; i < m_number_of_rows; ++i) {
    ColoredBlock *current = m_rows[i].head;
    while (current != nullptr) {
      ColoredBlock *tmp = current;
      current = current->next;
      delete tmp;
    }
  }
  delete[] m_rows;
}

void Raccoglitore::aggiungiBlocco(const colore COLORE) {
  unsigned index = 0;
  unsigned number_of_elements = m_rows[index].elements;

  for (size_t i = 1; i < m_number_of_rows; i++) {
    if (m_rows[i].elements < number_of_elements) {
      index = i;
      number_of_elements = m_rows[i].elements;
    }
  }

  auto *new_block = new ColoredBlock{COLORE, nullptr};
  Row &row = m_rows[index];

  if (row.tail == nullptr) {
    row.head = row.tail = new_block;

  } else {
    row.tail->next = new_block;
    row.tail = new_block;
  }

  row.elements++;
}

std::ostream &operator<<(std::ostream &os, const Raccoglitore &r) {
  for (unsigned i = 0; i < r.m_number_of_rows; ++i) {
    for (const Raccoglitore::ColoredBlock *current = r.m_rows[i].head; current;
         current = current->next) {
      os << Raccoglitore::color_to_char(current->color);
    }
    os << std::endl;
  }
  return os;
}

void Raccoglitore::togliBlocco() {
  unsigned index = 0;
  unsigned number_of_elements = m_rows[index].elements;

  for (unsigned i = 1; i < m_number_of_rows; ++i) {
    if (m_rows[i].elements > number_of_elements) {
      index = i;
      number_of_elements = m_rows[i].elements;
    }
  }

  auto &[head, tail, elements] = m_rows[index];
  if (head == nullptr) return;
  if (head == tail) {
    delete head;
    head = tail = nullptr;
    elements = 0;
    return;
  }

  ColoredBlock *current = head;
  while (current->next != tail) {
    current = current->next;
  }

  delete tail;
  tail = current;
  tail->next = nullptr;
  elements--;
}

Raccoglitore &Raccoglitore::operator=(Raccoglitore other_copy) {
  std::swap(this->m_number_of_rows, other_copy.m_number_of_rows);
  std::swap(this->m_rows, other_copy.m_rows);

  return *this;
}
