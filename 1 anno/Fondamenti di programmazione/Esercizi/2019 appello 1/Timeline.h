//
// Created by yghtso on 1/6/26.
//

#ifndef STM_TIMELINE_H
#define STM_TIMELINE_H
#include <iosfwd>

class Timeline {
 public:
  Timeline();
  ~Timeline();

  void pubblica(const char* str, bool ev);
  void cancella(const char* str);
  friend std::ostream& operator<<(std::ostream& os, const Timeline& tl);

  friend bool operator!(Timeline& tl);
  void mettiInEvidenza(const char* str);

 private:
  struct Photo {
    Photo* next = nullptr;
    bool in_evidence = false;
    char* name = nullptr;
  };
  Photo* m_head = nullptr;
};

#endif  // STM_TIMELINE_H
