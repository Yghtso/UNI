## Esercizio 1
Un'azienda produce due semilavorati A e B, con costo unitario 8 per A e 5 per B, da minimizzare. Ogni unità fornisce componenti di tipo C e D, di cui servono quantità minime; inoltre il magazzino può contenere al massimo 4 unità in totale.

| Componenti | A  | B  | Fabbisogno minimo |
|------------|----|----|-------------------|
| C          | 13 | 8  | 45                |
| D          | 14 | 12 | 53                |

Fare un passo del simplesso partendo dalla soluzione migliore tra quelle che non producono B. Calcolare una valutazione inferiore e una superiore e stimare l'errore. Calcolare tutti i tagli di Gomory che si possono ottenere dal tableau ottimo.

## Esercizio 2
Si consideri il problema:

$$
\begin{cases}
\min\ 6y_1 + 2y_4 + 6y_5 + 4y_6 \\
y_1 - y_2 + y_4 - y_5 = 1 \\
y_1 - y_3 - y_4 + 2y_5 + y_6 = 1 \\
y \ge 0
\end{cases}
$$

Calcolare le coppie di soluzioni complementari date da $B = \{1,2\}$ e da $B = \{5,6\}$ e dire se sono ammissibili, degeneri, ottime. Dire se $y = (\tfrac12, 0, 0, \tfrac12, 0, 1)$ è di base, ammissibile, degenere, ottima. Effettuare due passi del simplesso da $B = \{2,5\}$.

## Esercizio 3
Si consideri il problema di zaino con portata massima 200:

| Beni   | 1   | 2   | 3  | 4   | 5  | 6  |
|--------|-----|-----|----|-----|----|----|
| Valori | 10  | 24  | 37 | 40  | 9  | 37 |
| Peso   | 111 | 197 | 22 | 237 | 68 | 22 |

Calcolare una valutazione inferiore ed una superiore nel caso binario e in quello intero. Svolgere il "Branch and Bound" nel caso binario e costruire un piano di taglio nel caso intero.

## Esercizio 4
Si consideri il problema di TSP:

| Città | 2  | 3  | 4  | 5  |
|-------|----|----|----|----|
| 1     | 16 | 22 | 18 | 24 |
| 2     |    | 36 | 40 | 12 |
| 3     |    |    | 11 | 31 |
| 4     |    |    |    | 21 |

Trovare una valutazione con il 4-albero di costo minimo e scrivere i vincoli violati. Trovare una valutazione con l'algoritmo del nodo più vicino a partire dal nodo 3 e stimare l'errore. Applicare il Branch and Bound utilizzando il 4-albero ed istanziando, nell'ordine, le variabili $x_{12}$, $x_{14}$, $x_{13}$.