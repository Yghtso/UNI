# Soluzioni Simulazione 9

---

## Esercizio 1

**Modello** ($x_1$ = unità di A, $x_2$ = unità di B):

$$
\begin{cases}
\max\ 12x_1 + 7x_2 \\
4x_1 + 2x_2 \le 51 \\
5x_1 + 5x_2 \le 73 \\
-x_1 \le -2 \\
-x_2 \le 0
\end{cases}
$$

($x_1 \ge 0$ è implicato dal vincolo di contratto.)

**Vertice di partenza.** Con $x_1 = 2$: $x_2 \le \min\{(51-8)/2,\ (73-10)/5\} = \min\{21.5,\ 12.6\} = 63/5$. Il punto $(2,\ 63/5)$ attiva i vincoli 2 e 3, quindi $B = \{2,3\}$.

| Passo | $B$ | $x$ | $y$ | $h$ | $W^h$ | $A_iW^h$ | rapporti | $k$ |
|---|---|---|---|---|---|---|---|---|
| 1 | $\{2,3\}$ | $(2,\ 63/5)$ | $(0,\ 7/5,\ -5,\ 0)$ | 3 | $(1,\ -1)$ | $A_1:2,\ A_4:1$ | $r_1 = 89/10,\ r_4 = 63/5$ | 1 |

Nuova base $B = \{1,2\}$: $x = (109/10,\ 37/10)$, $y = (5/2,\ 2/5,\ 0,\ 0) \ge 0$, quindi **è ottima**, con valore $1567/10 = 156.7$. **Non degenere**: sono attivi solo i vincoli 1 e 2 ($x_1 = 10.9 > 2$, $x_2 > 0$) e $y_1, y_2 > 0$. Il vincolo di contratto all'ottimo non è attivo.

