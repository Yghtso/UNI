//
// Created by yghtso on 12/26/25.
//

#include "List.h"

#include <oneapi/tbb/detail/_utils.h>

#include <cstring>
#include <iostream>
#include <ostream>

List::List() = default;

List::List(const size_t size) {
  for (size_t i = 0; i < size; i++) {
    add_tail();
  }
}

List::List(const List& other) {
  const Node* current = other.head;

  while (current) {
    add_tail(current->info);
    current = current->next;
  }
}

List::~List() { clear(); }

List& List::operator=(const List& other) {
  if (this == &other) {
    return *this;
  }

  this->clear();

  const Node* current = other.head;
  while (current) {
    this->add_tail(current->info);
    current = current->next;
  }

  return *this;
}

void List::clear() {
  const Node* current = head;

  while (current) {
    const Node* next = current->next;
    delete current;
    current = next;
  }

  head = tail = nullptr;
}

std::ostream& operator<<(std::ostream& os, const List& list) {
  const Node* current = list.head;

  while (current) {
    os << current->info << "->";
    current = current->next;
  }

  os << '@';
  return os;
}

List& List::add_head(const char c) {
  const auto new_node = new Node(c, head);

  head = new_node;

  if (!tail) tail = head;

  return *this;
}

List& List::add_tail(const char c) {
  const auto new_node = new Node(c, nullptr);

  if (!tail) {
    head = tail = new_node;
  } else {
    tail->next = new_node;
    tail = new_node;
  }

  return *this;
}

List& List::remove_head() {
  if (!head) return *this;

  const Node* const old_head = head;
  head = head->next;

  if (!head) {
    tail = nullptr;
  }

  delete old_head;
  return *this;
}

List& List::remove_tail() {
  if (!tail) return *this;

  if (head == tail) {
    delete tail;
    tail = head = nullptr;
    return *this;
  }

  Node* new_tail = head;
  while (new_tail->next != tail) {
    new_tail = new_tail->next;
  }

  new_tail->next = nullptr;
  delete tail;
  tail = new_tail;

  return *this;
}

List& List::remove_odd_positions() {
  if (!head) return *this;

  remove_head();

  if (tail == head) return *this;

  Node* current = head;

  while (current->next != tail && current != tail) {
    const Node* const middle = current->next;
    current->next = middle->next;
    delete middle;
    current = current->next;
  }

  if (current->next == tail) remove_tail();

  return *this;
}

List& List::remove_even_positions() {
  if (head == tail) return *this;

  Node* current = head;

  while (current != tail && current->next != tail) {
    const Node* const middle = current->next;
    current->next = middle->next;
    delete middle;
    current = current->next;
  }

  if (current->next == tail) remove_tail();

  return *this;
}

List* List::create_ordered_list_from_string(const char* str) {
  List* new_list = new List{0};

  if (str == nullptr) {
    return new_list;
  }

  while (*str != '\0') {
    char val = *str;
    Node* new_node = new Node(val, nullptr);

    if (new_list->head == nullptr) {
      new_list->head = new_node;
      new_list->tail = new_node;
    } else if (val < new_list->head->info) {
      new_node->next = new_list->head;
      new_list->head = new_node;
    } else {
      Node* current = new_list->head;

      while (current->next != nullptr && current->next->info <= val) {
        current = current->next;
      }

      new_node->next = current->next;
      current->next = new_node;

      if (new_node->next == nullptr) {
        new_list->tail = new_node;
      }
    }

    str++;
  }

  return new_list;
}