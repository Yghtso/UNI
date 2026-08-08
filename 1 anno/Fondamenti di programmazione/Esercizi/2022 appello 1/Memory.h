//
// Created by yghtso on 1/5/26.
//

#ifndef STM_MEMORY_H
#define STM_MEMORY_H
#include <iosfwd>

class Memory {
 public:
  static constexpr unsigned DEFAULT_GRID_SIZE = 3;
  explicit Memory(int dim = DEFAULT_GRID_SIZE);
  Memory(const Memory& other);
  ~Memory();

  friend std::ostream& operator<<(std::ostream& os, const Memory& memory);
  void inserisci(char tipo, int riga1, int colonna1, int riga2, int colonna2);
  void riassumi();
  bool flip(int riga1, int colonna1, int riga2, int colonna2);
  friend Memory operator+(Memory self, const Memory& other);
  Memory& operator>>(int i);

  bool out_of_bounds(int r, int c) const;
  static bool correct_letter(char l);
  static int char_to_type_index(char t);

 private:
  unsigned m_dimension = DEFAULT_GRID_SIZE;
  char** m_grid = nullptr;
  int m_points = 0;
  unsigned m_cards_left[5]{};
};

#endif  // STM_MEMORY_H
