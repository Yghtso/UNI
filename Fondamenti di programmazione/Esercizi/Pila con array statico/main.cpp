#include <iostream>

#include "Stack.h"

int main(int argc, char *argv[]) {
  Stack new_stack{20};

  std::cout << new_stack;
  new_stack.push(203);
  new_stack.push(23);
  new_stack.push(53);
  new_stack.push(86);
  new_stack.push(26);
  std::cout << new_stack;

  new_stack.resize(3);
  std::cout << new_stack;
  return 0;
}