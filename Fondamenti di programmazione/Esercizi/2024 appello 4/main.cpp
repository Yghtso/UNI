#include <iostream>

#include "CittaIlluminate.h"
using namespace std;

int main() {
  cout << "--- PRIMA PARTE ---" << endl;
  cout << "Test costruttore e funzione aggiungi" << endl;
  CittaIlluminate ci;
  ci.aggiungi("Pisa", 3);
  ci.aggiungi("Viareggio", 2);
  ci.aggiungi("Firenze", 4);
  cout << ci << endl;

  cout << "Test funzione commuta" << endl;
  ci.commuta("Pisa", 2, 2);
  ci.commuta("Pisa", 3, 3);
  ci.commuta("Firenze", 1, 1);
  ci.commuta("Firenze", 3, 2);
  ci.commuta("Firenze", 3, 3);
  cout << ci << endl;

  cout << "Test costruttore di copia" << endl;
  CittaIlluminate ci2 = ci;
  ci2.aggiungi("Livorno", 3);
  cout << ci2 << endl;

  cout << "--- SECONDA PARTE ---" << endl;
  cout << "Test eventuale distruttore" << endl;
  {
    CittaIlluminate ci3;
    ci3.aggiungi("Lucca", 3);
    ci3.aggiungi("Massa", 3);
    ci3.aggiungi("Carrara", 3);
  }
  cout << "Distruttore chiamato" << endl << endl;

  cout << "Test funzione rimuovi" << endl;
  ci.rimuovi("Viareggio");
  cout << ci << endl;

  cout << "Test operatore di negazione logica" << endl;
  cout << !ci << endl;

  cout << "Test operatore di complemento" << endl;
  ci.commuta("Pisa", 1, 2);
  cout << ~ci << endl;

  cout << "--- TERZA PARTE ---" << endl;
  cout << "Test funzione aggiungi con input non validi" << endl;
  ci.aggiungi("Citta' di lunghezza maggiore di 20 caratteri",
              3);                  // non aggiunge
  ci.aggiungi("", 2);              // non aggiunge
  ci.aggiungi("Pisa", 3);          // gia' presente
  ci.aggiungi("Firenze", 3);       // gia' presente
  ci.aggiungi("Empoli", 0);        // dimensione non valida
  ci.aggiungi("Castelnuovo", -3);  // dimensione non valida
  cout << ci << endl;

  cout << "Test funzione commuta con input non validi" << endl;
  ci.commuta("Non in lista", 1, 2);  // non accende
  ci.commuta("Firenze", 1, 1);       // luce giÃ  accesa
  ci.commuta("Pisa", 1, 4);          // fuori range
  ci.commuta("Firenze", 6, 5);       // fuori range
  ci.commuta("Pisa", 0, 2);          // fuori range
  ci.commuta("Firenze", 3, -1);      // fuori range
  cout << ci << endl;

  cout << "Test funzione rimuovi" << endl;
  ci.rimuovi("Non in lista");  // non rimuove perchÃ© non presente
  ci.rimuovi("Pisa");          // non rimuove perchÃ© non tutte le luci spente
  CittaIlluminate ci4 = ci;
  ci4.commuta("Pisa", 1, 2);
  // ? sono tutte accese non dovrebbe rimuoverle, ma dice che dovrebbe
  // rimuoverlo ?
  ci4.rimuovi("Pisa");  // rimozione in testa
  cout << ci4 << endl;

  cout << "Test operatore di negazione logica" << endl;
  ci.commuta("Firenze", 1, 1);  // riaccendo la luce spenta in precedenza
  ci.commuta("Firenze", 4, 3);  // adesso Firenze ha almeno il 20% di luci
                                // accese
  cout << ci << endl;
  !ci;
  cout << ci << endl;  // l'operatore ! deve modificare ci

  cout << "Test operatore di complemento" << endl;
  cout << ci << endl;
  ~ci;
  cout << ci << endl;  // L'operatore ~ non deve modificare ci

  return 0;
}
