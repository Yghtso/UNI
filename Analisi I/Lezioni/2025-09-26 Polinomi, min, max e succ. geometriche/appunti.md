# I Polinomi

## Definizione Formale di Polinomio

Un **polinomio** nella variabile $x$ a coefficienti in un campo $\mathbb{K}$ (come $\mathbb{R}$ o $\mathbb{C}$) è un'espressione formale del tipo:
$$P(x) = a_n x^n + a_{n-1} x^{n-1} + \dots + a_1 x + a_0$$
dove $a_0, a_1, \dots, a_n \in \mathbb{K}$ sono detti **coefficienti** del polinomio e $n \in \mathbb{N}$ è il **grado** del polinomio (se $a_n \neq 0$). Il termine $a_0$ è chiamato **termine noto**.

Utilizzando il simbolo di sommatoria, la definizione formale è:
$$P(x) = \sum_{k=0}^{n} a_k x^k$$

## Polinomi Notevoli

Un caso notevole di polinomio è lo sviluppo della potenza di un binomio, $(a+b)^n$. I coefficienti di questo sviluppo sono dati dal **coefficiente binomiale**.

Il **binomio** fornisce una formula generale per questo sviluppo:
$$(a+b)^n = \sum_{k=0}^{n} \binom{n}{k} a^{n-k} b^k$$
dove $\binom{n}{k}$ è il coefficiente binomiale, definito come:
$$\binom{n}{k} = \frac{n!}{k!(n-k)!}$$
Esso rappresenta il numero di modi in cui si possono scegliere $k$ oggetti da un insieme di $n$ oggetti, senza ripetizione e senza considerare l'ordine.

## Il Triangolo di Pascal-Tartaglia

I coefficienti binomiali $\binom{n}{k}$ possono essere calcolati e visualizzati in modo elegante tramite il **triangolo di Pascal-Tartaglia**. Ogni riga del triangolo corrisponde a una potenza $n$, e ogni elemento della riga è il coefficiente binomiale corrispondente.

**Costruzione:**
1.  La prima riga (n=0) contiene un singolo 1.
2.  Ogni elemento di una riga successiva si ottiene sommando i due elementi che si trovano immediatamente sopra di esso (considerando degli zeri ai lati di ogni riga).

## Massimo e Minimo di un Insieme

Sia $A$ un sottoinsieme non vuoto di un insieme totalmente ordinato $X$ (come ad esempio $A \subseteq \mathbb{R}$).

**Massimo di un insieme**
Un elemento $M \in A$ è detto **massimo** di $A$ se soddisfa le seguenti due condizioni:
1.  $\forall a \in A, \quad a \le M$.
2.  $M \in A$.

**Minimo di un insieme**
Un elemento $m \in A$ è detto **minimo** di $A$ se soddisfa le seguenti due condizioni:
1.  $\forall a \in A, \quad a \ge m$.
2.  $m \in A$.

L'esistenza del massimo e del minimo è garantita solo se l'insieme è ordinabile, cioè se è definita una relazione d'ordine (come "$\le$" in $\mathbb{R}$) che permette di confrontare due qualsiasi elementi.
### Unicità del Massimo e del Minimo

**Teorema**
Se un insieme $A$ ammette massimo (o minimo), allora esso è unico.

*Dimostrazione (massimo):*
Supponiamo per assurdo che esistano due massimi distinti, $M_1$ e $M_2$, per l'insieme $A$.
1.  Essendo $M_2 \in A$ allora $M_2 \le M_1$
2.  Essendo $M_1 \in A$, deve valere: $M_1 \le M_2$.

Dalle due condizioni $M_2 \le M_1$ e $M_1 \le M_2$, per la proprietà antisimmetrica della relazione d'ordine, segue necessariamente che $M_1 = M_2$.
Questo contraddice l'ipotesi che fossero distinti. Pertanto, il massimo è unico. La dimostrazione per il minimo è analoga.

### Inesistenza di Minimo e Massimo in Intervalli Aperti

Consideriamo un intervallo aperto in $\mathbb{R}$, ad esempio $A = (0, 1)$.

* **Dimostriamo che non esiste il massimo**
  Supponiamo per assurdo che esista un massimo $M \in (0, 1)$. Poiché $M \in (0, 1)$, deve essere $M < 1$.
  Consideriamo ora il numero $M' = \frac{M+1}{2}$ (il punto medio tra $M$ e 1).
  Si ha che $M < M' < 1$. Dunque, $M'$ è un elemento di $A$ che è strettamente maggiore di $M$
  Questo contraddice la prima condizione della definizione di massimo, secondo cui $M$ dovrebbe essere $\forall a \in A, a \le M$
  Pertanto, l'insieme $A=(0,1)$ non ha massimo.

* **Dimostriamo che non esiste il minimo**
  Analogamente, supponiamo per assurdo che esista un minimo $m \in (0, 1)$. Poiché $m \in (0, 1)$, deve essere $m > 0$.
  Consideriamo il numero $m' = \frac{m}{2}$.
  Si ha che $0 < m' < m$. Dunque, $m'$ è un elemento di $A$ che è strettamente minore di $m$.
  Questo contraddice la prima condizione della definizione di minimo.
  Pertanto, l'insieme $A=(0,1)$ non ha minimo.

Questo ragionamento si applica a qualsiasi intervallo aperto $(a,b)$.

### Massimo vs Punto di Massimo

