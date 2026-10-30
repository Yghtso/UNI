# Soluzioni Simulazione 8

---

## Esercizio 1

Primale per il simplesso: vincoli $A_1 = (9,10),\ b_1 = 49$; $A_2 = (6,14),\ b_2 = 38$; $A_3 = (-1,0),\ b_3 = 0$; $A_4 = (0,-1),\ b_4 = 0$.

**Simplesso primale dall'origine ($B = \{3,4\}$):**

| Passo | $B$ | $x$ | $y$ | $h$ | $W^h$ | $A_iW^h$ | rapporti | $k$ |
|---|---|---|---|---|---|---|---|---|
| 1 | $\{3,4\}$ | $(0,0)$ | $(0,0,-5,-11)$ | 3 | $(1,0)$ | $A_1:9,\ A_2:6$ | $r_1 = 49/9,\ r_2 = 19/3$ | 1 |
| 2 | $\{1,4\}$ | $(49/9,\ 0)$ | $(5/9,\ 0,\ 0,\ -49/9)$ | 4 | $(-10/9,\ 1)$ | $A_2:22/3,\ A_3:10/9$ | $r_2 = 8/11,\ r_3 = 49/10$ | 2 |
| 3 | $\{1,2\}$ | $(51/11,\ 8/11)$ | $(2/33,\ 49/66,\ 0,\ 0)$ | – | – | – | – | – |

Ottimo del rilassato: $\bar x = (51/11,\ 8/11)$, valore $343/11 \approx 31.18$.

**Valutazioni:** $v_S = \lfloor 343/11 \rfloor = 31$. Con $\lfloor \bar x \rfloor = (4, 0)$ (ammissibile) si ha $v_I = 20$.

**Taglio di Gomory ($r = 1$).** Forma standard con scarti $x_3, x_4$: base $\{x_1, x_2\}$. Riga di $x_1$:
$$x_1 + \tfrac{7}{33}x_3 - \tfrac{5}{33}x_4 = \tfrac{51}{11}$$
Il taglio è $\tfrac7{33}x_3 + \tfrac{28}{33}x_4 \ge \tfrac7{11}$, cioè $x_3 + 4x_4 \ge 3$. Con $x_3 = 49 - 9x_1 - 10x_2$ e $x_4 = 38 - 6x_1 - 14x_2$:
$$x_1 + 2x_2 \le 6$$
(taglia $\bar x$: $51/11 + 16/11 = 67/11 > 6$).

**Simplesso duale con il vincolo 5: $x_1 + 2x_2 \le 6$.**
La base $\{1,2\}$ resta ammissibile per il duale ($y \ge 0$) ma $\bar x$ viola il vincolo 5, quindi $k = 5$.
$W^1 = (-7/33,\ 1/11)$ e $W^2 = (5/33,\ -3/22)$, quindi $A_5W^1 = -1/33$ e $A_5W^2 = -4/33$.
I rapporti sono $r_1 = \dfrac{2/33}{1/33} = 2$ e $r_2 = \dfrac{49/66}{4/33} = \dfrac{49}{8}$, quindi $h = 1$.

Nuova base $B = \{2,5\}$: $x = (4,\ 1)$, $y = (0,\ 1/2,\ 0,\ 0,\ 2) \ge 0$, e $x$ soddisfa tutti i vincoli ($9\cdot4 + 10 = 46 \le 49$). È l'ottimo del nuovo rilassato, ed è **intero**: quindi è **ottimo per il PLI**, con valore $5\cdot4 + 11 = 31 = v_S$.

---

## Esercizio 2

Problema ausiliario: $\min\ \varepsilon_1 + \varepsilon_2$ con $Ax + I\varepsilon = b$, $x, \varepsilon \ge 0$.
È in **forma duale standard**, con variabili $y = (x_1, \dots, x_4, \varepsilon_1, \varepsilon_2)$, costi $(0,0,0,0,1,1)$ e termine noto $b$. Il primale associato, in variabili $u = (u_1, u_2)$, è
$$\max\ b_1u_1 + b_2u_2 \quad\text{con}\quad A_j^T u \le 0 \ (j = 1..4),\ \ u_1 \le 1,\ \ u_2 \le 1.$$
La base $\{5,6\}$ dà $y = (0,0,0,0,b_1,b_2) \ge 0$, ammissibile per il duale, quindi si usa il **simplesso duale**. Per il teorema dei poliedri vuoti: ottimo $= 0$ se e solo se $P \ne \emptyset$.

### $P_1$

Colonne: $A_1 = (-4,2),\ A_2 = (5,4),\ A_3 = (-2,1),\ A_4 = (2,4),\ A_5 = (1,0),\ A_6 = (0,1)$.

