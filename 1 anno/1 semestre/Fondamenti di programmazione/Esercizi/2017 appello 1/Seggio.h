//
// Created by yghtso on 1/6/26.
//

#ifndef STM_SEGGIO_H
#define STM_SEGGIO_H
#include <iosfwd>
enum voto { favorevole, contrario };

class Seggio {
 public:
  Seggio();
  ~Seggio();

  void nuovoElettore(int id);
  friend std::ostream& operator<<(std::ostream& os, const Seggio& seg);
  void nuovoVoto(voto v);
  void spoglioDeiVoti() const;

 private:
  struct Elettore {
    int id = 0;
    Elettore* next = nullptr;
  };

  unsigned m_voti = 0;
  unsigned m_voti_favorevoli = 0;
  unsigned m_elettori = 0;
  Elettore* m_head = nullptr;
  Elettore* m_tail = nullptr;
};

#endif  // STM_SEGGIO_H
