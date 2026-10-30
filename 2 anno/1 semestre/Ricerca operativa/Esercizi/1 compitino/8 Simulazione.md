# Simulazione 8

*Argomenti: PLI con simplesso primale, taglio di Gomory e simplesso duale; caratterizzazione dei poliedri vuoti; covering problem con soglia; TSP simmetrico su 6 città con archi mancanti.*

## Esercizio 1

Si consideri il problema di programmazione lineare intera:

$$
\begin{cases}
\max\ 5x_1 + 11x_2 \\
9x_1 + 10x_2 \le 49 \\
6x_1 + 14x_2 \le 38 \\
x_1, x_2 \in \mathbb{Z}_+
\end{cases}
$$

Risolvere il rilassato continuo con il simplesso primale partendo dall'origine (scrivere $x \ge 0$ come terzo e quarto vincolo, $-x_1 \le 0$ e $-x_2 \le 0$). Calcolare una valutazione superiore ed una inferiore del valore ottimo. Calcolare il taglio di Gomory relativo a $r = 1$. Aggiungere il taglio come quinto vincolo ed effettuare un passo del simplesso duale partendo dalla base ottima trovata prima. La nuova soluzione è ottima per il problema intero?

## Esercizio 2

Usando il problema ausiliario, dire se i seguenti poliedri sono vuoti:

$$
P_1 = \begin{cases}
-4x_1 + 5x_2 - 2x_3 + 2x_4 = 8 \\
2x_1 + 4x_2 + x_3 + 4x_4 = 9 \\
x \ge 0
\end{cases}
\qquad
P_2 = \begin{cases}
-x_1 - 3x_2 + 3x_3 - 4x_4 = 12 \\
2x_1 + 2x_2 + 5x_3 - 4x_4 = 8 \\
x \ge 0
\end{cases}
$$

Per ciascuno scrivere il problema ausiliario, osservare in che forma è scritto e risolverlo con l'algoritmo del simplesso opportuno partendo dalla base $B = \{5, 6\}$ (le variabili artificiali). Se il poliedro non è vuoto, fornire un suo punto.

## Esercizio 3

Un'azienda sanitaria deve decidere in quali tra 6 siti attivare una postazione di ambulanza in modo da servire 7 quartieri. Un quartiere è coperto da un sito se il tempo di percorrenza è al massimo di **10 minuti**. Sotto i tempi (minuti) e i costi di attivazione (migliaia di euro):

| Quartiere \ Sito | 1  | 2  | 3  | 4  | 5  | 6  |
|------------------|----|----|----|----|----|----|
| Q1               | 24 | 4  | 18 | 10 | 23 | 13 |
| Q2               | 9  | 17 | 8  | 14 | 19 | 10 |
| Q3               | 23 | 9  | 25 | 13 | 9  | 18 |
| Q4               | 17 | 18 | 9  | 16 | 25 | 24 |
| Q5               | 15 | 12 | 23 | 6  | 16 | 9  |
| Q6               | 24 | 7  | 24 | 15 | 24 | 9  |
| Q7               | 19 | 3  | 22 | 19 | 10 | 18 |
| **Costo**        | 5  | 12 | 11 | 9  | 4  | 5  |

Costruire la matrice di copertura e scrivere il modello. Applicare le regole di riduzione. Calcolare una valutazione superiore con l'algoritmo di Chvátal e una inferiore con il rilassato continuo. Applicare il *Branch and Bound* istanziando la variabile $x_2$ e trovare la soluzione ottima.

## Esercizio 4

Si consideri il problema di trovare il ciclo hamiltoniano di costo minimo su una rete di 6 città, le cui distanze sono indicate in tabella ("–" indica che il collegamento non esiste):

| Città | 2  | 3  | 4  | 5  | 6  |
|-------|----|----|----|----|----|
| 1     | 39 | 28 | 19 | 39 | 37 |
| 2     |    | –  | 35 | 24 | 29 |
| 3     |    |    | –  | –  | 22 |
| 4     |    |    |    | 14 | 18 |
| 5     |    |    |    |    | 34 |

Trovare una valutazione inferiore calcolando il 3-albero di costo minimo e scrivere i vincoli violati. Trovare una valutazione superiore con l'algoritmo del nodo più vicino a partire dal nodo 3. Risolvere il problema con il *Branch and Bound*, utilizzando il 3-albero di costo minimo ed istanziando, nell'ordine, le variabili $x_{46}$, $x_{45}$, $x_{14}$.
