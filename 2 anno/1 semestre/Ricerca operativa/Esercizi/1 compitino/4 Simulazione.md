## Esercizio 1
Un allevatore prepara un mangime usando due farine (A e B), il cui costo unitario, da minimizzare, è 6 per A e 5 per B. Il mangime deve contenere almeno una certa quantità di due sostanze (C e D). Sotto le unità di sostanza contenute in una unità di A e B e i fabbisogni minimi:

| Sostanze | A  | B  | Fabbisogno |
|----------|----|----|------------|
| C        | 14 | 15 | 65         |
| D        | 17 | 9  | 53         |

Fare un passo del simplesso partendo dalla soluzione migliore tra quelle che non usano A. Calcolare valutazione inferiore e superiore ed un piano di taglio di Gomory.

## Esercizio 2
Si consideri il problema:

$$
\begin{cases}
\max\ 2x_1 + 3x_2 \\
x_1 + x_2 \le 7 \\
-x_1 \le 0 \\
-x_2 \le 0 \\
x_1 - 2x_2 \le 4 \\
-x_1 + 3x_2 \le 9 \\
x_1 \le 6
\end{cases}
$$

Scrivere il problema duale. Calcolare la coppia di soluzioni complementari date da $B = \{2,5\}$ e dire se sono ammissibili, degeneri, ottime. Dire se $y = (\tfrac94, 0, 0, 0, \tfrac14, 0)$ è di base ammissibile, degenere, ottima. Effettuare due passi del simplesso da $B = \{4,6\}$.2

## Esercizio 3
Si consideri il problema di zaino con portata massima 224:

| Beni   | 1  | 2  | 3  | 4   | 5   | 6   |
|--------|----|----|----|-----|-----|-----|
| Valori | 23 | 24 | 7  | 20  | 24  | 10  |
| Peso   | 17 | 53 | 91 | 116 | 154 | 214 |

Calcolare una valutazione inferiore ed una superiore nel caso binario e in quello intero. Svolgere il "Branch and Bound" nel caso binario e costruire un piano di taglio nel caso intero.

## Esercizio 4
Si consideri il problema di TSP asimmetrico (costo dell'arco dalla città di riga alla città di colonna):

| Città | 1  | 2  | 3  | 4  | 5  |
|-------|----|----|----|----|----|
| 1     | –  | 33 | 18 | 33 | 22 |
| 2     | 16 | –  | 21 | 20 | 40 |
| 3     | 39 | 38 | –  | 24 | 28 |
| 4     | 33 | 34 | 15 | –  | 38 |
| 5     | 11 | 18 | 39 | 25 | –  |

Trovare una valutazione risolvendo il problema di assegnamento. Scrivere esplicitamente i vincoli di connessione violati dalla soluzione trovata. Trovare una valutazione con l'algoritmo delle toppe e una con l'algoritmo del nodo più vicino a partire da 1. Stimare l'errore relativo.