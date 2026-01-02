//
// Created by yghtso on 12/26/25.
//

#include "Node.h"

#include <ostream>

Node::Node() = default;

Node::Node(const char c, Node* next) : next{next}, info{c} {}

Node::Node(const Node& other) : next{other.next}, info{other.info} {}

Node::~Node() = default;

Node& Node::operator=(const Node& other) {
  this->info = other.info;
  return *this;
}

std::ostream& operator<<(std::ostream& os, const Node& node) {
  os << node.info;
  return os;
}
