//
// Created by yghtso on 1/5/26.
//

#ifndef STM_TODOLIST_H
#define STM_TODOLIST_H
#include <iosfwd>

class ToDoList {
 public:
  ToDoList();
  void aggiungi(const char* descr, int prio);
  ~ToDoList();

  void fai(const char* descr) const;
  void cancella_fatti();

  friend std::ostream& operator<<(std::ostream& os, const ToDoList& list);
  ToDoList& operator+=(const ToDoList& other);

 private:
  struct job {
    char description[41]{};
    unsigned priority = 1;
    bool done = false;
    job* next = nullptr;
  };

  job* m_head = nullptr;
};

#endif  // STM_TODOLIST_H
