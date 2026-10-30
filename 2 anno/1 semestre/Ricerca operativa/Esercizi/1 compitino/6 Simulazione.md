# Simulazione 6

*Argomenti: modello di produzione e simplesso primale, tabella di basi, zaino binario/intero, TSP asimmetrico.*

## Esercizio 1

Una falegnameria produce tavoli (A) e librerie (B), con un profitto unitario di 9 e 13 (centinaia di euro). Per ogni unità servono legno (m²), ore di assemblaggio e ore di verniciatura secondo la seguente tabella, che riporta anche le disponibilità settimanali:

| Risorsa      | A | B  | Disponibilità |
|--------------|---|----|---------------|
| Legno        | 9 | 8  | 175           |
| Assemblaggio | 3 | 12 | 98            |
| Verniciatura | 2 | 4  | 42            |

Scrivere un modello matematico che determini il piano di produzione che massimizza il profitto (ordinare i vincoli: legno, assemblaggio, verniciatura, $x_A \ge 0$, $x_B \ge 0$). La soluzione che prevede la massima produzione di sole librerie può essere quella di partenza del simplesso? Se sì, fare un passo del simplesso e proseguire fino alla soluzione ottima, dicendo se è degenere.

Supponendo ora che tavoli e librerie vadano prodotti in unità intere, calcolare una valutazione inferiore ed una superiore del valore ottimo ed un piano di taglio di Gomory.

## Esercizio 2

Si consideri il problema:

$$
\begin{cases}
\max\ 3x_1 + 6x_2 \\
2x_1 \le 18 \\
x_1 - x_2 \le 12 \\
-x_1 + x_2 \le 1 \\
-x_2 \le 8 \\
3x_1 + 3x_2 \le 15 \\
-2x_1 \le 10
\end{cases}
$$

Completare la tabella:

| Vettore | Indici di base | Ammissibile (SI/NO) | Degenere (SI/NO) | Ottimo (SI/NO) |
|---------|----------------|---------------------|------------------|----------------|
| $x=$    | $\{2,5\}$      |                     |                  |                |
| $y=$    | $\{1,3\}$      |                     |                  |                |

Dire, motivando, se il problema può avere valore ottimo $+\infty$. Effettuare due passi del simplesso primale partendo dalla base $B=\{2,4\}$. La soluzione trovata è ottima?

## Esercizio 3

Si consideri il problema di zaino con portata massima 173:

| Beni   | 1  | 2  | 3  | 4  | 5  | 6  |
|--------|----|----|----|----|----|----|
| Valori | 6  | 36 | 25 | 34 | 13 | 34 |
| Peso   | 40 | 19 | 56 | 89 | 13 | 11 |

Calcolare una valutazione inferiore ed una superiore nel caso binario e in quello intero. Svolgere il "Branch and Bound" nel caso binario (istanziando ogni volta la variabile frazionaria del rilassato) e costruire un piano di taglio di Gomory nel caso intero.

## Esercizio 4

Si consideri il problema di TSP **asimmetrico** (costo dell'arco dalla città di riga alla città di colonna):

| Città | 1  | 2  | 3  | 4  | 5  |
|-------|----|----|----|----|----|
| 1     | –  | 34 | 12 | 26 | 35 |
| 2     | 17 | –  | 28 | 25 | 18 |
| 3     | 17 | 36 | –  | 37 | 24 |
| 4     | 39 | 28 | 21 | –  | 20 |
| 5     | 23 | 23 | 16 | 38 | –  |

Scrivere il modello del problema. Trovare una valutazione inferiore risolvendo il problema di assegnamento associato e scrivere esplicitamente i vincoli di connessione violati dalla soluzione trovata. Trovare una valutazione superiore con l'algoritmo delle toppe e una con l'algoritmo del nodo più vicino a partire da 1. Quale valutazione superiore conviene usare? Stimare l'errore relativo.