| Passo | $B$ | $y$ | $u$ | valore | $k$ | $A_kW^i$ | rapporti | $h$ |
|---|---|---|---|---|---|---|---|---|
| 1 | $\{5,6\}$ | $(0,0,0,0,8,9)$ | $(1,1)$ | 17 | 2 ($A_2u = 9 > 0$) | $W^5:-5,\ W^6:-4$ | $r_5 = 8/5,\ r_6 = 9/4$ | 5 |
| 2 | $\{2,6\}$ | $(0,\frac85,0,0,0,\frac{13}5)$ | $(-\frac45, 1)$ | 13/5 | 1 ($A_1u = 26/5 > 0$) | $W^2:\frac45,\ W^6:-\frac{26}5$ | $r_6 = 1/2$ | 6 |
| 3 | $\{1,2\}$ | $(\frac12, 2, 0,0,0,0)$ | $(0,0)$ | 0 | – | – | – | – |

Al passo 3 $u = (0,0)$ soddisfa tutti i vincoli: ottimo con valore $0$. Quindi **$P_1 \ne \emptyset$**, e un suo punto (vertice) è $x = (1/2,\ 2,\ 0,\ 0)$. Verifica: $-2 + 10 = 8$ e $1 + 8 = 9$.

### $P_2$

Colonne: $A_1 = (-1,2),\ A_2 = (-3,2),\ A_3 = (3,5),\ A_4 = (-4,-4),\ A_5 = (1,0),\ A_6 = (0,1)$.

| Passo | $B$ | $y$ | $u$ | valore | $k$ | $A_kW^i$ | rapporti | $h$ |
|---|---|---|---|---|---|---|---|---|
| 1 | $\{5,6\}$ | $(0,0,0,0,12,8)$ | $(1,1)$ | 20 | 1 ($A_1u = 1 > 0$) | $W^5:1,\ W^6:-2$ | $r_6 = 4$ | 6 |
| 2 | $\{1,5\}$ | $(4,0,0,0,16,0)$ | $(1, \frac12)$ | 16 | 3 ($A_3u = 11/2 > 0$) | $W^1:-\frac52,\ W^5:-\frac{11}2$ | $r_1 = 8/5,\ r_5 = 32/11$ | 1 |
| 3 | $\{3,5\}$ | $(0,0,\frac85,0,\frac{36}5,0)$ | $(1, -\frac35)$ | 36/5 | – | – | – | – |

Al passo 3 $u = (1, -3/5)$ soddisfa tutti i vincoli ($A_1u = -11/5$, $A_2u = -21/5$, $A_3u = 0$, $A_4u = -8/5$, $u \le 1$): ottimo con valore $36/5 > 0$. Quindi **$P_2 = \emptyset$**.

(Osservazione: $u = (1, -3/5)$ è un certificato. Moltiplicando il primo vincolo per 1, il secondo per $-3/5$ e sommando, si ha a sinistra una combinazione con coefficienti tutti $\le 0$, quindi un valore $\le 0$ per $x \ge 0$, mentre a destra si ha $12 - 24/5 = 36/5 > 0$.)

---

## Esercizio 3

**Matrice di copertura** ($a_{ij} = 1$ se $t_{ij} \le 10$):

| | S1 | S2 | S3 | S4 | S5 | S6 |
|---|---|---|---|---|---|---|
| Q1 | 0 | 1 | 0 | 1 | 0 | 0 |
| Q2 | 1 | 0 | 1 | 0 | 0 | 1 |
| Q3 | 0 | 1 | 0 | 0 | 1 | 0 |
| Q4 | 0 | 0 | 1 | 0 | 0 | 0 |
| Q5 | 0 | 0 | 0 | 1 | 0 | 1 |
| Q6 | 0 | 1 | 0 | 0 | 0 | 1 |
| Q7 | 0 | 1 | 0 | 0 | 1 | 0 |

**Modello:**

$$
\begin{cases}
\min\ 5x_1 + 12x_2 + 11x_3 + 9x_4 + 4x_5 + 5x_6 \\
Ax \ge \mathbf{1} \quad \text{(una riga per quartiere, es. Q1: } x_2 + x_4 \ge 1) \\
x \in \{0,1\}^6
\end{cases}
$$

**Regole di riduzione.**
1. La riga Q4 ha un solo 1 (colonna S3), quindi $x_3 = 1$. Elimino la colonna S3 e le righe da essa coperte, Q2 e Q4 (costo fisso 11).
2. La colonna S1 ora è tutta di 0 (copriva solo Q2), quindi la elimino ($x_1 = 0$).

