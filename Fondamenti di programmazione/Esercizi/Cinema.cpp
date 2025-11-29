#include "Cinema.h"

#include <cstring>
#include <iostream>

Cinema::Cinema(unsigned n, unsigned p, char *s) {
  // CONTROLLI NOME
  if (strlen(s) > 30) {
    // ALLOCAZIONE NOME
    this->name = new char[strlen("Cinema") + 1];
    strcpy(this->name, "Cinema");

  } else {
    // ALLOCAZIONE NOME
    this->name = new char[strlen(s) + 1];
    strcpy(this->name, s);
  }

  // CONTROLLI NUMERO RIGHE
  if (n > MAX_ROWS) {  // (unsigned non devo fare controllo > 0 ?)
    this->rows = MAX_ROWS;
  } else {
    this->rows = n;
  }

  // CONTROLLO NUMERO COLONNE
  if (p > MAX_COLS) {
    this->cols = MAX_COLS;
  } else {
    this->cols = p;
  }
  // ALLOCAZIONE POSTI
  this->posti = new bool *[this->rows];
  for (unsigned i = 0; i < this->rows; i++) {
    this->posti[i] = new bool[this->cols]{};
  }
}
Cinema::~Cinema()  // DELETE name, posti
{
  // DEALLOCAZIONE NOME
  delete[] this->name;

  for (unsigned i = 0; i < this->rows; i++) {
    // DEALLOCAZIONE POSTI(COLONNE)
    delete[] this->posti[i];
  }
  // DEALLOCAZIONE FILE(RIGHE)
  delete[] this->posti;

  this->posti = nullptr;
}

bool Cinema::prenota(char l, unsigned short j) {
  unsigned row = l - 'A', col = j - 1;

  if (row > this->rows || col > this->cols) return false;

  if (this->posti[row][col]) return false;

  this->posti[row][col] = true;
  return true;
}

bool Cinema::cancella(char l, unsigned short j) {
  unsigned short row = l - 'A', col = j - 1;

  if (row > this->rows || col > this->cols) return false;

  if (!this->posti[row][col]) return false;

  this->posti[row][col] = false;
  return true;
}

void Cinema::stampa() const {
  std::cout << "Nome del cinema: " << this->name << std::endl << " ";
  for (unsigned short i = 1; i <= this->cols; i++) {
    std::cout << i;
  }

  std::cout << std::endl;

  for (unsigned i = 0; i < this->rows; i++) {
    std::cout << static_cast<char>(i + 'A');

    for (unsigned short j = 0; j < this->cols; j++) {
      if (this->posti[i][j])
        std::cout << "*";
      else
        std::cout << " ";
    }
    std::cout << std::endl;
  }
}

int Cinema::quantiLiberi() const {
  int counter = 0;

  for (unsigned short i = 0; i < this->rows; i++) {
    for (unsigned short j = 0; j < this->cols; j++) {
      if (!this->posti[i][j]) counter++;
    }
  }
  return counter;
}

bool Cinema::prenotaAdiacenti(unsigned k) {
  if (this->quantiLiberi() < k) return false;
  if (k == 0) return true;

  for (unsigned short i = 0; i < this->rows; i++) {
    unsigned counter = 0;

    for (unsigned short j = 0; j < this->cols; j++) {
      if (!this->posti[i][j]) {
        counter++;

        // PRENOTA EFFETTIVAMENTE I POSTI
        if (counter == k) {
          unsigned posti_prenotati = 0;

          do {
            this->prenota(i + 'A', j - posti_prenotati + 1);
            posti_prenotati++;
          } while (posti_prenotati < k);
          return true;
        }
      }

      if (this->posti[i][j]) counter = 0;
    }
  }
  return false;
}
