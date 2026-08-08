//
// Created by yghtso on 12/24/25.
//

#ifndef STM_SPACEASTEROIDS_H
#define STM_SPACEASTEROIDS_H
#include <asm-generic/errno.h>

#include <iosfwd>

class SpaceAsteroids {
 public:
  static constexpr unsigned s_max_width = 7;
  static constexpr unsigned s_max_height = 9;
  static constexpr unsigned s_min_width = 3;
  static constexpr unsigned s_min_height = 3;
  static constexpr unsigned s_default_energy = 5;

  SpaceAsteroids(size_t altezza, size_t larghezza, unsigned energia_massima);
  bool colloca_asteroide(size_t col) const;
  void avanza();
  friend std::ostream& operator<<(std::ostream& os, const SpaceAsteroids& sa);

  ~SpaceAsteroids();
  SpaceAsteroids& operator<<=(unsigned n);
  SpaceAsteroids& operator>>=(unsigned n);
  SpaceAsteroids& operator|=(unsigned n);

 private:
  class Entity {
   public:
    friend SpaceAsteroids;
    friend std::ostream& operator<<(std::ostream& os, const SpaceAsteroids& sa);

    enum EntityType {
      Empty,
      Ship,
      Asteroid,
      Laser,
    };

    static char toChar(EntityType type);
    static EntityType toEntity(char character);

   private:
    EntityType m_entity_type = Empty;
    unsigned intensity = 0;
  };

  void avanza_asteroidi();
  void reset_game();

  unsigned m_score = 0;
  const size_t m_height;
  const size_t m_width;
  const unsigned m_max_energy;
  unsigned m_energy;
  size_t m_ship_position;

  static inline unsigned s_record = 0;
  Entity** m_grid = nullptr;
};

#endif  // STM_SPACEASTEROIDS_H
