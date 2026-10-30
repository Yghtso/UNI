# Soluzioni Simulazione 10

Convenzioni: primale $\max\ c^Tx,\ Ax \le b$; $W = -A_B^{-1}$, $W^i$ è la colonna associata a $i \in B$.
Simplesso primale: $h = \min\{i \in B : y_i < 0\}$, $r_i = \dfrac{b_i - A_ix}{A_iW^h}$ per $A_iW^h > 0$, $k = \arg\min r_i$.
Simplesso duale: $k = \min\{i \notin B : A_ix > b_i\}$, $r_i = \dfrac{y_i}{-A_kW^i}$ per $A_kW^i < 0$, $h = \arg\min r_i$.

---

## Esercizio 1

**Modello** ($x_1$ = unità di A, $x_2$ = unità di B):

$$
\begin{cases}
\max\ 6x_1 + 9x_2 \\
19x_1 + 4x_2 \le 58 \\
6x_1 + 12x_2 \le 55 \\
-x_1 \le 0 \\
-x_2 \le 0
\end{cases}
$$

**Vertice di partenza.** Senza A ($x_1 = 0$): $x_2 = \min\{58/4,\ 55/12\} = 55/12$. Il vertice $(0,\ 55/12)$ attiva i vincoli 2 e 3, quindi $B = \{2,3\}$.

| $B$ | $x$ | $y$ | $h$ | $W^h$ | $A_iW^h$ | rapporti | $k$ |
|---|---|---|---|---|---|---|---|
| $\{2,3\}$ | $(0,\ 55/12)$ | $(0,\ 3/4,\ -3/2,\ 0)$ | 3 | $(1,\ -1/2)$ | $A_1:17,\ A_4:1/2$ | $r_1 = 7/3,\ r_4 = 55/6$ | 1 |

Nuova base $B = \{1,2\}$: $x = (7/3,\ 41/12)$, $y = (3/34,\ 49/68,\ 0,\ 0) \ge 0$, quindi è già **ottima**, con valore $179/4 = 44.75$.

