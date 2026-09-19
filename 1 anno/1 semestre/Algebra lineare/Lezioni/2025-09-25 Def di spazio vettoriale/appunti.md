# Spazi Vettoriali

## Definizione di Spazio Vettoriale

Sia $\mathbb{K}$ un campo (ad esempio, $\mathbb{R}$ o $\mathbb{C}$). Uno **spazio vettoriale** $V$ sul campo $\mathbb{K}$ è un insieme non vuoto dotato di due operazioni:

1.  **Somma tra vettori**: una funzione che associa a ogni coppia di vettori $v_1, v_2 \in V$ un unico vettore $v_1 + v_2 \in V$.
2.  **Moltiplicazione per scalare**: una funzione che associa a ogni scalare $\lambda \in \mathbb{K}$ e a ogni vettore $v \in V$ un unico vettore $\lambda v \in V$.

Gli elementi di $V$ sono chiamati **vettori**, mentre gli elementi del campo $\mathbb{K}$ sono detti **scalari**.

Queste due operazioni devono soddisfare le seguenti otto proprietà (o assiomi) per ogni $v, v_1, v_2, v_3 \in V$ e per ogni $\lambda, \mu \in \mathbb{K}$.

### Proprietà della Somma

1.  **Proprietà Commutativa** $$v_1 + v_2 = v_2 + v_1$$
2.  **Proprietà Associativa**$$(v_1 + v_2) + v_3 = v_1 + (v_2 + v_3)$$
3.  **Esistenza dell'Elemento Neutro**
	Esiste in $V$ un elemento, denotato con $0$ (o più formalmente $0_V$), chiamato **vettore nullo**, tale che per ogni $v \in V$:
    $$
    v + 0 = 0 + v = v
    $$
4.  **Esistenza dell'Opposto**
	Per ogni vettore $v \in V$, esiste un vettore $w \in V$, chiamato **opposto** di $v$, tale che:
    $$
    v + w = w + v = 0
    $$
    Questo opposto è unico e viene comunemente denotato con $-v$

### Proprietà della Moltiplicazione per Scalare

5.  **Proprietà Distributiva rispetto alla somma tra vettori**:
    $$
    \lambda(v + w) = \lambda v + \lambda w
    $$
6.  **Proprietà Distributiva rispetto alla somma tra scalari**:
    $$
    (\lambda + \mu)v = \lambda v + \mu v
    $$
7.  **Proprietà Associativa della moltiplicazione per scalari**:
    $$
    (\lambda\mu)v = \lambda(\mu v)
    $$
8.  **Esistenza dell'Elemento Neutro della moltiplicazione**: L'elemento neutro della moltiplicazione del campo $\mathbb{K}$, denotato con $1$, soddisfa la seguente proprietà:
    $$
    1v = v
    $$
### Proposizione 1: Prodotto per lo scalare nullo

Per qualsiasi vettore $v \in V$, si ha che $0v = 0$ (dove il primo $0$ è lo scalare nullo di $\mathbb{K}$ e il secondo è il vettore nullo di $V$).

**Dimostrazione**:
Partiamo dall'uguaglianza $0v = (0+0)v$. Utilizzando la proprietà distributiva (assioma 6), possiamo scrivere:
$$0v = 0v + 0v$$
Sia $w$ il vettore opposto di $0v$, la cui esistenza è garantita dall'assioma 4. Sommando $w$ a entrambi i membri dell'equazione otteniamo:
$$0v + w = (0v + 0v) + w$$
Applicando la definizione di opposto (assioma 4) al primo membro e la proprietà associativa (assioma 2) al secondo membro:
$$0 = 0v + (0v + w)$$
Infine, applicando nuovamente la definizione di opposto e poi quella di elemento neutro (assioma 3):
$$0 = 0v + 0 \implies 0 = 0v$$
come volevasi dimostrare.

### Proposizione 2: L'opposto di un vettore

Per ogni $v \in V$, il suo opposto è il vettore $(-1)v$.

**Dimostrazione**:
Per dimostrare che $(-1)v$ è l'opposto di $v$, dobbiamo verificare che la loro somma dia il vettore nullo, ovvero $v + (-1)v = 0$.
Partiamo dall'espressione $v + (-1)v$. Usando l'assioma 8 ($1v=v$), possiamo scrivere:
$$v + (-1)v = 1v + (-1)v$$
Applicando la proprietà distributiva (assioma 6):
$$1v + (-1)v = (1 + (-1))v$$
Poiché $1 + (-1) = 0$ nel campo $\mathbb{K}$, otteniamo:
$$(1 + (-1))v = 0v$$
Per la proposizione precedente, sappiamo che $0v = 0$. Quindi:
$$v + (-1)v = 0$$
Questo dimostra che $(-1)v$ è l'opposto di $v$. È possibile dimostrare che l'opposto di ogni vettore è unico. D'ora in avanti, scriveremo $-v$ per denotare l'opposto di $v$, sapendo che $-v = (-1)v$.
## Esempi di Spazi Vettoriali

