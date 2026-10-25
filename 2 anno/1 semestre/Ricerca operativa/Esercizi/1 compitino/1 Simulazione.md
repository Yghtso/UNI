# Simulazione 1

## Esercizio 1

Un'azienda produce due prodotti (A e B) il cui profitto unitario, da massimizzare, è 7 per A e 10 per B, e per cui servono due macchine (C e D). Sotto le ore necessarie per una unità di A e B e le ore disponibili:

| Macchine | A  | B  | Disponibilità |
|----------|----|----|---------------|
| C        | 12 | 9  | 50            |
| D        | 6  | 15 | 58            |

Fare un passo del simplesso partendo dalla soluzione migliore tra quelle che non producono B. Calcolare valutazione inferiore e superiore ed un piano di taglio di Gomory.

## Esercizio 2

Si consideri il problema:

$$
\begin{cases}
\min\ y_1 + 6y_3 + 9y_4 + 4y_5 + 7y_6 \\
-2y_1 + y_3 - y_4 + y_5 + 2y_6 = 3 \\
y_1 - y_2 + y_3 + 3y_4 - y_6 = 2 \\
y \ge 0
\end{cases}
$$

Calcolare la coppia di soluzioni complementari date da $B = \{2, 6\}$ e dire se sono ammissibili, degeneri, ottime. Dire se $y = (0, 1, 3, 0, 0, 0)$ è di base ammissibile, degenere, ottima. Effettuare due passi del simplesso da $B = \{4, 6\}$.

## Esercizio 3

Si consideri il problema di zaino con portata massima 240:

| Beni   | 1  | 2   | 3  | 4  | 5   | 6  |
|--------|----|-----|----|----|-----|----|
| Valori | 18 | 25  | 9  | 14 | 30  | 7  |
| Peso   | 73 | 142 | 31 | 96 | 205 | 58 |

Calcolare una valutazione inferiore ed una superiore nel caso binario e in quello intero. Svolgere il "Branch and Bound" nel caso binario e costruire un piano di taglio nel caso intero.

## Esercizio 4

Si consideri il problema di TSP:

| Città | 2  | 3  | 4  | 5  |
|-------|----|----|----|----|
| 1     | 17 | 22 | 16 | 27 |
| 2     |    | 25 | 13 | 33 |
| 3     |    |    | 14 | 29 |
| 4     |    |    |    | 30 |

Trovare una valutazione con il 3-albero di costo minimo. Scrivere esplicitamente i vincoli violati da tale 3-albero. Trovare una valutazione con l'algoritmo del nodo più vicino a partire da 1. Applicare il *Branch and Bound*, utilizzando il 3-albero di costo minimo ed istanziando, nell'ordine, le variabili $x_{14}$, $x_{15}$, $x_{13}$.