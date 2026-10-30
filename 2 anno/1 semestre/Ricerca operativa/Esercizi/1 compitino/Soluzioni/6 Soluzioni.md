# Soluzioni Simulazione 6

Convenzioni usate (come a lezione): problema primale $\max\ c^Tx,\ Ax \le b$; $W = -A_B^{-1}$, $W^i$ è la colonna di $W$ associata all'indice $i \in B$.
Simplesso primale: $h = \min\{i \in B : y_i < 0\}$, rapporti $r_i = \dfrac{b_i - A_i x}{A_i W^h}$ per $i \notin B$ con $A_i W^h > 0$, $k = \arg\min r_i$ (Bland in caso di parità).

---

## Esercizio 1

**Modello** ($x_1$ = tavoli, $x_2$ = librerie):

$$
\begin{cases}
\max\ 9x_1 + 13x_2 \\
9x_1 + 8x_2 \le 175 \\
3x_1 + 12x_2 \le 98 \\
2x_1 + 4x_2 \le 42 \\
-x_1 \le 0 \\
-x_2 \le 0
\end{cases}
$$

**Vertice di partenza.** Solo librerie: $x_1 = 0$ e $x_2 = \min\{175/8,\ 98/12,\ 42/4\} = 49/6$. Il punto $(0, 49/6)$ è ammissibile e attiva i vincoli 2 e 4 (solo quelli, quindi non degenere): sì, è un vertice e può essere il punto di partenza con $B = \{2,4\}$.

| Passo | $B$ | $x$ | $y$ | $h$ | $W^h$ | $A_iW^h$ ($i\notin B$) | rapporti | $k$ |
|---|---|---|---|---|---|---|---|---|
| 1 | $\{2,4\}$ | $(0,\ 49/6)$ | $(0,\ 13/12,\ 0,\ -23/4,\ 0)$ | 4 | $(1,\ -1/4)$ | $A_1:7,\ A_3:1,\ A_5:1/4$ | $r_1=47/3,\ r_3=28/3,\ r_5=98/3$ | 3 |
| 2 | $\{2,3\}$ | $(28/3,\ 35/6)$ | $(0,\ -5/6,\ 23/4,\ 0,\ 0)$ | 2 | $(1/3,\ -1/6)$ | $A_1:5/3,\ A_4:-1/3,\ A_5:1/6$ | $r_1=133/5,\ r_5=35$ | 1 |
| 3 | $\{1,3\}$ | $(91/5,\ 7/5)$ | $(1/2,\ 0,\ 9/4,\ 0,\ 0)$ | – | – | – | – | – |

Al passo 3 $y \ge 0$: **soluzione ottima** $x = (91/5,\ 7/5) = (18.2,\ 1.4)$, base ottima $\{1,3\}$, valore $182$. Non è degenere (attivi solo i vincoli 1 e 3; $y_1, y_3 > 0$).

