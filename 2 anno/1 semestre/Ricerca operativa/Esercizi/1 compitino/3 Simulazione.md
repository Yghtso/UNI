## Esercizio 1
Un'azienda produce due prodotti (A e B) il cui profitto unitario, da massimizzare, è 12 per A e 9 per B, e per cui servono due macchine (C e D). Sotto le ore necessarie per una unità di A e B e le ore disponibili:

| Macchine | A | B  | Disponibilità |
|----------|---|----|---------------|
| C        | 8 | 5  | 46            |
| D        | 7 | 18 | 80            |

Fare un passo del simplesso partendo dalla soluzione migliore tra quelle che non producono B. Calcolare valutazione inferiore e superiore ed un piano di taglio di Gomory.

## Esercizio 2
Si consideri il problema:

$$
\begin{cases}
\min\ 2y_1 + 10y_3 + 11y_5 + 15y_6 \\
-y_1 + y_3 - y_4 + 2y_5 + 3y_6 = 1 \\
y_1 - y_2 + 2y_3 + y_5 + y_6 = 3 \\
y \ge 0
\end{cases}
$$

Calcolare la coppia di soluzioni complementari date da $B = \{5,6\}$ e dire se sono ammissibili, degeneri, ottime. Dire se $y = (0, 0, \tfrac32, \tfrac12, 0, 0)$ è di base ammissibile, degenere, ottima. Effettuare due passi del simplesso da $B = \{4,6\}$.

## Esercizio 3
Si consideri il problema di zaino con portata massima 215:

| Beni   | 1  | 2  | 3  | 4  | 5  | 6   |
|--------|----|----|----|----|----|-----|
| Valori | 9  | 26 | 6  | 14 | 24 | 28  |
| Peso   | 85 | 61 | 55 | 27 | 17 | 212 |

Calcolare una valutazione inferiore ed una superiore nel caso binario e in quello intero. Svolgere il "Branch and Bound" nel caso binario e costruire un piano di taglio nel caso intero.

## Esercizio 4
Si consideri il problema di TSP:

| Città | 2  | 3  | 4  | 5  |
|-------|----|----|----|----|
| 1     | 30 | 31 | 38 | 19 |
| 2     |    | 28 | 13 | 37 |
| 3     |    |    | 22 | 23 |
| 4     |    |    |    | 21 |

Trovare una valutazione con il 5-albero di costo minimo. Scrivere esplicitamente i vincoli violati da tale 5-albero. Trovare una valutazione con l'algoritmo del nodo più vicino a partire da 1. Applicare il *Branch and Bound*, utilizzando il 5-albero di costo minimo ed istanziando, nell'ordine, le variabili $x_{24}$, $x_{34}$, $x_{45}$.