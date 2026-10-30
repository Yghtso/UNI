# Simulazione 10

*Stesso modello della Seconda prova (22-10-26): stesse richieste per ciascun esercizio, dati diversi.*

## Esercizio 1

Un'azienda produce due prodotti (A e B) il cui profitto unitario, da massimizzare, è 6 per A e 9 per B, e per cui servono due macchine (C e D). Sotto le ore necessarie per una unità di A e B e le ore disponibili:

| Macchine | A  | B  | Disponibilità |
|----------|----|----|---------------|
| C        | 19 | 4  | 58            |
| D        | 6  | 12 | 55            |

Fare un passo del simplesso partendo dalla soluzione migliore tra quelle che non producono A. Calcolare valutazione inferiore e superiore ed un piano di taglio di Gomory.

## Esercizio 2

Si consideri il problema:

$$
\begin{cases}
\min\ y_3 + 7y_4 + 2y_5 + y_6 \\
-2y_1 - 2y_3 - y_4 + y_5 - y_6 = -1 \\
y_1 - y_2 + 3y_3 + y_4 - y_5 + 2y_6 = 1 \\
y \ge 0
\end{cases}
$$

Calcolare la coppia di soluzioni complementari date da $B = \{5, 6\}$ e dire se sono ammissibili, degeneri, ottime. Dire se $y = (0, 0, 0, 1, 0, 0)$ è di base ammissibile, degenere, ottima. Effettuare due passi del simplesso da $B = \{2, 6\}$.

## Esercizio 3

Si consideri il problema di zaino con portata massima 232:

| Beni   | 1  | 2  | 3  | 4   | 5  | 6   |
|--------|----|----|----|-----|----|-----|
| Valori | 17 | 23 | 25 | 28  | 18 | 7   |
| Peso   | 40 | 64 | 34 | 120 | 22 | 130 |

Calcolare una valutazione inferiore ed una superiore nel caso binario e in quello intero. Svolgere il "Branch and Bound" nel caso binario e costruire un piano di taglio nel caso intero.

## Esercizio 4

Si consideri il problema di TSP:

| Città | 2  | 3  | 4  | 5  |
|-------|----|----|----|----|
| 1     | 22 | 25 | 34 | 24 |
| 2     |    | 18 | 16 | 37 |
| 3     |    |    | 12 | 26 |
| 4     |    |    |    | 16 |

Trovare una valutazione con il 5-albero di costo minimo. Scrivere esplicitamente i vincoli violati da tale 5-albero. Trovare una valutazione con l'algoritmo del nodo più vicino a partire da 1. Applicare il *Branch and Bound*, utilizzando il 5-albero di costo minimo ed istanziando, nell'ordine, le variabili $x_{24}$, $x_{34}$, $x_{45}$.
