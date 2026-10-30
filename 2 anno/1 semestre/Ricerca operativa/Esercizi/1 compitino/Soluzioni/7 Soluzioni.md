# Soluzioni Simulazione 7

Convenzioni: primale $\max\ c^Tx,\ Ax \le b$, duale $\min\ y^Tb,\ y^TA = c^T,\ y \ge 0$, $W = -A_B^{-1}$.
Simplesso duale: $k = \min\{i \notin B : A_i x > b_i\}$, rapporti $r_i = \dfrac{y_i}{-A_k W^i}$ per $i \in B$ con $A_k W^i < 0$, $h = \arg\min r_i$.

---

## Esercizio 1

**Modello** ($x_1$ = sacchi di A, $x_2$ = sacchi di B):

$$
\begin{cases}
\min\ 10x_1 + 7x_2 \\
4x_1 + 2x_2 \ge 71 \\
x_1 + 9x_2 \ge 73 \\
4x_1 + 6x_2 \ge 73 \\
x_1, x_2 \ge 0
\end{cases}
\qquad\Longleftrightarrow\qquad
\begin{cases}
\max\ -10x_1 - 7x_2 \\
-4x_1 - 2x_2 \le -71 \\
-x_1 - 9x_2 \le -73 \\
-4x_1 - 6x_2 \le -73 \\
-x_1 \le 0 \\
-x_2 \le 0
\end{cases}
$$

Per il simplesso uso la forma a destra (formato primale standard).

**Vertice di partenza.** Con $x_1 = 0$ serve $x_2 \ge \max\{71/2,\ 73/9,\ 73/6\} = 71/2$. La soluzione più economica è $(0,\ 71/2)$, che attiva i vincoli 1 e 4: $B = \{1,4\}$.

| Passo | $B$ | $x$ | $y$ | $h$ | $W^h$ | $A_iW^h$ | rapporti | $k$ |
|---|---|---|---|---|---|---|---|---|
| 1 | $\{1,4\}$ | $(0,\ 71/2)$ | $(7/2,\ 0,\ 0,\ -4,\ 0)$ | 4 | $(1,\ -2)$ | $A_2:17,\ A_3:8,\ A_5:2$ | $r_2 = 29/2,\ r_3 = 35/2,\ r_5 = 71/4$ | 2 |

Nuova base $B = \{1,2\}$: $x = (29/2,\ 13/2)$, $y = (83/34,\ 4/17,\ 0,\ 0,\ 0) \ge 0$, quindi **è ottima**. Costo $10\cdot14.5 + 7\cdot6.5 = 190.5$. Non è degenere.