Resta il problema ridotto con righe Q1, Q3, Q5, Q6, Q7 e colonne S2, S4, S5, S6 (Q3 e Q7 sono uguali).

**$v_S$: Chvátal** sul ridotto ($\pi_j$ = righe ancora scoperte coperte da $j$, diviso $c_j$):

| Iterazione | $\pi_2$ | $\pi_4$ | $\pi_5$ | $\pi_6$ | Scelgo |
|---|---|---|---|---|---|
| 1 | 4/12 | 2/9 | **2/4** | 2/5 | S5 (copre Q3, Q7) |
| 2 | 2/12 | 2/9 | – | **2/5** | S6 (copre Q5, Q6) |
| 3 | 1/12 | **1/9** | – | – | S4 (copre Q1) |

Soluzione $\{S3, S5, S6, S4\}$, con **$v_S = 11 + 4 + 5 + 9 = 29$**.

**$v_I$: rilassato continuo** del ridotto: $x_2 = x_4 = x_5 = x_6 = 1/2$, valore 15, quindi $v_I = \lceil 11 + 15 \rceil = 26$.
(Lo si verifica con la dualità: i pesi $u_{Q1} = 6,\ u_{Q3} = 4,\ u_{Q5} = 3,\ u_{Q6} = 2,\ u_{Q7} = 0$ rispettano tutti i costi di colonna e sommano a 15.)

**Branch and Bound su $x_2$:**
- $x_2 = 0$: Q1, Q3 e Q6 hanno ora un solo 1, quindi $x_4 = x_5 = x_6 = 1$. Costo $11 + 18 = 29 \ge v_S = 29$: chiudo.
- $x_2 = 1$: restano scoperti solo Q5 ($x_4 + x_6 \ge 1$); il rilassato dà $x_6 = 1$, intero. Costo $11 + 12 + 5 = 28 < 29$, quindi aggiorno **$v_S = 28$**.

**Soluzione ottima:** attivare i siti **S2, S3, S6**, con costo **28**. La soluzione di Chvátal non era ottima.

---

## Esercizio 4

**3-albero.** Albero di costo minimo sui nodi $\{1,2,4,5,6\}$: $(4,5)=14,\ (4,6)=18,\ (1,4)=19,\ (2,5)=24$, costo 75. Il nodo 3 ha solo due archi: $(1,3)=28,\ (3,6)=22$.
3-albero: $(4,5),(4,6),(1,4),(2,5),(1,3),(3,6)$, con **$v_I = 125$**.

**Vincoli violati.** Il nodo 4 ha grado 3 e il nodo 2 ha grado 1:
$$x_{14} + x_{24} + x_{45} + x_{46} = 2 \ (\text{vale } 3), \qquad x_{12} + x_{24} + x_{25} + x_{26} = 2 \ (\text{vale } 1).$$

**Nodo più vicino da 3:** $3 \xrightarrow{22} 6 \xrightarrow{18} 4 \xrightarrow{14} 5 \xrightarrow{24} 2 \xrightarrow{39} 1 \xrightarrow{28} 3$, con **$v_S = 145$**.

**Branch and Bound:**

| Nodo | Vincoli | 3-albero | $v_I$ | Esito |
|---|---|---|---|---|
| $P$ | – | (4,5)(4,6)(1,4)(2,5)(1,3)(3,6) | 125 | istanzio $x_{46}$ |
| $P_{1,1}$ | $x_{46}=0$ | (4,5)(1,4)(2,5)(2,6)(1,3)(3,6) | 136 | ciclo hamiltoniano $1-3-6-2-5-4-1$: **$v_S = 136$** |
| $P_{1,2}$ | $x_{46}=1$ | come $P$ | 125 | istanzio $x_{45}$ |
| $P_{2,3}$ | $x_{46}=1, x_{45}=0$ | (4,6)(1,4)(2,5)(2,6)(1,3)(3,6) | 140 | $140 \ge 136$: chiudo |
| $P_{2,4}$ | $x_{46}=1, x_{45}=1$ | come $P$ | 125 | istanzio $x_{14}$ |
| $P_{3,7}$ | $x_{46}=1, x_{45}=1, x_{14}=0$ | (4,5)(4,6)(2,5)(1,6)(1,3)(3,6) | 143 | $143 \ge 136$: chiudo |
| $P_{3,8}$ | $x_{46}=1, x_{45}=1, x_{14}=1$ | – | – | $\emptyset$: il nodo 4 avrebbe 3 archi |

**Ciclo ottimo:** $1 - 3 - 6 - 2 - 5 - 4 - 1$, con costo **136**.
