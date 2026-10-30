# Simulazione 9

*Argomenti: produzione con vincolo di produzione minima e tutti i tagli di Gomory, duale e scarti complementari con simplesso duale in forma primale, zaino (container) binario e intero, TSP simmetrico con 4-albero.*

## Esercizio 1

Un'azienda produce due articoli (A e B) con profitto unitario 12 per A e 7 per B. Ogni unità di A richiede 4 ore macchina e 5 ore di manodopera, ogni unità di B 2 ore macchina e 5 ore di manodopera. Sono disponibili 51 ore macchina e 73 ore di manodopera. Per un contratto già firmato l'azienda deve produrre **almeno 2 unità di A**.

Scrivere il modello (ordinare i vincoli: ore macchina, manodopera, contratto, $x_B \ge 0$). Fare un passo del simplesso partendo dalla soluzione che produce esattamente la quantità minima di A e la massima quantità possibile di B. La soluzione trovata è ottima? È degenere?

Supponendo che si producano unità intere, calcolare una valutazione inferiore ed una superiore e stimare l'errore. Calcolare **tutti** i tagli di Gomory che si possono ottenere dal tableau ottimo: cosa si osserva?

## Esercizio 2

Si consideri il problema:

$$
(P)\quad
\begin{cases}
\max\ -4x_1 + 2x_2 \\
-x_1 + x_2 \le 7 \\
2x_1 - 3x_2 \le 9 \\
3x_1 - x_2 \le 15 \\
-x_2 \le 9 \\
-x_1 - 3x_2 \le 9 \\
-x_1 \le -2
\end{cases}
$$

Scrivere il problema duale $(D)$. Dire, usando il teorema degli scarti complementari, se $\bar x = (11, 18)$ è una soluzione ottima di $(P)$. Verificare che la base $B = \{1, 4\}$ è ammissibile per il duale ma non per il primale ed applicare il simplesso duale fino a trovare la soluzione ottima.

## Esercizio 3

Si consideri il problema di caricare un container di volume pari a 15 metri cubi, cercando di massimizzare il valore dei beni inseriti:

| Beni   | 1  | 2  | 3  | 4  | 5  |
|--------|----|----|----|----|----|
| Valori | 20 | 13 | 15 | 14 | 22 |
| Volumi | 8  | 2  | 3  | 9  | 4  |

Nel caso in cui ogni bene possa essere inserito al massimo una volta: calcolare una valutazione inferiore con un algoritmo greedy e una superiore risolvendo il rilassato continuo $0 \le x_i \le 1$, poi risolvere il problema con il *Branch and Bound*.

Nel caso in cui di ogni bene si possano inserire più copie: calcolare una valutazione inferiore ed una superiore e costruire un piano di taglio di Gomory.

## Esercizio 4

Si consideri il problema di TSP:

| Città | 2  | 3  | 4  | 5  |
|-------|----|----|----|----|
| 1     | 17 | 16 | 16 | 27 |
| 2     |    | 37 | 21 | 36 |
| 3     |    |    | 33 | 23 |
| 4     |    |    |    | 22 |

Scrivere il modello del TSP simmetrico per questa istanza, scrivendo esplicitamente il vincolo di grado del nodo 1 e un vincolo di connessione. Trovare una valutazione con il 4-albero di costo minimo e scrivere i vincoli violati. Trovare una valutazione con l'algoritmo del nodo più vicino a partire dal nodo 3 e stimare l'errore. Applicare il *Branch and Bound*, utilizzando il 4-albero di costo minimo ed istanziando, nell'ordine, le variabili $x_{12}$, $x_{14}$, $x_{13}$.
