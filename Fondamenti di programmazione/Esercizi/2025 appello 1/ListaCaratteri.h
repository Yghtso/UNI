//
// Created by yghtso on 1/3/26.
//

#ifndef STM_LISTACARATTERI_H
#define STM_LISTACARATTERI_H
#include <iosfwd>

class ListaCaratteri {
 public:
  ListaCaratteri();
  ~ListaCaratteri();
  void inserisci(char carattere, bool fine);
  bool rimuovi(char c, bool tutti);
  friend std::ostream& operator<<(std::ostream& os, const ListaCaratteri& list);

  friend bool operator==(const ListaCaratteri& lhs, const ListaCaratteri& rhs);
  void operator~();
  bool controllaPalindroma() const;
  bool cercaSottostringa(const ListaCaratteri& lc2) const;
  char* estraiNultimoCarattere(int n);

 private:
  struct Node {
    Node* previous;
    char character;
    Node* next;
  };

  Node* m_head = nullptr;
  Node* m_tail = nullptr;

  unsigned m_size = 0;
};

#endif  // STM_LISTACARATTERI_H
