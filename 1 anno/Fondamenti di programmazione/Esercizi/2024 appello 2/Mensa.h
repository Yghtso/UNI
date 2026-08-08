//
// Created by yghtso on 12/23/25.
//

#ifndef STM_MENSA_H
#define STM_MENSA_H
#include <iosfwd>

class Mensa {
 public:
  explicit Mensa(size_t N);
  friend std::ostream& operator<<(std::ostream& os, const Mensa& mensa);
  bool occupa(const char* id);
  void libera(size_t i);

  ~Mensa();
  Mensa(const Mensa& other);
  bool occupaGruppo(const char* id, unsigned n);
  void ordina();

 private:
  class Seat {
   public:
    friend Mensa;
    friend std::ostream& operator<<(std::ostream& os, const Mensa& mensa);
    Seat() = default;

   private:
    bool free = true;
    char* person_id = nullptr;
  };

  Seat* const seats = nullptr;
  const size_t seats_amount = 0;
  unsigned free_seats = 0;
};

#endif  // STM_MENSA_H
