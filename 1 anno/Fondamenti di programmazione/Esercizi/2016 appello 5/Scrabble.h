//
// Created by yghtso on 12/19/25.
//

#ifndef STM_SCRABBLE_H
#define STM_SCRABBLE_H
#include <iosfwd>

class Scrabble {
 public:
  Scrabble(size_t N);
  void aggiungi(char* str, unsigned r, unsigned c, char dir);
  Scrabble& operator=(const Scrabble& other);
  friend std::ostream& operator<<(std::ostream& os, const Scrabble& s);

  bool esiste(char* str);
  ~Scrabble();
  unsigned operator!() const;

 private:
  static constexpr size_t min_dimension = 4;

  size_t dimension;
  char** slots = nullptr;
};

#endif  // STM_SCRABBLE_H
