//
// Created by yghtso on 12/18/25.
//

#ifndef STM_BATTAGLIA_H
#define STM_BATTAGLIA_H
#include <iosfwd>

class Battaglia {
 public:
  Battaglia(size_t m, unsigned n);
  bool aggiungi(size_t x1, size_t y1, size_t x2, size_t y2, unsigned player_id);
  bool fuoco(size_t x, size_t y);
  friend std::ostream& operator<<(std::ostream& os, const Battaglia& b);

  bool operator+=(const Battaglia& other);
  friend bool operator==(const Battaglia& battaglia, unsigned player_id);
  ~Battaglia();
  Battaglia(const Battaglia&) = delete;
  Battaglia& operator=(const Battaglia&) = delete;

 private:
  const size_t dimension{};
  const unsigned players_amount;

  int** matrix;
};

#endif  // STM_BATTAGLIA_H
