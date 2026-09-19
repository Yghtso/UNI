//
// Created by yghtso on 12/26/25.
//

#ifndef STM_LIST_H
#define STM_LIST_H
#include "Node.h"

class List {
 public:
  List();
  explicit List(size_t size = 0);
  List(const List& other);
  ~List();
  List& operator=(const List& other);

  friend std::ostream& operator<<(std::ostream& os, const List& list);

  void clear();

  List& add_head(char c = '\0');
  List& add_tail(char c = '\0');

  List& remove_head();
  List& remove_tail();

  List& remove_odd_positions();
  List& remove_even_positions();

  static List* create_ordered_list_from_string(const char* str);

 private:
  Node* head = nullptr;
  Node* tail = nullptr;
};

#endif  // STM_LIST_H
