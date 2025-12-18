#ifndef CINEMA_H
#define CINEMA_H

class Cinema {
 private:
  static constexpr int MAX_ROWS = 26, MAX_COLS = 9;
  bool **posti;
  char *name;
  unsigned rows, cols;

 public:
  Cinema(unsigned n, unsigned p, char *s);
  ~Cinema();

  bool prenota(char l, unsigned short j);
  bool cancella(char l, unsigned short j);
  void stampa() const;
  int quantiLiberi() const;
  bool prenotaAdiacenti(unsigned k);
};

#endif  // CINEMA_H
