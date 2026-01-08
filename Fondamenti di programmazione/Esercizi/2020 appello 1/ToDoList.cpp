//
// Created by yghtso on 1/5/26.
//

#include "ToDoList.h"

#include <cstring>
#include <ostream>

ToDoList::ToDoList() = default;

ToDoList::~ToDoList() {
  job* current = m_head;
  while (current) {
    const job* tmp = current;
    current = current->next;
    delete tmp;
  }
}

void ToDoList::aggiungi(const char* descr, const int prio) {
  if (!descr || std::strlen(descr) > 40 || prio < 1) return;

  job* new_job = new job;
  new_job->priority = static_cast<unsigned>(prio);
  std::strcpy(new_job->description, descr);

  job *previous = nullptr, *current = m_head;

  while (current && current->priority <= prio) {
    previous = current;
    current = current->next;
  }

  if (!previous) {
    new_job->next = m_head;
    m_head = new_job;
    return;
  }

  new_job->next = current;
  previous->next = new_job;
}

std::ostream& operator<<(std::ostream& os, const ToDoList& list) {
  for (const ToDoList::job* current = list.m_head; current;
       current = current->next) {
    os << (current->done ? 'V' : ' ') << ' ' << current->priority << " - "
       << current->description << std::endl;
  }

  return os;
}

void ToDoList::fai(const char* descr) const {
  job* current = m_head;
  while (current &&
         (strcmp(current->description, descr) != 0 || current->done)) {
    current = current->next;
  }

  if (!current) return;
  current->done = true;
}

ToDoList& ToDoList::operator+=(const ToDoList& other) {
  for (const job* current = other.m_head; current; current = current->next) {
    this->aggiungi(current->description, static_cast<int>(current->priority));
  }

  return *this;
}

void ToDoList::cancella_fatti() {
  job *current = m_head, *previous = nullptr;

  while (current) {
    if (current->done) {
      if (previous == nullptr) {
        m_head = m_head->next;
        delete current;
        previous = nullptr;
        current = m_head;
      } else {
        previous->next = current->next;
        delete current;
        current = previous->next;
      }
    } else {
      previous = current;
      current = current->next;
    }
  }
}