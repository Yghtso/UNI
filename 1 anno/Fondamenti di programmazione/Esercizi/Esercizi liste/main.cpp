#include <iostream>

#include "List.h"

int main(int argc, char* argv[]) {
  auto new_list = List(10);
  new_list.remove_tail().remove_tail().remove_tail();
  new_list.clear();
  new_list.add_head('F')
      .add_head('E')
      .add_head('D')
      .add_head('C')
      .add_head('B')
      .add_head('A');

  new_list.remove_odd_positions();

  new_list.clear();
  new_list.add_head('F')
      .add_head('E')
      .add_head('D')
      .add_head('C')
      .add_head('B')
      .add_head('A');

  new_list.remove_even_positions();

  List* new_list_heap_allocated =
      List::create_ordered_list_from_string("fedcba");

  std::cout << *new_list_heap_allocated << std::endl;
  return 0;
}