//
// Created by yghtso on 1/3/26.
//

#include "Stack.h"

#include <cassert>
#include <ostream>

Stack::Stack(const size_t capacity)
    : m_capacity{capacity}, m_data{!m_capacity ? nullptr : new T[m_capacity]} {}

Stack::Stack(const Stack& other)
    : m_capacity{other.m_capacity},
      m_data{!m_capacity ? nullptr : new T[m_capacity]},
      m_top{other.m_top} {
  for (size_t i = 0; i < m_top; ++i) {
    m_data[i] = other.m_data[i];
  }
}

Stack::Stack(const char* array, size_t size)
    : m_capacity{size}, m_data{!size ? nullptr : new T[size]} {
  for (size_t i = 0; i < size; ++i) {
    m_data[i] = array[i];
    m_top++;
  }
}

Stack::~Stack() { delete[] m_data; }

std::ostream& operator<<(std::ostream& os, const Stack& stack) {
  os << "Top of the stack: " << std::endl << "___" << std::endl;

  for (size_t i = stack.m_top; i > 0; --i) {
    os << stack.m_data[i - 1] << std::endl;
  }

  os << "___" << std::endl;

  return os;
}

Stack& Stack::operator=(Stack other) {
  this->m_capacity = other.m_capacity;
  this->m_top = other.m_top;

  delete[] this->m_data;
  this->m_data = other.m_data;
  other.m_data = nullptr;

  return *this;
}

void Stack::clear() { m_top = 0; }

bool Stack::push(const T element) {
  if (m_top == m_capacity) return false;

  m_data[m_top++] = element;
  return true;
}

bool Stack::pop() {
  if (!m_top) return false;

  m_top--;
  return true;
}

void Stack::resize(const size_t new_capacity) {
  if (new_capacity == m_capacity) return;

  const auto new_data = new T[new_capacity];

  const size_t elements_to_copy = new_capacity < m_top ? new_capacity : m_top;

  for (size_t i = 0; i < elements_to_copy; ++i) {
    new_data[i] = m_data[i];
  }

  delete[] m_data;
  m_data = new_data;
  m_top = elements_to_copy;
  m_capacity = new_capacity;
}

const T& Stack::operator[](const size_t index) const {
  assert(index < m_top && "Index out of bounds!");
  return m_data[index];
}

T& Stack::operator[](const size_t index) {
  assert(index < m_top && "Index out of bounds!");
  return m_data[index];
}