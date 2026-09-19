//
// Created by yghtso on 1/1/26.
//

#include "Queue.h"

#include <ostream>

Queue::Queue(const size_t size)
    : m_capacity{size}, m_data{m_capacity == 0 ? nullptr : new T[m_capacity]} {}

Queue::Queue(const T *elements, const size_t size)
    : m_capacity{size}, m_data{m_capacity == 0 ? nullptr : new T[size]} {
  if (!elements || size == 0) return;

  for (size_t i = 0; i < size; i++) enqueue(elements[i]);
}

Queue::Queue(const Queue &other)
    : m_capacity{other.m_capacity},
      m_data{m_capacity == 0 ? nullptr : new T[m_capacity]},
      m_head{other.m_head},
      m_tail{other.m_tail},
      m_full{other.m_full} {
  if (empty()) return;

  const size_t size = size();

  for (size_t offset = 0; offset < size; offset++) {
    const size_t index = (m_head + offset) % m_capacity;
    m_data[index] = other.m_data[index];
  }
}

Queue::~Queue() { delete[] m_data; }

Queue &Queue::operator=(Queue other) {
  this->m_capacity = other.m_capacity;

  delete[] m_data;
  this->m_data = other.m_data;
  other.m_data = nullptr;

  this->m_head = other.m_head;

  this->m_tail = other.m_tail;

  this->m_full = other.m_full;

  return *this;
}

std::ostream &operator<<(std::ostream &os, const Queue &queue) {
  size_t size = size();

  os << "Head: [";
  for (size_t offset = 0; offset < size; offset++) {
    const size_t index = (queue.m_head + offset) % queue.m_capacity;

    os << queue.m_data[index];

    if (index != queue.m_tail - 1) os << ", ";
  }
  os << ']' << std::endl;

  return os;
}

bool Queue::enqueue(T data) {
  if (m_full) return false;

  m_data[m_tail] = data;
  m_tail = (m_tail + 1) % m_capacity;

  if (m_tail == m_head) m_full = true;

  return true;
}

bool Queue::dequeue() {
  if (empty()) return false;

  m_head = (m_head + 1) % m_capacity;
  m_full = false;

  return true;
}

Queue &Queue::clear() {
  m_head = m_tail = 0;
  m_full = false;

  return *this;
}

size_t Queue::size() const {
  if (m_full) return m_capacity;
  if (m_head == m_tail) return 0;

  if (m_tail > m_head) return m_tail - m_head;

  return m_capacity - m_head + m_tail;
}

bool Queue::empty() const {
  if (!m_full && m_head == m_tail) return false;
  return true;
}

const T &Queue::operator[](const size_t index) const {
  static T dummy = T{};

  if (empty()) return dummy;

  if (index > size() - 1) return dummy;

  const size_t real_index = (m_head + index) % m_capacity;
  return m_data[real_index];
}

T &Queue::operator[](size_t index) {
  const Queue &const_self = *this;

  const T &result = const_self[index];

  return const_cast<T &>(result);
}

bool Queue::operator==(const Queue &other) const {
  if (this == &other) return true;

  const size_t self_size = size();

  if (self_size != other.size()) return false;

  for (size_t index = 0; index < self_size; index++) {
    if (other[index] != (*this)[index]) return false;
  }

  return true;
}

bool Queue::operator!=(const Queue &other) const {
  return !this->operator==(other);
}

Queue Queue::operator+(const Queue &other) const {
  Queue concatenated{m_capacity + other.m_capacity};

  for (size_t index = 0; index < size(); index++) {
    concatenated.enqueue((*this)[index]);
  }

  for (size_t index = 0; index < other.size(); index++) {
    concatenated.enqueue(other[index]);
  }

  return concatenated;
}

void Queue::resize(const size_t new_capacity) {
  if (new_capacity == m_capacity) return;

  const size_t elements_to_copy = size() < new_capacity ? size() : new_capacity;

  const auto new_data = new T[new_capacity];
  for (size_t i = 0; i < elements_to_copy; i++) {
    new_data[i] = (*this)[i];
  }

  delete[] m_data;
  m_capacity = new_capacity;
  m_data = new_data;
  m_head = 0;
  m_tail = elements_to_copy % new_capacity;
  m_full = elements_to_copy == new_capacity;
}