**Caso intero.**
- $v_S = \lfloor 182 \rfloor = 182$.
- $v_I$: arrotondo per difetto $\lfloor \bar x \rfloor = (18, 1)$, ammissibile, quindi $v_I = 9\cdot 18 + 13 = 175$.
- (Controllo: l'ottimo intero è $(17, 2)$ con valore 179.)

**Taglio di Gomory.** Forma standard con scarti $x_3, x_4, x_5$ (legno, assemblaggio, verniciatura). All'ottimo sono in base $x_1, x_2, x_4$ e fuori base $x_3, x_5$. La riga di $x_1$ del tableau è

$$x_1 + \tfrac15 x_3 - \tfrac25 x_5 = \tfrac{91}{5}$$

Taglio ($r = 1$): $\{\tfrac15\}x_3 + \{-\tfrac25\}x_5 \ge \{\tfrac{91}{5}\}$, cioè $\tfrac15 x_3 + \tfrac35 x_5 \ge \tfrac15$, cioè $x_3 + 3x_5 \ge 1$.
Sostituendo $x_3 = 175 - 9x_1 - 8x_2$ e $x_5 = 42 - 2x_1 - 4x_2$:

$$3x_1 + 4x_2 \le 60$$

(taglia via $\bar x$: $3\cdot18.2 + 4\cdot1.4 = 60.2 > 60$).
Dalla riga di $x_2$ ($r = 2$): $x_2 - \tfrac1{10}x_3 + \tfrac{9}{20}x_5 = \tfrac75$, taglio $\tfrac9{10}x_3 + \tfrac9{20}x_5 \ge \tfrac25$, cioè $9x_1 + 9x_2 \le 176$.

---

## Esercizio 2

| Vettore | Indici di base | Ammissibile | Degenere | Ottimo |
|---------|----------------|-------------|----------|--------|
| $x = (17/2,\ -7/2)$ | $\{2,5\}$ | SI | NO | NO |
| $y = (9/2,\ 0,\ 6,\ 0,\ 0,\ 0)$ | $\{1,3\}$ | SI | NO | NO |

- $B=\{2,5\}$: da $x_1 - x_2 = 12$, $x_1 + x_2 = 5$ si ha $x = (17/2, -7/2)$, che soddisfa gli altri vincoli in modo stretto. Il duale complementare è $y = (0, -3/2, 0, 0, 3/2, 0)$, non ammissibile, quindi $x$ non è ottimo.
- $B=\{1,3\}$: da $2y_1 - y_3 = 3$, $y_3 = 6$ si ha $y = (9/2, 0, 6, 0, 0, 0) \ge 0$. Il primale complementare è $x = (9, 10)$, che viola $3x_1 + 3x_2 \le 15$, quindi $y$ non è ottimo.

**Valore $+\infty$?** No. Il poliedro è limitato: $-5 \le x_1 \le 9$ (vincoli 1 e 6) e $-8 \le x_2 \le 5 - x_1$ (vincoli 4 e 5). Quindi $E = \{0\}$ nella rappresentazione di Weyl, $P = \operatorname{conv}(V)$, e per il teorema fondamentale della PL il massimo è finito.

**Simplesso primale da $B = \{2,4\}$:**

| Passo | $B$ | $x$ | $y$ | $h$ | $W^h$ | $A_iW^h$ ($i\notin B$) | rapporti | $k$ |
|---|---|---|---|---|---|---|---|---|
| 1 | $\{2,4\}$ | $(4,\ -8)$ | $(0,\ 3,\ 0,\ -9,\ 0,\ 0)$ | 4 | $(1,\ 1)$ | $A_1:2,\ A_3:0,\ A_5:6,\ A_6:-2$ | $r_1 = 5,\ r_5 = 9/2$ | 5 |
| 2 | $\{2,5\}$ | $(17/2,\ -7/2)$ | $(0,\ -3/2,\ 0,\ 0,\ 3/2,\ 0)$ | 2 | $(-1/2,\ 1/2)$ | $A_1:-1,\ A_3:1,\ A_4:-1/2,\ A_6:1$ | $r_3 = 13,\ r_6 = 27$ | 3 |

Si arriva a $B = \{3,5\}$: $x = (2, 3)$, $y = (0, 0, 3/2, 0, 3/2, 0) \ge 0$, quindi **sì, è ottima**, con valore $24$.

---

## Esercizio 3

Rendimenti $v_i/p_i$: $\ 0.15,\ 1.89,\ 0.45,\ 0.38,\ 1,\ 3.09$. Ordine decrescente: **6, 2, 5, 3, 4, 1**.

**Caso binario.**
- $v_S$: rilassato $0 \le x \le 1$. Inserisco 6, 2, 5, 3 (peso 99), poi $x_4 = 74/89$: $\bar x = (0, 1, 1, 74/89, 1, 1)$, valore $136.27$, quindi $v_S = 136$.
- $v_I$: greedy, cioè 6, 2, 5, 3 (peso 99); il bene 4 non entra (188 > 173); il bene 1 entra (139). $x = (1, 1, 1, 0, 1, 1)$, quindi $v_I = 114$.

**Branch and Bound** (ramifico sulla variabile frazionaria, prima $=0$ poi $=1$):

| Nodo | Vincoli | Rilassato | $v_S$ | Esito |
|---|---|---|---|---|
| $P$ | – | $(0,1,1,\frac{74}{89},1,1)$ | 136 | ramifico su $x_4$ |
| $P_{1,1}$ | $x_4=0$ | $(1,1,1,0,1,1)$ | 114 | $v_S \le v_I = 114$: chiudo |
| $P_{1,2}$ | $x_4=1$ | $(0,1,\frac{41}{56},1,1,1)$ | 135 | ramifico su $x_3$ |
| $P_{2,3}$ | $x_4=1, x_3=0$ | $(1,1,0,1,1,1)$ | 123 | soluzione intera: **$v_I = 123$** |
| $P_{2,4}$ | $x_4=1, x_3=1$ | $(0,\frac{17}{19},1,1,0,1)$ | 125 | ramifico su $x_2$ |
| $P_{3,7}$ | $x_4=1,x_3=1,x_2=0$ | $(\frac1{10},0,1,1,1,1)$ | 106 | $106 \le 123$: chiudo |
| $P_{3,8}$ | $x_4=1,x_3=1,x_2=1$ | $(0,1,1,1,0,\frac9{11})$ | 122 | $122 \le 123$: chiudo |

**Ottimo:** $x = (1, 1, 0, 1, 1, 1)$, peso 172, valore **123**.

**Caso intero** ($x \in \mathbb{Z}_+^6$).
- $v_S$: tutto sul bene di massimo rendimento, $x_6 = 173/11$, valore $5882/11 = 534.7$, quindi $v_S = 534$.
- $v_I$: greedy intero, cioè $x_6 = \lfloor 173/11 \rfloor = 15$ (peso 165); con il residuo 8 non entra nessun altro bene. $v_I = 510$.
- (Controllo: l'ottimo intero è $x_2 = 1,\ x_6 = 14$, con valore 512.)

**Taglio di Gomory** (scarto $x_7$, in base $x_6$):

$$x_6 + \tfrac{40}{11}x_1 + \tfrac{19}{11}x_2 + \tfrac{56}{11}x_3 + \tfrac{89}{11}x_4 + \tfrac{13}{11}x_5 + \tfrac1{11}x_7 = \tfrac{173}{11}$$

$$\tfrac7{11}x_1 + \tfrac8{11}x_2 + \tfrac1{11}x_3 + \tfrac1{11}x_4 + \tfrac2{11}x_5 + \tfrac1{11}x_7 \ge \tfrac8{11}$$

Sostituendo $x_7 = 173 - (40x_1 + 19x_2 + 56x_3 + 89x_4 + 13x_5 + 11x_6)$ e dividendo per 11:

$$3x_1 + x_2 + 5x_3 + 8x_4 + x_5 + x_6 \le 15$$

---

## Esercizio 4

**Modello** ($x_{ij} = 1$ se si percorre l'arco $(i,j)$):

$$
\begin{cases}
\min \sum_{i \ne j} c_{ij}x_{ij} \\
\sum_{i \ne j} x_{ij} = 1 & \forall j \quad \text{(in ogni nodo entra un arco)}\\
\sum_{j \ne i} x_{ij} = 1 & \forall i \quad \text{(da ogni nodo esce un arco)}\\
\sum_{i \in S,\, j \notin S} x_{ij} \ge 1 & \forall S \subset N,\ S \ne \emptyset \quad \text{(connessione)}\\
x_{ij} \in \{0,1\}
\end{cases}
$$

**$v_I$: assegnamento.** Sottraggo i minimi di riga $(12, 17, 17, 20, 16)$, poi i minimi di colonna $(0, 7, 0, 8, 0)$ (totale $82 + 15 = 97$):

| | 1 | 2 | 3 | 4 | 5 |
|---|---|---|---|---|---|
| 1 | – | 15 | **0** | 6 | 23 |
| 2 | 0 | – | 11 | **0** | 1 |
| 3 | **0** | 12 | – | 12 | 7 |
| 4 | 19 | 1 | 1 | – | **0** |
| 5 | 7 | **0** | 0 | 14 | – |

Ci sono 5 zeri indipendenti, quindi l'assegnamento ottimo è $1\to3,\ 2\to4,\ 3\to1,\ 4\to5,\ 5\to2$, con **$v_I = 97$**.

**Vincoli violati.** L'assegnamento è formato da due sottocicli, $1 \to 3 \to 1$ e $2 \to 4 \to 5 \to 2$. È violato il vincolo di connessione con $S = \{1,3\}$:

$$x_{12} + x_{14} + x_{15} + x_{32} + x_{34} + x_{35} \ge 1 \quad (\text{vale } 0)$$

e analogamente quello con $S = \{2,4,5\}$: $x_{21} + x_{23} + x_{41} + x_{43} + x_{51} + x_{53} \ge 1$.

**$v_S$: algoritmo delle toppe.** Tolgo un arco $(i,j)$ del primo ciclo e un arco $(k,l)$ del secondo e aggiungo $(i,l)$ e $(k,j)$:

| Tolgo | Aggiungo | Variazione |
|---|---|---|
| (1,3), (2,4) | (1,4), (2,3) | +17 |
| (1,3), (4,5) | (1,5), (4,3) | +24 |
| (1,3), (5,2) | (1,2), (5,3) | +15 |
| **(3,1), (2,4)** | **(3,4), (2,1)** | **+12** |
| (3,1), (4,5) | (3,5), (4,1) | +26 |
| (3,1), (5,2) | (3,2), (5,1) | +19 |

Ciclo $1\to3\to4\to5\to2\to1$, con $v_S = 97 + 12 = 109$.

**$v_S$: nodo più vicino da 1.** $1 \xrightarrow{12} 3 \xrightarrow{24} 5 \xrightarrow{23} 2 \xrightarrow{25} 4 \xrightarrow{39} 1$, con $v_S = 123$.

Conviene usare quella delle toppe: $v_S = 109$. Errore relativo stimato: $\dfrac{109 - 97}{97} \approx 12.4\%$.
(Controllo: il ciclo ottimo è $1\to4\to2\to5\to3\to1$ con costo 105.)