### 1. Polinomi

-   L'insieme $\mathbb{R}[x]$ di tutti i polinomi a coefficienti reali in una indeterminata $x$ è uno spazio vettoriale sul campo $\mathbb{R}$.
    -   **Somma**: La somma di due polinomi è ancora un polinomio. Esempio: $(x^2 + x + 7) + (x^3 + 10x - 2) = x^3 + x^2 + 11x + 5$.
    -   **Moltiplicazione per scalare**: Il prodotto di un numero reale (scalare) per un polinomio è ancora un polinomio. Esempio: $7 \cdot (x^3 + x - 1) = 7x^3 + 7x - 7$.
    È possibile verificare che queste due operazioni soddisfano tutte le 8 proprietà richieste.

-   L'insieme $\mathbb{R}[x]^{\le n}$ dei polinomi di grado al più $n$ (con $n \ge 0$) è anch'esso uno spazio vettoriale. Ad esempio, $\mathbb{R}[x]^{\le 5}$ è lo spazio dei polinomi di grado minore o uguale a 5.

### 2. Funzioni Continue

-   L'insieme $C(\mathbb{R}, \mathbb{R})$ di tutte le funzioni continue da $\mathbb{R}$ in $\mathbb{R}$ è uno spazio vettoriale sul campo $\mathbb{R}$.
    -   **Somma**: Date due funzioni continue $f(x)$ e $g(x)$, la loro somma $(f+g)(x) = f(x) + g(x)$ è ancora una funzione continua. Esempio: $\cos(x) + (3x^2 - 2)$.
    -   **Moltiplicazione per scalare**: Dato uno scalare $\lambda \in \mathbb{R}$ e una funzione continua $f(x)$, la funzione $(\lambda f)(x) = \lambda \cdot f(x)$ è ancora una funzione continua. Esempio: $7 \cdot e^x$.

### 3. Matrici

-   L'insieme $M(m, n, \mathbb{R})$ di tutte le matrici con $m$ righe e $n$ colonne a coefficienti nel campo $\mathbb{R}$ è uno spazio vettoriale.
    -   **Somma**: La somma di due matrici $m \times n$ è ottenuta sommando i coefficienti corrispondenti e il risultato è ancora una matrice $m \times n$.
    -   **Moltiplicazione per scalare**: Il prodotto di uno scalare per una matrice si ottiene moltiplicando ogni coefficiente della matrice per quello scalare.
    Ad esempio, lo spazio delle matrici $4 \times 3$ a coefficienti reali, denotato $M(4,3, \mathbb{R})$, è uno spazio vettoriale.
# Sottospazi Vettoriali

## Definizione di Sottospazio Vettoriale

Sia $V$ uno spazio vettoriale su un campo $\mathbb{K}$ e sia $W$ un sottoinsieme non vuoto di $V$ ($W \subseteq V$, $W \neq \emptyset$).
$W$ è detto **sottospazio vettoriale** di $V$ se $W$, con le stesse operazioni di somma e di prodotto per scalare definite in $V$, è a sua volta uno spazio vettoriale.

