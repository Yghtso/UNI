#include <iostream>

#include "Raccoglitore.h"
using namespace std;

// Nel file compito.h definire il seguente tipo enumerato:
// enum colore{BIANCO,ROSSO,GIALLO,VERDE};

int main() {
  cout << "---PRIMA PARTE---" << endl;
  cout << "Test del costruttore e della aggiungiBlocco()" << endl;
  Raccoglitore r(3);
  r.aggiungiBlocco(VERDE);
  r.aggiungiBlocco(VERDE);
  r.aggiungiBlocco(BIANCO);
  r.aggiungiBlocco(ROSSO);
  r.aggiungiBlocco(GIALLO);
  cout << r << endl;  // deve visualizzare:
                      // VR
                      // VG
                      // B

  cout << "Altri test della aggiungiBlocco() e op. di uscita" << endl;
  r.aggiungiBlocco(BIANCO);
  r.aggiungiBlocco(VERDE);
  cout << r << endl;  // deve visualizzare:
                      // VRV
                      // VG
                      // BB

  cout << "Primo test della togliBlocco()" << endl;
  r.togliBlocco();
  cout << r << endl;  // deve visualizzare:
                      // VR
                      // VG
                      // BB

  cout << "Secondo test della togliBlocco()" << endl;
  r.togliBlocco();
  cout << r << endl;  // deve visualizzare:
                      // V
                      // VG
                      // BB

  cout << "Terzo test della togliBlocco()" << endl;
  r.togliBlocco();
  cout << r << endl;  // deve visualizzare:
                      // V
                      // V
                      // BB

  cout << "\n---SECONDA PARTE---" << endl;
  {
    cout << "Test del costruttore di copia" << endl;
    Raccoglitore r2(r);
    cout << r2 << endl;

    cout << "Test dell'operatore di assegnamento" << endl;
    Raccoglitore r3(4);
    r3.aggiungiBlocco(ROSSO);
    r3.aggiungiBlocco(VERDE);
    r3 = r;
    cout << r3 << endl;

    cout << "Test del distruttore (se ridefinito)" << endl;
  }

  cout << "\n---TERZA PARTE---" << endl;
  Raccoglitore r4(2);
  r4.togliBlocco();
  cout << "Test togli blocco con raccoglitore vuoto" << endl << r4 << endl;

  r4.aggiungiBlocco(BIANCO);
  r4.aggiungiBlocco(ROSSO);
  r4.aggiungiBlocco(GIALLO);
  r4.aggiungiBlocco(VERDE);
  r4.aggiungiBlocco(ROSSO);
  cout << "Test aggiungi blocco" << endl << r4 << endl;

  r4.togliBlocco();
  r4.togliBlocco();
  cout << "Test togli blocco 2 volte di seguito" << endl << r4 << endl;

  r4.togliBlocco();
  r4.togliBlocco();
  cout << "Test togli blocco 2 volte di seguito" << endl << r4 << endl;

  r4.togliBlocco();
  r4.togliBlocco();
  cout << "Test togli blocco 2 volte di seguito" << endl << r4 << endl;

  return 0;
}