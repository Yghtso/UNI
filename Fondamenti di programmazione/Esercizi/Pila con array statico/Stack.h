//
// Created by yghtso on 1/3/26.
//

#ifndef STM_STACK_H
#define STM_STACK_H
#include <iosfwd>
typedef int T;

class Stack {
 public:
  explicit Stack(size_t capacity = 0);
  Stack(const Stack& other);
  Stack(const char* array, size_t size);

  ~Stack();

  Stack& operator=(Stack other);
  friend std::ostream& operator<<(std::ostream& os, const Stack& stack);

  void clear();

  bool push(T element);
  bool pop();

  void resize(size_t new_capacity);

  const T& operator[](size_t index) const;
  T& operator[](size_t index);

 private:
  size_t m_capacity = 0;

  T* m_data = nullptr;
  size_t m_top = 0;
};

#endif  // STM_STACK_H