Per verificare che un sottoinsieme $W$ sia un sottospazio vettoriale, non è necessario verificare tutte le 8 proprietà della definizione di spazio vettoriale, poiché molte di esse (come la commutatività e l'associatività) sono ereditate da $V$. È sufficiente verificare le seguenti tre proprietà:

1.  **Il vettore nullo appartiene a W**:
    $$
    0_V \in W
    $$
    Questa proprietà assicura che $W$ non sia vuoto e che contenga l'elemento neutro per la somma.

2.  **Chiusura rispetto alla somma**: Per ogni coppia di vettori $w_1, w_2 \in W$, la loro somma deve ancora appartenere a $W$.
    $$
    \forall w_1, w_2 \in W \implies w_1 + w_2 \in W
    $$

3.  **Chiusura rispetto al prodotto per scalare**: Per ogni vettore $w \in W$ e per ogni scalare $\lambda \in \mathbb{K}$, il loro prodotto deve ancora appartenere a $W$.
    $$
    \forall w \in W, \forall \lambda \in \mathbb{K} \implies \lambda w \in W
    $$
## Sottospazi Vettoriali di $\mathbb{R}^n$

In uno spazio vettoriale generico $\mathbb{R}^n$ (lo spazio dei vettori a $n$ componenti reali), i sottospazi vettoriali sono tutti e soli gli insiemi che possono essere descritti come l'insieme delle soluzioni di un sistema lineare omogeneo.

Gli unici tipi di sottospazi vettoriali di $\mathbb{R}^n$ sono:

1.  **Il sottospazio nullo**: Contiene solo il vettore nullo, $\{0\}$. Questo è il più piccolo sottospazio possibile in qualsiasi spazio vettoriale.
2.  **Rette passanti per l'origine**: Ogni retta che passa per l'origine in $\mathbb{R}^n$ è un sottospazio vettoriale. Geometricamente, una retta per l'origine è l'insieme di tutti i multipli scalari di un singolo vettore non nullo $v$: $W = \{\lambda v \mid \lambda \in \mathbb{R}\}$.
3.  **Piani passanti per l'origine**: Ogni piano che passa per l'origine in $\mathbb{R}^n$ (per $n \ge 2$) è un sottospazio vettoriale. Geometricamente, un piano per l'origine è l'insieme di tutte le combinazioni lineari di due vettori non paralleli $v_1, v_2$: $W = \{\lambda_1 v_1 + \lambda_2 v_2 \mid \lambda_1, \lambda_2 \in \mathbb{R}\}$.
4.  **Iperpiani passanti per l'origine**: In generale, qualsiasi "iperpiano" di dimensione $k$ (con $0 \le k \le n$) che passa per l'origine è un sottospazio vettoriale di $\mathbb{R}^n$.
5.  **L'intero spazio $\mathbb{R}^n$**: Lo spazio $\mathbb{R}^n$ è esso stesso un sottospazio di sé stesso.

**Perché solo questi?**
Un sottospazio vettoriale deve necessariamente contenere l'origine (il vettore nullo), come richiesto dalla prima proprietà. Qualsiasi retta, piano o iperpiano che non passi per l'origine non può essere un sottospazio vettoriale. Inoltre, le proprietà di chiusura impongono che se un sottospazio contiene certi vettori, deve contenere anche tutte le loro combinazioni lineari. Questo "forza" i sottospazi ad avere la struttura geometrica di rette, piani, o iperpiani che si intersecano nell'origine.

## Sistemi Lineari Omogenei

### Definizione

Un sistema di $m$ equazioni lineari in $n$ incognite $x_1, x_2, \dots, x_n$ è detto **omogeneo** se tutti i termini noti sono nulli. Un tale sistema ha la seguente forma matriciale:
$$
Ax = 0
$$
dove:
-   $A$ è la matrice dei coefficienti, di dimensioni $m \times n$.
-   $x$ è il vettore colonna delle incognite, di dimensioni $n \times 1$.
-   $0$ è il vettore colonna nullo, di dimensioni $m \times 1$.

### Dimostrazione L'insieme delle soluzioni è un sottospazio vettoriale

Sia $S$ l'insieme di tutte le soluzioni di un sistema lineare omogeneo $Ax = 0$. Vogliamo dimostrare che $S$ è un sottospazio vettoriale di $\mathbb{R}^n$. Per farlo, verifichiamo le tre proprietà richieste.

**1. Il vettore nullo appartiene a S**
Dobbiamo verificare se il vettore nullo $0 \in \mathbb{R}^n$ è una soluzione del sistema. Sostituiamo $x=0$ nell'equazione:
$$
A \cdot 0 = 0
$$
Questa uguaglianza è sempre vera, poiché il prodotto di qualsiasi matrice per il vettore nullo è il vettore nullo. Quindi, $0 \in S$.

**2. Chiusura rispetto alla somma**
Siano $x_1$ e $x_2$ due vettori appartenenti a $S$. Questo significa che sono entrambi soluzioni del sistema, ovvero:
$$
Ax_1 = 0 \quad \text{e} \quad Ax_2 = 0
$$
Dobbiamo dimostrare che anche la loro somma, $x_1 + x_2$, appartiene a $S$. Verifichiamo se $x_1 + x_2$ è una soluzione del sistema:
$$
A(x_1 + x_2) = Ax_1 + Ax_2
$$
per la proprietà distributiva del prodotto tra matrici. Poiché $Ax_1 = 0$ e $Ax_2 = 0$, possiamo sostituire:
$$
Ax_1 + Ax_2 = 0 + 0 = 0
$$
Quindi, $A(x_1 + x_2) = 0$, il che dimostra che $x_1 + x_2 \in S$.

**3. Chiusura rispetto al prodotto per scalare**
Sia $x \in S$ una soluzione e $\lambda \in \mathbb{R}$ uno scalare qualsiasi. Per ipotesi, $Ax=0$. Dobbiamo dimostrare che anche $\lambda x$ appartiene a $S$. Verifichiamo se $\lambda x$ è una soluzione:
$$
A(\lambda x) = \lambda(Ax)
$$
per la proprietà di omogeneità del prodotto tra matrici. Poiché $Ax = 0$, sostituiamo:
$$
\lambda(Ax) = \lambda \cdot 0 = 0
$$
Quindi, $A(\lambda x) = 0$, il che dimostra che $\lambda x \in S$.

Avendo verificato tutte e tre le proprietà, possiamo concludere formalmente che l'insieme $S$ delle soluzioni di un sistema lineare omogeneo è un sottospazio vettoriale di $\mathbb{R}^n$.