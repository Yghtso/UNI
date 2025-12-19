//
// Created by yghtso on 12/19/25.
//

#ifndef STM_NASTROTRASPORTATORE_H
#define STM_NASTROTRASPORTATORE_H
#include <iosfwd>

class NastroTrasportatore {
 public:
  NastroTrasportatore();
  NastroTrasportatore(const NastroTrasportatore& n);
  bool aggiungi(const char* id);
  void rimuovi();
  friend std::ostream& operator<<(std::ostream& os,
                                  const NastroTrasportatore& n);

  void controlla(unsigned i);
  ~NastroTrasportatore();
  operator int() const;

 private:
  struct MechanicalPiece {
    char* id = nullptr;
    bool checked = false;
    MechanicalPiece* next = nullptr;

    ~MechanicalPiece() { delete[] id; };
  };

  unsigned length = 0;
  MechanicalPiece* head = nullptr;
  MechanicalPiece* tail = nullptr;
};

#endif  // STM_NASTROTRASPORTATORE_H