**Caso intero.**
- $v_S = \lfloor 156.7 \rfloor = 156$.
- $v_I$: $\lfloor \bar x \rfloor = (10, 3)$ è ammissibile, quindi $v_I = 141$. Errore stimato $\dfrac{156 - 141}{141} \approx 10.6\%$.
- (Controllo: l'ottimo intero è $(11, 3)$ con valore 153. Arrotondare per difetto qui è molto pessimista: provando ad aumentare $x_1$ di uno si trova già 153.)

**Tagli di Gomory.** Forma standard: $4x_1 + 2x_2 + x_3 = 51$, $5x_1 + 5x_2 + x_4 = 73$, $x_1 - x_5 = 2$. All'ottimo sono in base $x_1, x_2, x_5$ e fuori base $x_3, x_4$:

$$
\begin{aligned}
x_1 + \tfrac12 x_3 - \tfrac15 x_4 &= \tfrac{109}{10}\\
x_2 - \tfrac12 x_3 + \tfrac25 x_4 &= \tfrac{37}{10}\\
x_5 + \tfrac12 x_3 - \tfrac15 x_4 &= \tfrac{89}{10}
\end{aligned}
$$

- $r = 1$: $\tfrac12 x_3 + \tfrac45 x_4 \ge \tfrac9{10}$, cioè $5x_3 + 8x_4 \ge 9$. Sostituendo $x_3 = 51 - 4x_1 - 2x_2$ e $x_4 = 73 - 5x_1 - 5x_2$: $\ 6x_1 + 5x_2 \le 83$.
- $r = 2$: $\tfrac12 x_3 + \tfrac25 x_4 \ge \tfrac7{10}$, cioè $5x_3 + 4x_4 \ge 7$: $\ 4x_1 + 3x_2 \le 54$.
- $r = 5$: stessa riga di $x_1$ a meno della costante intera ($x_5 = x_1 - 2$), quindi le parti frazionarie sono uguali e si ottiene **lo stesso taglio** $6x_1 + 5x_2 \le 83$.

Entrambi i tagli diversi escludono $\bar x$ ($6\cdot10.9 + 5\cdot3.7 = 83.9 > 83$, $4\cdot10.9 + 3\cdot3.7 = 54.7 > 54$) e sono soddisfatti da $(11,3)$.

---

## Esercizio 2

**Duale:**

$$
(D)\quad
\begin{cases}
\min\ 7y_1 + 9y_2 + 15y_3 + 9y_4 + 9y_5 - 2y_6 \\
-y_1 + 2y_2 + 3y_3 - y_5 - y_6 = -4 \\
y_1 - 3y_2 - y_3 - y_4 - 3y_5 = 2 \\
y \ge 0
\end{cases}
$$

**$\bar x = (11, 18)$.** È ammissibile e attiva i vincoli 1 ($-11 + 18 = 7$) e 3 ($33 - 18 = 15$); gli altri sono soddisfatti in senso stretto. Per gli scarti complementari deve essere $y_i = 0$ per $i \ne 1,3$, quindi $y_1(-1,1) + y_3(3,-1) = (-4,2)$, da cui $y_1 = 1$, $y_3 = -1$. Non esiste una $y$ complementare ammissibile ($y_3 < 0$), quindi **$\bar x$ non è ottima**.

**Base $B = \{1,4\}$:** $x = (-16, -9)$, $y = (4, 0, 0, 2, 0, 0) \ge 0$, quindi è ammissibile per $(D)$. Però $A_5x = 16 + 27 = 43 > 9$ (e anche $A_6x = 16 > -2$), quindi non è ammissibile per $(P)$. Si può applicare il simplesso duale.

| Passo | $B$ | $y$ | $x$ | valore | $k$ | $A_kW^i$ | rapporti | $h$ |
|---|---|---|---|---|---|---|---|---|
| 1 | $\{1,4\}$ | $(4,0,0,2,0,0)$ | $(-16,-9)$ | 46 | 5 | $W^1:-1,\ W^4:-4$ | $r_1 = 4,\ r_4 = 1/2$ | 4 |
| 2 | $\{1,5\}$ | $(\frac72,0,0,0,\frac12,0)$ | $(-\frac{15}2,-\frac12)$ | 29 | 6 | $W^1:-\frac34,\ W^5:-\frac14$ | $r_1 = 14/3,\ r_5 = 2$ | 5 |
| 3 | $\{1,6\}$ | $(2,0,0,0,0,2)$ | $(2,\ 9)$ | 10 | – | – | – | – |

($W^1 = (1,0),\ W^4 = (1,1)$ al passo 1; $W^1 = (3/4,-1/4),\ W^5 = (1/4,1/4)$ al passo 2.)

Al passo 3 $x = (2, 9)$ soddisfa tutti i vincoli: **soluzione ottima** $x = (2,9)$, $y = (2,0,0,0,0,2)$, valore $-8 + 18 = 10 = 7\cdot2 - 2\cdot2$.

---

## Esercizio 3

Rendimenti: $\ 20/8 = 2.5,\ \ 13/2 = 6.5,\ \ 15/3 = 5,\ \ 14/9 \approx 1.56,\ \ 22/4 = 5.5$. Ordine: **2, 5, 3, 1, 4**.

**Caso binario.**
- $v_S$: inserisco 2, 5, 3 (volume 9), poi $x_1 = 6/8 = 3/4$. Rilassato $(3/4, 1, 1, 0, 1)$, valore 65, quindi $v_S = 65$.
- $v_I$: greedy, cioè 2, 5, 3 (volume 9); 1 non entra (17), 4 non entra (18). $x = (0,1,1,0,1)$, quindi $v_I = 50$.

**Branch and Bound** (variabile frazionaria, prima $=0$ poi $=1$):

| Nodo | Vincoli | Rilassato | $v_S$ | Esito |
|---|---|---|---|---|
| $P$ | – | $(\frac34,1,1,0,1)$ | 65 | ramifico su $x_1$ |
| $P_{1,1}$ | $x_1=0$ | $(0,1,1,\frac23,1)$ | 59 | ramifico su $x_4$ |
| $P_{2,1}$ | $x_1=0,x_4=0$ | $(0,1,1,0,1)$ | 50 | $50 \le v_I = 50$: chiudo |
| $P_{2,2}$ | $x_1=0,x_4=1$ | $(0,1,0,1,1)$ | 49 | $49 \le 50$: chiudo |
| $P_{1,2}$ | $x_1=1$ | $(1,1,\frac13,0,1)$ | 60 | ramifico su $x_3$ |
| $P_{2,3}$ | $x_1=1,x_3=0$ | $(1,1,0,\frac19,1)$ | 56 | ramifico su $x_4$ |
| $P_{3,5}$ | $x_1=1,x_3=0,x_4=0$ | $(1,1,0,0,1)$ | 55 | intera: **$v_I = 55$** |
| $P_{3,6}$ | $x_1=1,x_3=0,x_4=1$ | – | – | $\emptyset$ (volume $8 + 9 > 15$) |
| $P_{2,4}$ | $x_1=1,x_3=1$ | $(1,1,1,0,\frac12)$ | 59 | ramifico su $x_5$ |
| $P_{3,7}$ | $x_1=1,x_3=1,x_5=0$ | $(1,1,1,\frac29,0)$ | 51 | $51 \le 55$: chiudo |
| $P_{3,8}$ | $x_1=1,x_3=1,x_5=1$ | $(1,0,1,0,1)$ | 57 | intera: **$v_I = 57$** |

**Ottimo:** beni 1, 3, 5 (volume 15), valore **57**.

**Caso intero.**
- $v_S$: tutto sul bene 2, $x_2 = 15/2$, valore 97.5, quindi $v_S = 97$.
- $v_I$: greedy intero, $x_2 = 7$ (volume 14); con il residuo 1 non entra nulla. $v_I = 91$.
- (Controllo: l'ottimo intero è $x_2 = 6,\ x_3 = 1$, con valore 93.)

**Taglio di Gomory** (scarto $x_6$, in base $x_2$):
$$x_2 + 4x_1 + \tfrac32 x_3 + \tfrac92 x_4 + 2x_5 + \tfrac12 x_6 = \tfrac{15}2$$
Il taglio è $\tfrac12 x_3 + \tfrac12 x_4 + \tfrac12 x_6 \ge \tfrac12$, cioè $x_3 + x_4 + x_6 \ge 1$. Con $x_6 = 15 - 8x_1 - 2x_2 - 3x_3 - 9x_4 - 4x_5$:
$$4x_1 + x_2 + x_3 + 4x_4 + 2x_5 \le 7$$

---

## Esercizio 4

**Modello** ($x_{ij}$ con $i < j$, $x_{ij} = 1$ se l'arco $\{i,j\}$ è nel ciclo):

$$
\begin{cases}
\min \sum_{i<j} c_{ij}x_{ij} \\
\sum_{h<k} x_{hk} + \sum_{k<j} x_{kj} = 2 & k = 1,\dots,5 \quad \text{(grado)}\\
\sum_{i \in S,\, j \notin S} x_{ij} \ge 1 & \forall S \subset N,\ S \ne \emptyset \quad \text{(connessione)}\\
x_{ij} \in \{0,1\}
\end{cases}
$$

Per esempio, il grado del nodo 1 è $x_{12} + x_{13} + x_{14} + x_{15} = 2$, e il vincolo di connessione per $S = \{1,2\}$ è $x_{13} + x_{14} + x_{15} + x_{23} + x_{24} + x_{25} \ge 1$.

**4-albero.** Albero di costo minimo sui nodi $\{1,2,3,5\}$: $(1,3)=16,\ (1,2)=17,\ (3,5)=23$, costo 56. Poi i due archi meno costosi del nodo 4: $(1,4)=16,\ (2,4)=21$.
4-albero: $(1,3),(1,2),(3,5),(1,4),(2,4)$, con **$v_I = 93$**.

**Vincoli violati.** Il nodo 1 ha grado 3 e il nodo 5 ha grado 1:
$$x_{12} + x_{13} + x_{14} + x_{15} = 2 \ (\text{vale } 3), \qquad x_{15} + x_{25} + x_{35} + x_{45} = 2 \ (\text{vale } 1).$$

**Nodo più vicino da 3:** $3 \xrightarrow{16} 1 \xrightarrow{16} 4 \xrightarrow{21} 2 \xrightarrow{36} 5 \xrightarrow{23} 3$, con **$v_S = 112$**. Errore stimato $\dfrac{112 - 93}{93} \approx 20.4\%$.

**Branch and Bound:**

| Nodo | Vincoli | 4-albero | $v_I$ | Esito |
|---|---|---|---|---|
| $P$ | – | (1,3)(1,2)(3,5)(1,4)(2,4) | 93 | istanzio $x_{12}$ |
| $P_{1,1}$ | $x_{12}=0$ | (1,3)(3,5)(2,5)(1,4)(2,4) | 112 | $112 \ge 112$: chiudo |
| $P_{1,2}$ | $x_{12}=1$ | come $P$ | 93 | istanzio $x_{14}$ |
| $P_{2,3}$ | $x_{12}=1, x_{14}=0$ | (1,2)(1,3)(3,5)(2,4)(4,5) | 99 | ciclo hamiltoniano $1-2-4-5-3-1$: **$v_S = 99$** |
| $P_{2,4}$ | $x_{12}=1, x_{14}=1$ | come $P$ | 93 | istanzio $x_{13}$ |
| $P_{3,7}$ | $x_{12}=1,x_{14}=1,x_{13}=0$ | (1,2)(3,5)(1,5)(1,4)(2,4) | 104 | $104 \ge 99$: chiudo |
| $P_{3,8}$ | $x_{12}=1,x_{14}=1,x_{13}=1$ | – | – | $\emptyset$: il nodo 1 avrebbe 3 archi |

**Ciclo ottimo:** $1 - 2 - 4 - 5 - 3 - 1$, con costo **99**.
