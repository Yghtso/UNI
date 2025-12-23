//
// Created by yghtso on 12/23/25.
//

#include "OggettiViaggio.h"

#include <cstring>
#include <iostream>

OggettiViaggio::OggettiViaggio() = default;

OggettiViaggio::OggettiViaggio(const OggettiViaggio& other) {
  if (other.m_head == nullptr) return;

  auto new_item = new Item;
  new_item->m_taken = other.m_head->m_taken;
  strcpy(new_item->m_description, other.m_head->m_description);
  this->m_head = this->m_tail = new_item;

  if (other.m_head == other.m_tail) return;

  for (const Item* tmp = other.m_head->m_next; tmp != nullptr;
       tmp = tmp->m_next) {
    new_item = new Item;
    new_item->m_taken = tmp->m_taken;
    strcpy(new_item->m_description, tmp->m_description);
    this->m_tail->m_next = new_item;
    this->m_tail = this->m_tail->m_next;
  }
}

std::ostream& operator<<(std::ostream& os, const OggettiViaggio& og) {
  if (og.m_head == nullptr) return os;

  for (const OggettiViaggio::Item* tmp = og.m_head; tmp != nullptr;
       tmp = tmp->m_next) {
    os << (tmp->m_taken ? 'X' : '-') << ' ' << tmp->m_description << std::endl;
  }

  return os;
}

void OggettiViaggio::aggiungi(const char* descr) {
  if (descr == nullptr || strlen(descr) > 40) return;

  if (m_head == nullptr) {
    const auto new_item = new Item;
    strcpy(new_item->m_description, descr);
    m_head = m_tail = new_item;
    return;
  }

  for (const Item* tmp = m_head; tmp != nullptr; tmp = tmp->m_next) {
    if (strcmp(tmp->m_description, descr) == 0) {
      return;
    }
  }

  const auto new_item = new Item;
  strcpy(new_item->m_description, descr);
  m_tail->m_next = new_item;
  m_tail = new_item;
}

void OggettiViaggio::prendi(const char* descr) const {
  if (descr == nullptr || strlen(descr) > 40) return;

  for (Item* tmp = m_head; tmp != nullptr; tmp = tmp->m_next) {
    if (strcmp(tmp->m_description, descr) == 0) {
      tmp->m_taken = true;
    }
  }
}

void OggettiViaggio::viaggia() const {
  if (m_head == nullptr) return;

  for (Item* tmp = m_head; tmp != nullptr; tmp = tmp->m_next) {
    tmp->m_taken = false;
  }
}

OggettiViaggio::~OggettiViaggio() {
  if (m_head == nullptr) return;

  if (m_head == m_tail) {
    delete m_head;
    m_head = m_tail = nullptr;
  }

  for (Item *previous = m_head, *current = m_head->m_next; current != nullptr;
       previous = previous->m_next, current = current->m_next) {
    delete previous;
  }

  delete m_tail;
}

void OggettiViaggio::rimuovi(const char* descr) {
  if (descr == nullptr || strlen(descr) > 40) return;

  if (m_head == nullptr) return;

  if (strcmp(m_head->m_description, descr) != 0 && m_head == m_tail) return;

  if (strcmp(m_head->m_description, descr) == 0 && m_head == m_tail) {
    delete m_head;
    m_head = m_tail = nullptr;
    return;
  }

  if (strcmp(m_head->m_description, descr) == 0) {
    Item* previous = m_head;
    m_head = m_head->m_next;
    delete previous;
    return;
  }

  if (strcmp(m_tail->m_description, descr) == 0) {
    Item* previous;
    for (previous = m_head; previous->m_next != m_tail;
         previous = previous->m_next) {
    }

    previous->m_next = nullptr;
    delete m_tail;
    m_tail = previous;
    return;
  }

  Item* previous = m_head;
  for (Item* current = m_head->m_next; current != m_tail;
       current = current->m_next, previous = previous->m_next) {
    if (strcmp(current->m_description, descr) == 0) {
      previous->m_next = current->m_next;
      delete current;
      return;
    }
  }
}

OggettiViaggio& OggettiViaggio::operator+=(const OggettiViaggio& other) {
  if (other.m_head == nullptr) return *this;

  for (const Item* tmp = other.m_head; tmp != nullptr; tmp = tmp->m_next) {
    this->aggiungi(tmp->m_description);
    this->m_tail->m_taken = tmp->m_taken;
  }

  return *this;
}

OggettiViaggio OggettiViaggio::operator!() const {
  OggettiViaggio ret;

  for (const Item* tmp = m_head; tmp != nullptr; tmp = tmp->m_next) {
    if (tmp->m_taken == false) ret.aggiungi(tmp->m_description);
  }

  return ret;
}