È importante distinguere tra il **valore** massimo e il **punto** in cui tale valore viene raggiunto, specialmente quando si analizzano le funzioni.

Sia $f: D \to \mathbb{R}$ una funzione. L'**immagine** della funzione è l'insieme $Im(f) = \{f(x) \mid x \in D\}$.
* Il **massimo della funzione**, se esiste, è il massimo dell'insieme $Im(f)$. È un valore, un numero in $\mathbb{R}$. Si denota con $\max(f)$.
* Un **punto di massimo** è un elemento $x_0 \in D$ del dominio tale che $f(x_0) = \max(f)$. È un punto dell'asse delle ascisse.

La stessa distinzione vale per **minimo** e **punto di minimo**.
## Il Massimo Comune Divisore (MCD)

### Definizione Formale

Siano $a, b \in \mathbb{Z}$ due interi non entrambi nulli. Si definisce **Massimo Comune Divisore** di $a$ e $b$, e si denota con $\text{MCD}(a,b)$, quell'unico intero positivo $d$ che soddisfa le seguenti due proprietà:

1.  **$d$ è un divisore comune**: $d|a$ e $d|b$.
2.  **$d$ è il più grande dei divisori comuni**: per qualsiasi altro divisore comune $c$ (cioè, se $c|a$ e $c|b$), allora deve valere che $c|d$.

### Proprietà Fondamentale del MCD (Algoritmo di Euclide)

**Teorema**
Siano $a, b, q, r$ interi tali che $a = b \cdot q + r$ (con $0 \le r < |b|$). Allora vale la seguente uguaglianza:
$$ \text{MCD}(a,b) = \text{MCD}(b,r) $$

**Dimostrazione**:


## Scrittura di 1/3 come Successione Geometrica

Il numero periodico $0,\overline{3}$ può essere espresso come la somma di infiniti termini:
$$ \frac{1}{3} = 0.333... = 0.3 + 0.03 + 0.003 + \dots $$
Questa può essere riscritta come una **serie geometrica**:
$$ \sum_{n=1}^{\infty} \frac{3}{10^n} = \frac{3}{10^1} + \frac{3}{10^2} + \frac{3}{10^3} + \dots $$

### Ragione della Successione

Questa è una successione geometrica di primo termine $a_1 = \frac{3}{10}$ e **ragione** $q$.
La ragione è il fattore costante per cui viene moltiplicato ogni termine per ottenere il successivo. Si calcola come il rapporto tra un termine e il suo precedente:
$$ q = \frac{a_{n+1}}{a_n} = \frac{3/10^{n+1}}{3/10^n} = \frac{3}{10^{n+1}} \cdot \frac{10^n}{3} = \frac{10^n}{10^{n+1}} = \frac{1}{10} $$
La ragione della successione è quindi $q = \frac{1}{10}$. Poiché $|q| < 1$, la serie converge.

La formula per la somma di una serie geometrica infinita è $S = \frac{a_1}{1-q}$. Applicandola:
$$ S = \frac{3/10}{1 - 1/10} = \frac{3/10}{9/10} = \frac{3}{10} \cdot \frac{10}{9} = \frac{3}{9} = \frac{1}{3} $$

### Dimostrazione per Induzione della Somma Parziale

Dimostriamo ora la formula per la somma parziale di una serie geometrica, $S_n = \sum_{k=1}^{n} a_1 q^{k-1} = a_1 \frac{1-q^n}{1-q}$, tramite il principio di induzione.

**Passo Base ($n=1$)**:
Verifichiamo che la formula sia valida per $n=1$.
- Somma diretta: $S_1 = \sum_{k=1}^{1} a_1 q^{k-1} = a_1 q^{1-1} = a_1 q^0 = a_1$.
- Formula: $S_1 = a_1 \frac{1-q^1}{1-q} = a_1$.
La formula è vera per $n=1$.

**Passo Induttivo**:
Assumiamo che la formula sia vera per un generico intero $n=k \ge 1$ (ipotesi induttiva):
$$ S_k = \sum_{i=1}^{k} a_1 q^{i-1} = a_1 \frac{1-q^k}{1-q} $$
Dobbiamo dimostrare che la formula vale anche per $n=k+1$.
$$ S_{k+1} = \sum_{i=1}^{k+1} a_1 q^{i-1} = S_k + a_{k+1} = \left(\sum_{i=1}^{k} a_1 q^{i-1}\right) + a_1 q^{(k+1)-1} $$
Usiamo l'ipotesi induttiva per sostituire $S_k$:
$$ S_{k+1} = \left(a_1 \frac{1-q^k}{1-q}\right) + a_1 q^k $$
Mettiamo a denominatore comune:
$$ S_{k+1} = \frac{a_1(1-q^k) + a_1 q^k (1-q)}{1-q} $$
$$ S_{k+1} = \frac{a_1 - a_1 q^k + a_1 q^k - a_1 q^{k+1}}{1-q} $$
Semplifichiamo i termini opposti:
$$ S_{k+1} = \frac{a_1 - a_1 q^{k+1}}{1-q} = a_1 \frac{1-q^{k+1}}{1-q} $$
Questa è esattamente la formula della somma parziale per $n=k+1$. Poiché il passo base e il passo induttivo sono verificati, la formula è valida per ogni $n \in \mathbb{N}, n \ge 1$.
$$ \text{Q.E.D.} $$