//
// Created by yghtso on 1/4/26.
//

#ifndef STM_RACCOGLITORE_H
#define STM_RACCOGLITORE_H
#include <iosfwd>

enum colore { BIANCO, ROSSO, GIALLO, VERDE };

class Raccoglitore {
 public:
  Raccoglitore(int c = 1);
  Raccoglitore(const Raccoglitore &other);
  ~Raccoglitore();

  void aggiungiBlocco(colore COLORE);
  void togliBlocco();
  friend std::ostream &operator<<(std::ostream &os, const Raccoglitore &r);
  Raccoglitore &operator=(Raccoglitore other_copy);

 private:
  static char color_to_char(colore color);

  struct ColoredBlock {
    colore color = BIANCO;
    ColoredBlock *next = nullptr;
  };
  struct Row {
    ColoredBlock *head = nullptr;
    ColoredBlock *tail = nullptr;
    unsigned elements = 0;
  };

  unsigned m_number_of_rows = 1;
  Row *m_rows = nullptr;
};

#endif  // STM_RACCOGLITORE_H
