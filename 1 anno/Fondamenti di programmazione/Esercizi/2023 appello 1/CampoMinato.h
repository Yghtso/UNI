#ifndef STM_CAMPOMINATO_H
#define STM_CAMPOMINATO_H
#include <iosfwd>

class CampoMinato {
 public:
  static constexpr unsigned DEFAULT_GRID_SIZE = 10;

  CampoMinato(int n);

  CampoMinato(const CampoMinato& other);
  ~CampoMinato();

  bool aggiungi_mina(int r, int c);
  void scopri(int r, int c);

  friend std::ostream& operator<<(std::ostream& os, const CampoMinato& minato);

  friend CampoMinato operator+(const CampoMinato& c1, const CampoMinato& c2);

 private:
  bool out_of_bounds(int r, int c) const;
  unsigned count_adjacent_mines(int r, int c) const;

  enum GameState {
    CANT_BE_STARTED,
    CAN_BE_STARTED,
    RUNNING,
    ENDED,
  };

  struct Cell {
    bool revealed = false;
    bool mine = false;
    unsigned adjacent_mines_counter = 0;
  };

  unsigned m_grid_size = 0;
  unsigned m_cells_left_to_revealed = 0;
  unsigned m_mines = 0;
  Cell** m_grid = nullptr;
  bool m_win = false;
  GameState m_state = CANT_BE_STARTED;
};

#endif  // STM_CAMPOMINATO_H