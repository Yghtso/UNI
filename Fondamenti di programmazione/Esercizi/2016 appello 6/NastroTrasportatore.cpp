//
// Created by yghtso on 12/19/25.
//

#include "NastroTrasportatore.h"

#include <cstring>
#include <iostream>

NastroTrasportatore::NastroTrasportatore() = default;

NastroTrasportatore::NastroTrasportatore(const NastroTrasportatore& n) {
  length = n.length;

  if (n.head == nullptr) return;

  auto new_mechanical_piece = new MechanicalPiece{
      new char[strlen(n.head->id) + 1], n.head->checked, nullptr};

  strcpy(new_mechanical_piece->id, n.head->id);
  head = new_mechanical_piece;
  tail = new_mechanical_piece;

  if (n.tail == n.head) return;

  const MechanicalPiece* index_to_other = n.head->next;
  do {
    new_mechanical_piece =
        new MechanicalPiece{new char[strlen(index_to_other->id) + 1],
                            index_to_other->checked, nullptr};

    strcpy(new_mechanical_piece->id, index_to_other->id);

    tail->next = new_mechanical_piece;
    tail = tail->next;

    index_to_other = index_to_other->next;
  } while (index_to_other != nullptr);
}

bool NastroTrasportatore::aggiungi(const char* id) {
  if (strlen(id) < 2) return false;

  if (id[0] < 'A' || id[0] > 'Z') return false;

  if (id[1] < '0' || id[1] > '9') return false;

  for (int i = 2; i < strlen(id); i++) {
    if (id[i] < '0' || id[i] > '9') return false;
  }

  auto* new_mechanical_piece =
      new MechanicalPiece{new char[strlen(id) + 1], false, head};

  strcpy(new_mechanical_piece->id, id);

  head = new_mechanical_piece;

  if (tail == nullptr) tail = new_mechanical_piece;

  length++;
  return true;
}

void NastroTrasportatore::rimuovi() {
  if (head == nullptr) return;

  length--;
  if (tail == head) {
    delete head;
    head = nullptr;
    tail = nullptr;
    return;
  }

  MechanicalPiece* previous = head;
  MechanicalPiece* current = head->next;

  while (current->next != nullptr) {
    previous = current;
    current = current->next;
  }

  previous->next = nullptr;
  delete current;
  tail = previous;
}

std::ostream& operator<<(std::ostream& os, const NastroTrasportatore& n) {
  if (n.head == nullptr) {
    os << "<vuoto>";
    return os;
  }

  for (const NastroTrasportatore::MechanicalPiece* tmp = n.head;
       tmp->next != nullptr; tmp = tmp->next) {
    os << '(' << tmp->id;
    if (tmp->checked) os << '*';
    os << ") = ";
  }

  os << '(' << n.tail->id << ')';

  return os;
}

void NastroTrasportatore::controlla(unsigned i) {
  if (i == 0) return;
  if (i > length) return;

  unsigned counter = 1;
  const MechanicalPiece* tmp = head;
  while (counter != i) {
    counter++;
    tmp = tmp->next;
  }
  if (tmp->checked) return;

  if (i == 1) head->checked = true;

  if (i == 2 && length == 2) {
    tail->checked = true;
    tail->next = head;
    head->next = nullptr;
    head = tail;
    tail = tail->next;
    return;
  }

  if (i == 2) {
    MechanicalPiece* second = head->next;
    second->checked = true;
    head->next = second->next;
    second->next = head;
    head = second;
    return;
  }

  MechanicalPiece *previous = head, *current = head->next->next;

  counter = 3;

  while (counter != i) {
    current = current->next;
    previous = previous->next;
    counter++;
  }

  MechanicalPiece* mid = previous->next;
  current->checked = true;
  mid->next = current->next;
  previous->next = current;
  current->next = mid;

  if (i == length) tail = mid;
}

NastroTrasportatore::~NastroTrasportatore() {
  if (head == nullptr) return;

  if (head == tail) {
    delete head;
    head = tail = nullptr;
  }

  const MechanicalPiece* previous = head;
  for (const MechanicalPiece* current = head->next; current != nullptr;
       previous = current, current = current->next) {
    delete previous;
  }

  delete previous;
}

NastroTrasportatore::operator int() const {
  unsigned checked_counter = 0;
  for (const MechanicalPiece* tmp = head; tmp != nullptr; tmp = tmp->next) {
    if (tmp->checked) checked_counter++;
  }

  return checked_counter;
}