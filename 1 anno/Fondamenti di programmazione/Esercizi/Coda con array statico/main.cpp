#include <iostream>

#include "Queue.h"

int main(int argc, char *argv[]) {
  Queue queue{20};
  queue.enqueue(1);
  queue.enqueue(2);
  queue.enqueue(3);
  queue.enqueue(4);
  queue.enqueue(5);

  std::cout << queue;
  queue.enqueue(6);
  queue.dequeue();

  std::cout << queue;
  queue.enqueue(3);
  queue.enqueue(3);
  queue.enqueue(3);
  queue.enqueue(3);
  queue.enqueue(3);
  queue.enqueue(3);

  queue.dequeue();
  queue.dequeue();
  queue.dequeue();

  std::cout << queue;

  std::cout << queue.clear();

  queue.enqueue(3);

  std::cout << queue;
  std::cout << (queue[0] = 4) << std::endl;
  std::cout << queue;
  return 0;
}