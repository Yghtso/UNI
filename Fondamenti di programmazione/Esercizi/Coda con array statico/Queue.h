//
// Created by yghtso on 1/1/26.
//

#ifndef STM_QUEUE_H
#define STM_QUEUE_H
#include <iosfwd>

typedef int T;

class Queue {
 public:
  explicit Queue(size_t size = 0);
  Queue(const T *elements, size_t size);
  Queue(const Queue &other);
  ~Queue();

  Queue &operator=(Queue other);

  bool operator==(const Queue &other) const;
  bool operator!=(const Queue &other) const;

  friend std::ostream &operator<<(std::ostream &os, const Queue &queue);

  bool enqueue(T data);
  bool dequeue();

  Queue &clear();

  size_t size() const;
  bool empty() const;
  void resize(size_t new_capacity);

  const T &operator[](size_t index) const;
  T &operator[](size_t index);
  Queue operator+(const Queue &other) const;

 private:
  size_t m_capacity = 0;

  T *m_data = nullptr;
  size_t m_head = 0;
  size_t m_tail = 0;
  bool m_full = false;
};

#endif  // STM_QUEUE_H
