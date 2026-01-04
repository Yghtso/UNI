//
// Created by yghtso on 1/3/26.
//

#include "ListaCaratteri.h"

#include <iostream>

ListaCaratteri::ListaCaratteri() = default;

ListaCaratteri::~ListaCaratteri() {
  const Node* current = m_head;

  while (current) {
    const Node* tmp = current;
    current = current->next;
    delete tmp;
  }
}

void ListaCaratteri::inserisci(const char carattere, const bool fine) {
  m_size++;
  const auto new_node = new Node{nullptr, carattere, nullptr};

  if (!m_head) {
    m_head = m_tail = new_node;
    return;
  }

  if (fine == true) {
    m_tail->next = new_node;
    new_node->previous = m_tail;
    m_tail = new_node;

  } else {
    m_head->previous = new_node;
    new_node->next = m_head;
    m_head = new_node;
  }
}

bool ListaCaratteri::rimuovi(char c, bool tutti) {
  if (!m_head) return false;

  bool removed = false;
  Node* current = m_head;

  while (current) {
    Node* nextNode = current->next;

    if (current->character == c) {
      if (current == m_head) {
        m_head = m_head->next;
        if (m_head) {
          m_head->previous = nullptr;
        } else {
          m_tail = nullptr;
        }
      } else if (current == m_tail) {
        m_tail = m_tail->previous;
        if (m_tail) {
          m_tail->next = nullptr;
        }
      } else {
        current->previous->next = current->next;
        current->next->previous = current->previous;
      }

      delete current;
      m_size--;
      removed = true;

      if (!tutti) return true;
    }

    current = nextNode;
  }

  return removed;
}

std::ostream& operator<<(std::ostream& os, const ListaCaratteri& list) {
  for (ListaCaratteri::Node* current = list.m_head; current != nullptr;
       current = current->next) {
    os << current->character << " -> ";
  }
  os << '@' << std::endl;
  return os;
}

bool operator==(const ListaCaratteri& lhs, const ListaCaratteri& rhs) {
  if (lhs.m_size != rhs.m_size) return false;

  for (ListaCaratteri::Node *current_lhs = lhs.m_head,
                            *current_rhs = rhs.m_head;
       current_lhs != nullptr;
       current_lhs = current_lhs->next, current_rhs = current_rhs->next) {
    if (current_lhs->character != current_rhs->character) return false;
  }

  return true;
}

void ListaCaratteri::operator~() {
  if (!m_head) return;

  Node* from_head = m_head;
  Node* from_tail = m_tail;

  while (from_head != from_tail && from_head->previous != from_tail) {
    char tmp = from_head->character;
    from_head->character = from_tail->character;
    from_tail->character = tmp;

    from_head = from_head->next;
    from_tail = from_tail->previous;
  }
}

bool ListaCaratteri::controllaPalindroma() const {
  if (!m_head) return true;

  Node* from_head = m_head;
  Node* from_tail = m_tail;

  while (from_head != from_tail && from_head->previous != from_tail) {
    if (from_head->character != from_tail->character) {
      return false;
    }

    from_head = from_head->next;
    from_tail = from_tail->previous;
  }

  return true;
}
bool ListaCaratteri::cercaSottostringa(const ListaCaratteri& lc2) const {
  if (!m_head || !lc2.m_head) return false;

  const Node* self_curr = m_head;

  while (self_curr) {
    const Node* sub_curr = lc2.m_head;
    const Node* temp_self = self_curr;

    while (temp_self && sub_curr &&
           temp_self->character == sub_curr->character) {
      temp_self = temp_self->next;
      sub_curr = sub_curr->next;
    }

    if (!sub_curr) return true;

    self_curr = self_curr->next;
  }

  return false;
}

char* ListaCaratteri::estraiNultimoCarattere(const int n) {
  if (n <= 0 || n > m_size) return nullptr;

  int counter = 1;
  Node* to_delete = m_tail;

  while (to_delete && counter < n) {
    to_delete = to_delete->previous;
    counter++;
  }

  if (!to_delete) return nullptr;
  char* data_to_return = new char(to_delete->character);

  if (to_delete == m_head) {
    m_head = m_head->next;
    if (m_head)
      m_head->previous = nullptr;
    else
      m_tail = nullptr;
  } else {
    to_delete->previous->next = to_delete->next;
  }

  if (to_delete == m_tail) {
    m_tail = m_tail->previous;
    if (m_tail)
      m_tail->next = nullptr;
    else
      m_head = nullptr;
  } else {
    to_delete->next->previous = to_delete->previous;
  }

  delete to_delete;
  m_size--;

  return data_to_return;
}