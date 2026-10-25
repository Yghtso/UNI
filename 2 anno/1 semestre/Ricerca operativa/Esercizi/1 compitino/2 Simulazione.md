# Simulazione 2

## Esercizio 1

Un allevatore deve preparare un mangime usando due farine (A e B), il cui costo unitario, da minimizzare, è 8 per A e 7 per B. Il mangime deve contenere almeno una certa quantità di due sostanze nutritive (C e D). Sotto le unità di sostanza contenute in una unità di A e B e i fabbisogni minimi:

| Sostanze | A  | B  | Fabbisogno |
|----------|----|----|------------|
| C        | 11 | 6  | 40         |
| D        | 5  | 13 | 47         |

Fare un passo del simplesso partendo dalla soluzione migliore tra quelle che non usano A. Calcolare valutazione inferiore e superiore ed un piano di taglio di Gomory.

## Esercizio 2

Si consideri il problema:

$$
\begin{cases}
\max\ 2x_1 + 5x_2 \\
x_1 - x_2 \le 2 \\
-x_1 \le 0 \\
-x_2 \le 0 \\
x_1 + 2x_2 \le 10 \\
-x_1 + 2x_2 \le 6 \\
3x_1 + x_2 \le 15
\end{cases}
$$

Scrivere il problema duale. Calcolare la coppia di soluzioni complementari date da $B = \{5, 6\}$ e dire se sono ammissibili, degeneri, ottime. Dire se $y = \left(0, 0, 0, \tfrac{9}{4}, \tfrac{1}{4}, 0\right)$ è di base ammissibile, degenere, ottima. Effettuare due passi del simplesso da $B = \{1, 3\}$.

## Esercizio 3

Si consideri il problema di zaino con portata massima 190:

| Beni   | 1  | 2   | 3  | 4   | 5  | 6  |
|--------|----|-----|----|-----|----|----|
| Valori | 13 | 19  | 7  | 24  | 10 | 16 |
| Peso   | 61 | 104 | 29 | 158 | 83 | 97 |

Calcolare una valutazione inferiore ed una superiore nel caso binario e in quello intero. Svolgere il "Branch and Bound" nel caso binario e costruire un piano di taglio nel caso intero.

## Esercizio 4

Si consideri il problema di TSP:

| Città | 2  | 3  | 4  | 5  |
|-------|----|----|----|----|
| 1     | 23 | 17 | 31 | 15 |
| 2     |    | 27 | 13 | 18 |
| 3     |    |    | 21 | 16 |
| 4     |    |    |    | 35 |

Trovare una valutazione con il 3-albero di costo minimo. Scrivere esplicitamente i vincoli violati da tale 3-albero. Trovare una valutazione con l'algoritmo del nodo più vicino a partire da 1. Applicare il *Branch and Bound*, utilizzando il 3-albero di costo minimo ed istanziando, nell'ordine, le variabili $x_{15}$, $x_{25}$, $x_{35}$.