**Caso intero.**
- $v_I = \lceil 190.5 \rceil = 191$.
- $v_S$: arrotondo per eccesso, $\lceil \bar x \rceil = (15, 7)$, che è ammissibile. $v_S = 150 + 49 = 199$.
- Errore stimato: $\dfrac{199 - 191}{191} \approx 4.2\%$.
- (Controllo: l'ottimo intero è $(14, 8)$ con costo 196.)

**Tagli di Gomory.** Forma standard: $4x_1 + 2x_2 - x_3 = 71$, $x_1 + 9x_2 - x_4 = 73$, $4x_1 + 6x_2 - x_5 = 73$. In base ci sono $x_1, x_2, x_5$ (il potassio non è un vincolo attivo, con $x_5 = 24$).

- Riga di $x_1$: $x_1 - \tfrac{9}{34}x_3 + \tfrac1{17}x_4 = \tfrac{29}{2}$. Il taglio è $\tfrac{25}{34}x_3 + \tfrac1{17}x_4 \ge \tfrac12$, cioè $25x_3 + 2x_4 \ge 17$. Sostituendo $x_3 = 4x_1 + 2x_2 - 71$ e $x_4 = x_1 + 9x_2 - 73$:
$$3x_1 + 2x_2 \ge 57$$
- Riga di $x_2$: $x_2 + \tfrac1{34}x_3 - \tfrac2{17}x_4 = \tfrac{13}{2}$. Il taglio è $\tfrac1{34}x_3 + \tfrac{15}{17}x_4 \ge \tfrac12$, cioè $x_3 + 30x_4 \ge 17$:
$$x_1 + 8x_2 \ge 67$$

Entrambi tagliano $\bar x$: $3\cdot14.5 + 2\cdot6.5 = 56.5 < 57$ e $14.5 + 52 = 66.5 < 67$.

---

## Esercizio 2

Il problema è in forma duale standard. Il primale associato è $\max\ -5x_1 + 4x_2$ con i vincoli $A_i x \le b_i$:

$$A_1 = (1,3),\ A_2 = (0,1),\ A_3 = (-1,2),\ A_4 = (-2,-2),\ A_5 = (-1,-2),\ A_6 = (3,2),\qquad b = (4, 12, 11, 1, 4, 0).$$

**$B = \{2,4\}$.**
- $x$: da $x_2 = 12$ e $-2x_1 - 2x_2 = 1$ si ha $x = (-25/2,\ 12)$. Ma $A_1 x = 23.5 > 4$, quindi **non ammissibile**, non degenere.
- $y$: da $-2y_4 = -5$ e $y_2 - 2y_4 = 4$ si ha $y = (0,\ 9,\ 0,\ 5/2,\ 0,\ 0)$, **ammissibile**, non degenere, non ottima (il complementare $x$ non è ammissibile). Valore $221/2$.

**$y = (14, 0, 0, 0, 19, 0)$.** Si ha $y^TA = 14(1,3) + 19(-1,-2) = (-5, 4)$ e $y \ge 0$, quindi è ammissibile. Le componenti positive sono la 1 e la 5, e $A_1, A_5$ sono linearmente indipendenti ($\det = 1$): è **di base** con $B = \{1,5\}$, ed è **non degenere**. Il primale complementare $x = (-20, 8)$ viola $A_3x \le 11$ ($36 > 11$), quindi, essendo $y$ non degenere, **non è ottima**.

**Simplesso duale da $B = \{3,5\}$:**

| Passo | $B$ | $y$ | $x$ | $k$ | $A_kW^i$ ($i \in B$) | rapporti | $h$ |
|---|---|---|---|---|---|---|---|
| 1 | $\{3,5\}$ | $(0,0,\frac72,0,\frac32,0)$ | $(-\frac{15}{2},\ \frac74)$ | 4 | $W^3:-\frac12,\ W^5:-\frac32$ | $r_3 = 7,\ r_5 = 1$ | 5 |
| 2 | $\{3,4\}$ | $(0,0,3,1,0,0)$ | $(-4,\ \frac72)$ | 1 | $W^3:-\frac23,\ W^4:\frac56$ | $r_3 = \frac92$ | 3 |

Valori: $89/2 \to 34 \to 91/4$.
Dopo il secondo passo $B = \{1,4\}$: $y = (9/2,\ 0,\ 0,\ 19/4,\ 0,\ 0)$, $x = (-11/4,\ 9/4)$, ammissibile ($A_ix \le b_i$ per ogni $i$). **Sì, è ottima**, con valore $91/4$.

---

## Esercizio 3

Pesi in ordine decrescente: $70, 68, 61, 53, 39, 35, 33, 16, 13, 12$ (somma 400).

**Valutazione inferiore:** $v_I = \lceil 400/100 \rceil = 4$.

**Valutazioni superiori:**

| Algoritmo | Furgoni | Riempimento |
|---|---|---|
| NFD | 6 | [70] [68] [61] [53, 39] [35, 33, 16, 13] [12] |
| FFD | 5 | [70, 16, 13] [68, 12] [61, 39] [53, 35] [33] |
| BFD | 5 | [70, 16, 13] [68] [61, 39] [53, 35, 12] [33] |

Quindi $v_S = 5$. FFD e BFD trovano lo stesso numero di furgoni ma riempimenti diversi: con BFD il pacco da 12 va nel furgone con 53+35, che ha residuo esattamente 12.

**Modello** (con $K = 5$ furgoni dalla FFD; $y_i = 1$ se uso il furgone $i$, $x_{ij} = 1$ se il pacco $j$ va nel furgone $i$, $p_j$ = peso del pacco $j$):

$$
\begin{cases}
\min \sum_{i=1}^{5} y_i \\
\sum_{i=1}^{5} x_{ij} = 1 & j = 1,\dots,10 \\
\sum_{j=1}^{10} p_j x_{ij} \le 100\, y_i & i = 1,\dots,5 \\
x_{ij},\ y_i \in \{0,1\}
\end{cases}
$$

**Ottimalità di 5.** I pacchi 70, 68, 61, 53 pesano tutti più di 50, quindi due di essi non stanno mai insieme: servono 4 furgoni distinti. Con 4 furgoni, poiché il peso totale è 400, ogni furgone deve essere riempito **esattamente** a 100. I residui sono quindi 30, 32, 39, 47 e vanno riempiti esattamente con 39, 35, 33, 16, 13, 12.
- Il 39 entra solo nei residui 39 e 47. Nel 47 lascerebbe 8, che nessun pacco riempie, quindi va con il 61.
- Il 35 entra solo nel 47 (lascia 12, che si riempie con il 12).
- Restano i residui 30 e 32 e i pacchi 33, 16, 13: il 33 non entra in nessuno dei due.

Quindi 4 furgoni sono impossibili e **5 è ottimo**: $v_I$ si può alzare a 5 e il gap è nullo.

---

## Esercizio 4

**2-albero.** Albero di costo minimo sui nodi $\{1,3,4,5\}$ (Kruskal): $(1,3)=11,\ (1,4)=19,\ (3,5)=22$, costo 52. Poi i due archi meno costosi del nodo 2: $(1,2)=25,\ (2,5)=28$.
2-albero: $(1,3),(1,4),(3,5),(1,2),(2,5)$, con **$v_I = 105$**.

**Vincoli violati.** Gradi: nodo 1 ha grado 3, nodo 4 ha grado 1, tutti gli altri 2. Sono violati
$$x_{12} + x_{13} + x_{14} + x_{15} = 2 \quad (\text{vale } 3), \qquad x_{14} + x_{24} + x_{34} + x_{45} = 2 \quad (\text{vale } 1).$$
I vincoli di connessione sono soddisfatti (il 2-albero è connesso).

**Nodo più vicino da 2:** $2 \xrightarrow{25} 1 \xrightarrow{11} 3 \xrightarrow{22} 5 \xrightarrow{30} 4 \xrightarrow{29} 2$, con **$v_S = 117$**.

**Branch and Bound:**

| Nodo | Vincoli | 2-albero | $v_I$ | Esito |
|---|---|---|---|---|
| $P$ | – | (1,3)(1,4)(3,5)(1,2)(2,5) | 105 | istanzio $x_{13}$ |
| $P_{1,1}$ | $x_{13}=0$ | (1,4)(3,5)(3,4)(1,2)(2,5) | 122 | $122 \ge 117$: chiudo |
| $P_{1,2}$ | $x_{13}=1$ | come $P$ | 105 | istanzio $x_{12}$ |
| $P_{2,3}$ | $x_{13}=1, x_{12}=0$ | (1,3)(1,4)(3,5)(2,5)(2,4) | 109 | ciclo hamiltoniano: **$v_S = 109$** |
| $P_{2,4}$ | $x_{13}=1, x_{12}=1$ | come $P$ | 105 | istanzio $x_{14}$ |
| $P_{3,7}$ | $x_{13}=1,x_{12}=1,x_{14}=0$ | (1,3)(3,5)(3,4)(1,2)(2,5) | 114 | $114 \ge 109$: chiudo |
| $P_{3,8}$ | $x_{13}=1,x_{12}=1,x_{14}=1$ | – | – | $\emptyset$: il nodo 1 avrebbe 3 archi |

**Ciclo ottimo:** $1 - 3 - 5 - 2 - 4 - 1$, con costo **109**.
