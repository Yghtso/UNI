//
// Created by yghtso on 12/24/25.
//

#include "SpaceAsteroids.h"

#include <iostream>

char SpaceAsteroids::Entity::toChar(const EntityType type) {
  switch (type) {
    case Ship:
      return 'A';
    case Asteroid:
      return 'X';
    case Laser:
      return '|';
    default:
      return ' ';
  }
}
SpaceAsteroids::Entity::EntityType SpaceAsteroids::Entity::toEntity(
    const char character) {
  switch (character) {
    case 'A':
      return Ship;
    case 'X':
      return Asteroid;
    case '|':
      return Laser;
    default:
      return Empty;
  }
}

SpaceAsteroids::SpaceAsteroids(const size_t altezza, const size_t larghezza,
                               const unsigned energia_massima)
    : m_height{altezza < s_min_height || altezza > s_max_height ? s_max_height
                                                                : altezza},
      m_width{larghezza < s_min_width || larghezza > s_max_width ||
                      larghezza % 2 == 0
                  ? s_max_width
                  : larghezza},
      m_max_energy{energia_massima == 0 ? s_default_energy : energia_massima},
      m_energy{m_max_energy},
      m_grid{new Entity*[m_height]},
      m_ship_position{m_width / 2 + 1} {
  for (size_t i = 0; i < m_height; ++i) {
    m_grid[i] = new Entity[m_width]{};
  }

  m_grid[m_height - 1][m_ship_position - 1].m_entity_type = Entity::Ship;
}

bool SpaceAsteroids::colloca_asteroide(const size_t col) const {
  if (col == 0 || col > m_width) return false;

  if (m_grid[0][col - 1].m_entity_type == Entity::EntityType::Empty) {
    m_grid[0][col - 1].m_entity_type = Entity::EntityType::Asteroid;
    return true;
  }

  return false;
}

void SpaceAsteroids::avanza() { avanza_asteroidi(); }

void SpaceAsteroids::avanza_asteroidi() {
  if (m_grid[m_height - 2][m_ship_position - 1].m_entity_type ==
      Entity::EntityType::Asteroid) {
    reset_game();
  }

  delete m_grid[m_height - 1];

  m_score++;
  if (m_score > s_record) s_record = m_score;

  for (size_t i = m_height - 1; i != 0; i--) {
    m_grid[i] = m_grid[i - 1];
  }

  m_grid[m_height - 1][m_ship_position - 1].m_entity_type =
      Entity::EntityType::Ship;

  m_grid[0] = new Entity[m_width]{};
}

void SpaceAsteroids::reset_game() {
  m_score = 0;
  m_ship_position = m_width / 2 + 1;

  for (size_t i = 0; i < m_height; ++i) {
    for (size_t j = 0; j < m_width; ++j) {
      m_grid[i][j].m_entity_type = Entity::EntityType::Empty;
    }
  }

  m_grid[m_height - 1][m_ship_position - 1].m_entity_type =
      Entity::EntityType::Ship;

  m_energy = m_max_energy;
}

std::ostream& operator<<(std::ostream& os, const SpaceAsteroids& sa) {
  os << "Punteggio: " << sa.m_score << std::endl;
  os << "Record: " << SpaceAsteroids::s_record << std::endl;
  os << "Energia: " << sa.m_energy << std::endl;

  for (size_t i = 0; i < sa.m_width; ++i) {
    os << '_';
  }
  os << std::endl;

  for (size_t i = 0; i < sa.m_height; ++i) {
    for (size_t j = 0; j < sa.m_width; ++j) {
      if (i == sa.m_height - 1)
        os << (sa.m_grid[i][j].m_entity_type ==
                       SpaceAsteroids::Entity::EntityType::Empty
                   ? '_'
                   : SpaceAsteroids::Entity::toChar(
                         sa.m_grid[i][j].m_entity_type));
      else
        os << SpaceAsteroids::Entity::toChar(sa.m_grid[i][j].m_entity_type);
    }
    os << std::endl;
  }

  return os;
}

SpaceAsteroids::~SpaceAsteroids() {
  for (size_t i = 0; i < m_height; ++i) {
    delete m_grid[i];
  }
  delete m_grid;
}

SpaceAsteroids& SpaceAsteroids::operator<<=(const unsigned n) {
  for (unsigned i = 0; i < n; ++i) {
    if (m_ship_position != 1) {
      m_ship_position--;
      m_grid[m_height - 1][m_ship_position].m_entity_type =
          Entity::EntityType::Empty;
      m_grid[m_height - 1][m_ship_position - 1].m_entity_type =
          Entity::EntityType::Ship;
    }

    avanza_asteroidi();
  }

  return *this;
}

SpaceAsteroids& SpaceAsteroids::operator>>=(unsigned n) {
  for (unsigned i = 0; i < n; ++i) {
    if (m_ship_position != m_width) {
      m_ship_position++;
      m_grid[m_height - 1][m_ship_position - 2].m_entity_type =
          Entity::EntityType::Empty;
      m_grid[m_height - 1][m_ship_position - 1].m_entity_type =
          Entity::EntityType::Ship;
    }

    avanza_asteroidi();
  }

  return *this;
}

SpaceAsteroids& SpaceAsteroids::operator|=(unsigned n) {
  if (n == 0 || m_energy == 0) return *this;

  unsigned energy_used = n > m_energy ? m_max_energy : n;
  m_energy -= energy_used;

  bool asteroid_in_front_of_ship =
      m_grid[m_height - 2][m_ship_position - 1].m_entity_type ==
      Entity::EntityType::Asteroid;

  m_grid[m_height - 2][m_ship_position - 1].m_entity_type =
      Entity::EntityType::Laser;
  m_grid[m_height - 2][m_ship_position - 1].intensity =
      asteroid_in_front_of_ship ? energy_used - 1 : energy_used;
  avanza();

  return *this;
}