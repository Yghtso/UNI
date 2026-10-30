# Simulazione 7

*Argomenti: problema di miscelazione (min) e simplesso, forma duale standard e simplesso duale, bin packing, TSP simmetrico con 2-albero.*

## Esercizio 1

Un'azienda agricola deve concimare un campo usando due fertilizzanti (A e B), venduti in sacchi che costano rispettivamente 10 e 7 euro. Il campo deve ricevere almeno una certa quantità di azoto, fosforo e potassio. Sotto i kg di ciascuna sostanza contenuti in un sacco di A e di B e i fabbisogni minimi:

| Sostanza | A | B | Fabbisogno |
|----------|---|---|------------|
| Azoto    | 4 | 2 | 71         |
| Fosforo  | 1 | 9 | 73         |
| Potassio | 4 | 6 | 73         |

Scrivere il modello che minimizza la spesa. Fare un passo del simplesso partendo dalla soluzione migliore tra quelle che non usano A. La soluzione trovata è ottima? Sapendo che i sacchi si comprano interi, calcolare una valutazione inferiore e una superiore, stimare l'errore e calcolare i piani di taglio di Gomory relativi alle due variabili decisionali.

## Esercizio 2

Si consideri il problema:

$$
\begin{cases}
\min\ 4y_1 + 12y_2 + 11y_3 + y_4 + 4y_5 \\
y_1 - y_3 - 2y_4 - y_5 + 3y_6 = -5 \\
3y_1 + y_2 + 2y_3 - 2y_4 - 2y_5 + 2y_6 = 4 \\
y \ge 0
\end{cases}
$$

Calcolare la coppia di soluzioni complementari data da $B = \{2, 4\}$ e dire se sono ammissibili, degeneri, ottime. Dire se $y = (14, 0, 0, 0, 19, 0)$ è di base, ammissibile, degenere, ottima. Effettuare due passi del simplesso duale partendo da $B = \{3, 5\}$. La soluzione trovata è ottima?

## Esercizio 3

Un corriere deve spedire 10 pacchi con i seguenti pesi (kg):

| Pacco | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  | 10 |
|-------|----|----|----|----|----|----|----|----|----|----|
| Peso  | 35 | 61 | 13 | 70 | 33 | 12 | 53 | 16 | 68 | 39 |

usando furgoni tutti uguali di portata 100 kg, e vuole usare il minor numero possibile di furgoni (problema di *bin packing*). Scrivere il modello, usando come numero di furgoni disponibili quello fornito da un algoritmo greedy. Calcolare una valutazione inferiore. Calcolare una valutazione superiore con gli algoritmi Next Fit Decreasing, First Fit Decreasing e Best Fit Decreasing. Dimostrare che la migliore soluzione trovata è ottima.

## Esercizio 4

Si consideri il problema di TSP:

| Città | 2  | 3  | 4  | 5  |
|-------|----|----|----|----|
| 1     | 25 | 11 | 19 | 32 |
| 2     |    | 37 | 29 | 28 |
| 3     |    |    | 28 | 22 |
| 4     |    |    |    | 30 |

Trovare una valutazione con il 2-albero di costo minimo. Scrivere esplicitamente i vincoli violati da tale 2-albero. Trovare una valutazione con l'algoritmo del nodo più vicino a partire da 2. Applicare il *Branch and Bound*, utilizzando il 2-albero di costo minimo ed istanziando, nell'ordine, le variabili $x_{13}$, $x_{12}$, $x_{14}$.