**Valutazioni (caso intero).**
- $v_S = \lfloor 44.75 \rfloor = 44$.
- $v_I$: $\lfloor \bar x \rfloor = (2, 3)$ è ammissibile, quindi $v_I = 12 + 27 = 39$.
- (Controllo: l'ottimo intero è $(1, 4)$ con valore 42.)

**Taglio di Gomory.** Forma standard con scarti $x_3$ (macchina C) e $x_4$ (macchina D); in base $x_1, x_2$. Riga di $x_1$:
$$x_1 + \tfrac1{17}x_3 - \tfrac1{51}x_4 = \tfrac73$$
Il taglio ($r = 1$) è $\tfrac1{17}x_3 + \tfrac{50}{51}x_4 \ge \tfrac13$, cioè $3x_3 + 50x_4 \ge 17$. Con $x_3 = 58 - 19x_1 - 4x_2$ e $x_4 = 55 - 6x_1 - 12x_2$:
$$7x_1 + 12x_2 \le 57$$
(taglia $\bar x$: $49/3 + 41 = 57.33 > 57$).
Dalla riga di $x_2$ ($r = 2$: $x_2 - \tfrac1{34}x_3 + \tfrac{19}{204}x_4 = \tfrac{41}{12}$) si otterrebbe $19x_1 + 5x_2 \le 61$.

---

## Esercizio 2

Primale associato: $\max\ -x_1 + x_2$ con

$$A_1 = (-2,1),\ A_2 = (0,-1),\ A_3 = (-2,3),\ A_4 = (-1,1),\ A_5 = (1,-1),\ A_6 = (-1,2),\qquad b = (0,0,1,7,2,1).$$

**Coppia complementare per $B = \{5,6\}$.**
- $x$: da $x_1 - x_2 = 2$ e $-x_1 + 2x_2 = 1$ si ha $x = (5, 3)$. Gli altri vincoli sono soddisfatti in modo stretto ($-7 \le 0,\ -3 \le 0,\ -1 \le 1,\ -2 \le 7$): **ammissibile, non degenere**.
- $y$: da $y_5 - y_6 = -1$ e $-y_5 + 2y_6 = 1$ si ha $y = (0, 0, 0, 0, -1, 0)$: **non ammissibile, degenere** ($y_6 = 0$ con $6 \in B$).
- Nessuna delle due è ottima: $x$ è non degenere, quindi l'unica $y$ complementare è questa, che non è ammissibile.

**$y = (0, 0, 0, 1, 0, 0)$.** Si ha $y^TA = A_4 = (-1, 1) = c^T$ e $y \ge 0$: **ammissibile**. Ha una sola componente non nulla, quindi è **di base** (per esempio con $B = \{1,4\}$, $\{2,4\}$, $\{3,4\}$ o $\{4,6\}$; non con $\{4,5\}$, perché $A_5 = -A_4$) ed è **degenere**. **Non è ottima**: per tutte queste basi la $x$ complementare non è ammissibile (per esempio $B = \{2,4\}$ dà $x = (-7, 0)$, che viola $A_1x \le 0$). In più il suo valore 7 è maggiore del valore ottimo $1/4$ trovato sotto.

**Due passi del simplesso duale da $B = \{2,6\}$:**

| Passo | $B$ | $y$ | $x$ | valore | $k$ | $A_kW^i$ | rapporti | $h$ |
|---|---|---|---|---|---|---|---|---|
| 1 | $\{2,6\}$ | $(0,1,0,0,0,1)$ | $(-1,\ 0)$ | 1 | 1 ($A_1x = 2 > 0$) | $W^2:-3,\ W^6:-2$ | $r_2 = 1/3,\ r_6 = 1/2$ | 2 |
| 2 | $\{1,6\}$ | $(\frac13,0,0,0,0,\frac13)$ | $(\frac13,\ \frac23)$ | 1/3 | 3 ($A_3x = 4/3 > 1$) | $W^1:-\frac13,\ W^6:-\frac43$ | $r_1 = 1,\ r_6 = 1/4$ | 6 |

($W^2 = (2,1),\ W^6 = (1,0)$ al passo 1; $W^1 = (2/3,1/3),\ W^6 = (-1/3,-2/3)$ al passo 2.)

Si arriva a $B = \{1,3\}$: $y = (1/4,\ 0,\ 1/4,\ 0,\ 0,\ 0)$, $x = (1/4,\ 1/2)$, ammissibile. È la coppia **ottima**, con valore $1/4$.

---

## Esercizio 3

Rendimenti: $\ 0.425,\ 0.359,\ 0.735,\ 0.233,\ 0.818,\ 0.054$. Ordine: **5, 3, 1, 2, 4, 6**.

**Caso binario.**
- $v_S$: inserisco 5, 3, 1, 2 (peso 160), poi $x_4 = 72/120 = 3/5$. Rilassato $(1,1,1,\frac35,1,0)$, valore $99.8$, quindi $v_S = 99$.
- $v_I$: greedy, cioè 5, 3, 1, 2 (peso 160); 4 non entra (280), 6 non entra (290). $x = (1,1,1,0,1,0)$, quindi $v_I = 83$.

**Branch and Bound** (variabile frazionaria, prima $=0$ poi $=1$):

| Nodo | Vincoli | Rilassato | $v_S$ | Esito |
|---|---|---|---|---|
| $P$ | – | $(1,1,1,\frac35,1,0)$ | 99 | ramifico su $x_4$ |
| $P_{1,1}$ | $x_4=0$ | $(1,1,1,0,1,\frac{36}{65})$ | 86 | ramifico su $x_6$ |
| $P_{2,1}$ | $x_4=0,x_6=0$ | $(1,1,1,0,1,0)$ | 83 | $83 \le v_I = 83$: chiudo |
| $P_{2,2}$ | $x_4=0,x_6=1$ | $(1,\frac3{32},1,0,1,1)$ | 69 | $69 \le 83$: chiudo |
| $P_{1,2}$ | $x_4=1$ | $(1,\frac14,1,1,1,0)$ | 93 | ramifico su $x_2$ |
| $P_{2,3}$ | $x_4=1,x_2=0$ | $(1,0,1,1,1,\frac8{65})$ | 88 | ramifico su $x_6$ |
| $P_{3,5}$ | $x_4=1,x_2=0,x_6=0$ | $(1,0,1,1,1,0)$ | 88 | intera: **$v_I = 88$** |
| $P_{3,6}$ | $x_4=1,x_2=0,x_6=1$ | – | – | $\emptyset$ (peso $120 + 130 > 232$) |
| $P_{2,4}$ | $x_4=1,x_2=1$ | $(0,1,\frac{13}{17},1,1,0)$ | 88 | $88 \le 88$: chiudo |

**Ottimo:** beni 1, 3, 4, 5 (peso 216), valore **88**.

**Caso intero.**
- $v_S$: tutto sul bene 5, $x_5 = 232/22 = 116/11$, valore $189.8$, quindi $v_S = 189$.
- $v_I$: greedy intero, $x_5 = 10$ (peso 220); con il residuo 12 non entra altro. $v_I = 180$.
- (Controllo: l'ottimo intero è $x_3 = 1,\ x_5 = 9$, con valore 187.)

**Taglio di Gomory** (scarto $x_7$, in base $x_5$):
$$x_5 + \tfrac{20}{11}x_1 + \tfrac{32}{11}x_2 + \tfrac{17}{11}x_3 + \tfrac{60}{11}x_4 + \tfrac{65}{11}x_6 + \tfrac1{22}x_7 = \tfrac{116}{11}$$
Il taglio è $\tfrac9{11}x_1 + \tfrac{10}{11}x_2 + \tfrac6{11}x_3 + \tfrac5{11}x_4 + \tfrac{10}{11}x_6 + \tfrac1{22}x_7 \ge \tfrac6{11}$. Sostituendo $x_7 = 232 - (40x_1 + 64x_2 + 34x_3 + 120x_4 + 22x_5 + 130x_6)$:
$$x_1 + 2x_2 + x_3 + 5x_4 + x_5 + 5x_6 \le 10$$

---

## Esercizio 4

**5-albero.** Albero di costo minimo sui nodi $\{1,2,3,4\}$ (Kruskal): $(3,4)=12,\ (2,4)=16$; scarto $(2,3)=18$ perché chiude un ciclo; poi $(1,2)=22$. Costo 50. Poi i due archi meno costosi del nodo 5: $(4,5)=16,\ (1,5)=24$.
5-albero: $(3,4),(2,4),(1,2),(4,5),(1,5)$, con **$v_I = 90$**.

**Vincoli violati.** Il nodo 4 ha grado 3 e il nodo 3 ha grado 1:
$$x_{14} + x_{24} + x_{34} + x_{45} = 2 \ (\text{vale } 3), \qquad x_{13} + x_{23} + x_{34} + x_{35} = 2 \ (\text{vale } 1).$$

**Nodo più vicino da 1:** $1 \xrightarrow{22} 2 \xrightarrow{16} 4 \xrightarrow{12} 3 \xrightarrow{26} 5 \xrightarrow{24} 1$, con **$v_S = 100$**.

**Branch and Bound:**

| Nodo | Vincoli | 5-albero | $v_I$ | Esito |
|---|---|---|---|---|
| $P$ | – | (3,4)(2,4)(1,2)(4,5)(1,5) | 90 | istanzio $x_{24}$ |
| $P_{1,1}$ | $x_{24}=0$ | (3,4)(2,3)(1,2)(4,5)(1,5) | 92 | ciclo hamiltoniano $1-2-3-4-5-1$: **$v_S = 92$** |
| $P_{1,2}$ | $x_{24}=1$ | come $P$ | 90 | istanzio $x_{34}$ |
| $P_{2,3}$ | $x_{24}=1, x_{34}=0$ | (2,4)(2,3)(1,2)(4,5)(1,5) | 96 | $96 \ge 92$: chiudo |
| $P_{2,4}$ | $x_{24}=1, x_{34}=1$ | come $P$ | 90 | istanzio $x_{45}$ |
| $P_{3,7}$ | $x_{24}=1,x_{34}=1,x_{45}=0$ | (2,4)(3,4)(1,2)(1,5)(3,5) | 100 | $100 \ge 92$: chiudo |
| $P_{3,8}$ | $x_{24}=1,x_{34}=1,x_{45}=1$ | – | – | $\emptyset$: il nodo 4 avrebbe 3 archi |

**Ciclo ottimo:** $1 - 2 - 3 - 4 - 5 - 1$, con costo **92**.
