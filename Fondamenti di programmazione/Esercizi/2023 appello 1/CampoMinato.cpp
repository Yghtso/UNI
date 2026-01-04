#include "CampoMinato.h"

#include <iostream>
#include <ostream>

// --- Metodi Privati (Bug Risolti) ---

bool CampoMinato::out_of_bounds(const int r, const int c) const {
  if (r < 0 || c < 0 || r >= static_cast<int>(m_grid_size) ||
      c >= static_cast<int>(m_grid_size))
    return true;
  return false;
}

unsigned CampoMinato::count_adjacent_mines(int r, int c) const {
  unsigned count = 0;
  for (int i = -1; i <= 1; ++i) {
    for (int j = -1; j <= 1; ++j) {
      if (i == 0 && j == 0) continue;

      if (!out_of_bounds(r + i, c + j)) {
        if (m_grid[r + i][c + j].mine) {
          count++;
        }
      }
    }
  }
  return count;
}

CampoMinato::CampoMinato(const int n)
    : m_grid_size{n <= 1 ? DEFAULT_GRID_SIZE : static_cast<unsigned>(n)},
      m_grid{new Cell*[m_grid_size]},
      m_cells_left_to_revealed{m_grid_size * m_grid_size} {
  for (unsigned i = 0; i < m_grid_size; ++i) {
    m_grid[i] = new Cell[m_grid_size];
  }
}

CampoMinato::CampoMinato(const CampoMinato& other)
    : m_grid_size{other.m_grid_size},
      m_grid{new Cell*[other.m_grid_size]},
      m_cells_left_to_revealed{(other.m_grid_size * other.m_grid_size) -
                               other.m_mines},
      m_mines{other.m_mines} {
  for (unsigned i = 0; i < m_grid_size; ++i) {
    m_grid[i] = new Cell[m_grid_size];
    for (unsigned j = 0; j < m_grid_size; ++j) {
      m_grid[i][j].mine = other.m_grid[i][j].mine;
      m_grid[i][j].revealed = false;
      m_grid[i][j].adjacent_mines_counter = 0;
    }
  }

  if (m_mines > 0)
    m_state = CAN_BE_STARTED;
  else
    m_state = CANT_BE_STARTED;
}

CampoMinato::~CampoMinato() {
  for (unsigned i = 0; i < m_grid_size; ++i) {
    delete[] m_grid[i];
  }
  delete[] m_grid;
}

bool CampoMinato::aggiungi_mina(const int r, const int c) {
  if (m_state == RUNNING || m_state == ENDED) return false;
  if (out_of_bounds(r, c)) return false;

  if (m_grid[r][c].mine) return false;

  m_grid[r][c].mine = true;
  m_state = CAN_BE_STARTED;
  m_cells_left_to_revealed--;
  m_mines++;
  return true;
}

void CampoMinato::scopri(const int r, const int c) {
  if (m_state == CANT_BE_STARTED || m_state == ENDED) return;
  if (out_of_bounds(r, c)) return;

  if (m_grid[r][c].mine) {
    m_state = ENDED;
    m_grid[r][c].revealed = true;
    m_win = false;
    return;
  }

  if (m_state == CAN_BE_STARTED) m_state = RUNNING;

  if (m_grid[r][c].revealed) return;

  m_grid[r][c].revealed = true;
  m_grid[r][c].adjacent_mines_counter = count_adjacent_mines(r, c);
  m_cells_left_to_revealed--;

  if (m_grid[r][c].adjacent_mines_counter == 0) {
    for (int i = -1; i <= 1; ++i) {
      for (int j = -1; j <= 1; ++j) {
        if (i == 0 && j == 0) continue;

        int nr = r + i;
        int nc = c + j;

        if (!out_of_bounds(nr, nc) && !m_grid[nr][nc].revealed &&
            !m_grid[nr][nc].mine) {
          m_grid[nr][nc].revealed = true;
          m_grid[nr][nc].adjacent_mines_counter = count_adjacent_mines(nr, nc);
          m_cells_left_to_revealed--;
        }
      }
    }
  }

  if (m_cells_left_to_revealed == 0) {
    m_state = ENDED;
    m_win = true;
  }
}

CampoMinato operator+(const CampoMinato& c1, const CampoMinato& c2) {
  unsigned new_size = c1.m_grid_size + c2.m_grid_size;

  CampoMinato result(new_size);

  for (unsigned i = 0; i < c1.m_grid_size; ++i) {
    for (unsigned j = 0; j < c1.m_grid_size; ++j) {
      if (c1.m_grid[i][j].mine) {
        result.aggiungi_mina(i, j);
      }
    }
  }

  for (unsigned i = 0; i < c2.m_grid_size; ++i) {
    for (unsigned j = 0; j < c2.m_grid_size; ++j) {
      if (c2.m_grid[i][j].mine) {
        result.aggiungi_mina(c1.m_grid_size + i, c1.m_grid_size + j);
      }
    }
  }

  return result;
}

std::ostream& operator<<(std::ostream& os, const CampoMinato& minato) {
  if (minato.m_state == CampoMinato::CANT_BE_STARTED && minato.m_mines == 0) {
    os << "Inserire una mina per avviare il gioco" << std::endl;
  } else if (minato.m_state == CampoMinato::ENDED) {
    os << (minato.m_win ? "Vittoria!" : "Game over") << std::endl;
  }

  os << "Campo Minato " << minato.m_grid_size << "x" << minato.m_grid_size
     << " - Mine totali: " << minato.m_mines << std::endl;

  for (unsigned i = 0; i < minato.m_grid_size; ++i) {
    for (unsigned j = 0; j < minato.m_grid_size; ++j) {
      if (minato.m_grid[i][j].revealed) {
        if (minato.m_grid[i][j].mine) {
          os << "* ";
        } else if (minato.m_grid[i][j].adjacent_mines_counter == 0) {
          os << "  ";
        } else {
          os << minato.m_grid[i][j].adjacent_mines_counter << " ";
        }
      } else {
        os << "X ";
      }
    }
    os << std::endl;
  }
  return os;
}