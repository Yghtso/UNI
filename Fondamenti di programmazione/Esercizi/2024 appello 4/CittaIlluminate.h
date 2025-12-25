//
// Created by yghtso on 12/25/25.
//

#ifndef STM_CITTAILLUMINATE_H
#define STM_CITTAILLUMINATE_H

#include <iosfwd>

class CittaIlluminate {
 public:
  CittaIlluminate();
  CittaIlluminate(const CittaIlluminate &other);
  friend std::ostream &operator<<(std::ostream &os, const CittaIlluminate &c);
  void aggiungi(const char *nome, int dim);
  void commuta(const char *nome, int riga, int colonna) const;

  ~CittaIlluminate();
  void rimuovi(const char *nome);
  CittaIlluminate operator~();
  CittaIlluminate &operator!();

 private:
  struct City {
    char name[20 + 1]{};
    bool **lights = nullptr;
    unsigned lights_lighted = 0;
    unsigned dimension = 1;
    City *next = nullptr;

    ~City();
  };

  City *head = nullptr;
  City *tail = nullptr;
};

#endif  // STM_CITTAILLUMINATE_H
