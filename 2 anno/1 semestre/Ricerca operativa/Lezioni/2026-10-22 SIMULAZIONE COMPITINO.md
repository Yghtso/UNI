# Seconda prova: 22-10-26

## Esercizio 1

Un'azienda produce due prodotti (A e B) il cui profitto unitario, da massimizzare, è 9 per A e 8 per B, e per cui servono due macchine (C e D). Sotto le ore necessarie per una unità di A e B e le ore disponibili:

| Macchine | A  | B  | Disponibilità |
|----------|----|----|---------------|
| C        | 16 | 11 | 66            |
| D        | 5  | 18 | 68            |

Fare un passo del simplesso partendo dalla soluzione migliore tra quelle che non producono A. Calcolare valutazione inferiore e superiore ed un piano di taglio di Gomory.

## Esercizio 2

Si consideri il problema:

$$
\begin{cases}
\min\ 2y_3 + 7y_4 + 5y_5 + 5y_6 \\
-3y_1 - y_3 - y_4 + y_5 + y_6 = -4 \\
y_1 - y_2 + y_3 + 2y_4 - y_6 = 3 \\
y \ge 0
\end{cases}
$$

Calcolare la coppia di soluzioni complementari date da $B = \{5, 6\}$ e dire se sono ammissibili, degeneri, ottime. Dire se $y = (0, 0, 0, 0, -4, 0)$ è di base ammissibile, degenere, ottima. Effettuare due passi del simplesso da $B = \{2, 4\}$.

## Esercizio 3

Si consideri il problema di zaino con portata massima 229:

| Beni   | 1  | 2   | 3  | 4   | 5   | 6   |
|--------|----|-----|----|-----|-----|-----|
| Valori | 21 | 22  | 8  | 6   | 11  | 17  |
| Peso   | 88 | 211 | 15 | 227 | 153 | 141 |

Calcolare una valutazione inferiore ed una superiore nel caso binario e in quello intero. Svolgere il "Branch and Bound" nel caso binario e costruire un piano di taglio nel caso intero.

## Esercizio 4

Si consideri il problema di TSP:

| Città | 2  | 3  | 4  | 5  |
|-------|----|----|----|----|
| 1     | 20 | 24 | 21 | 32 |
| 2     |    | 17 | 30 | 19 |
| 3     |    |    | 22 | 18 |
| 4     |    |    |    | 25 |

Trovare una valutazione con il 5-albero di costo minimo. Scrivere esplicitamente i vincoli violati da tale 5-albero. Trovare una valutazione con l'algoritmo del nodo più vicino a partire da 1. Applicare il *Branch and Bound*, utilizzando il 5-albero di costo minimo ed istanziando, nell'ordine, le variabili $x_{23}$, $x_{24}$, $x_{25}$.