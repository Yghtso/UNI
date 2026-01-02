//
// Created by yghtso on 12/26/25.
//

#ifndef STM_Node_H
#define STM_Node_H
#include <iosfwd>

class List;

class Node {
 public:
  friend class List;
  Node();
  explicit Node(char c = '\0', Node* next = nullptr);
  Node(const Node& other);
  ~Node();
  Node& operator=(const Node& other);

  friend std::ostream& operator<<(std::ostream& os, const Node& node);
  friend std::ostream& operator<<(std::ostream& os, const List& list);

 private:
  Node* next = nullptr;
  char info = '\0';
};

#endif  // STM_Node_H
