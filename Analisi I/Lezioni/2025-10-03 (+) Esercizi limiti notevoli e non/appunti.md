# Successioni: Convergenza, Divergenza e Operazioni

## Definizioni Formali

### Successione Convergente

Una successione di numeri reali $(a_n)$ si dice **convergente** a un numero reale $L$ se per ogni $\epsilon > 0$, esiste un numero naturale $N$ tale che per ogni $n > N$ si abbia:

$$ |a_n - L| < \epsilon $$

In tal caso, si scrive:

$$ \lim_{n \to \infty} a_n = L $$

Questo significa che, scegliendo un qualsiasi piccolo intervallo di ampiezza $2\epsilon$ centrato in $L$, i termini della successione, da un certo punto in poi, cadono tutti all'interno di quell'intervallo.

### Successione Divergente

Una successione di numeri reali $(a_n)$ si dice **divergente** se tende a $+\infty$ o $-\infty$.

- **Divergente positivamente** ($+\infty$): per ogni numero reale $M > 0$, esiste un numero naturale $N$ tale che per ogni $n > N$ si abbia:

$$ a_n > M $$

In tal caso, si scrive:

$$ \lim_{n \to \infty} a_n = +\infty $$

- **Divergente negativamente** ($-\infty$): per ogni numero reale $M < 0$, esiste un numero naturale $N$ tale che per ogni $n > N$ si abbia:

$$ a_n < M $$

In tal caso, si scrive:

$$ \lim_{n \to \infty} a_n = -\infty $$

Se una successione non è né convergente né divergente, si dice **indeterminata** o **oscillante**.

## Algebra dei Limiti

Siano $(a_n)$ e $(b_n)$ due successioni.

### Somma di Successioni

- **Convergenti**: Se $\lim_{n \to \infty} a_n = L$ e $\lim_{n \to \infty} b_n = M$, allora:

$$ \lim_{n \to \infty} (a_n + b_n) = L + M $$

- **Divergenti**:
  - Se $\lim_{n \to \infty} a_n = +\infty$ e $\lim_{n \to \infty} b_n = +\infty$, allora $\lim_{n \to \infty} (a_n + b_n) = +\infty$.
  - Se $\lim_{n \to \infty} a_n = -\infty$ e $\lim_{n \to \infty} b_n = -\infty$, allora $\lim_{n \to \infty} (a_n + b_n) = -\infty$.
  - Se $\lim_{n \to \infty} a_n = +\infty$ e $\lim_{n \to \infty} b_n = L$ (finito), allora $\lim_{n \to \infty} (a_n + b_n) = +\infty$.
  - Se $\lim_{n \to \infty} a_n = -\infty$ e $\lim_{n \to \infty} b_n = L$ (finito), allora $\lim_{n \to \infty} (a_n + b_n) = -\infty$.

- **Forma Indeterminata**: Se $\lim_{n \to \infty} a_n = +\infty$ e $\lim_{n \to \infty} b_n = -\infty$, il limite della somma è una forma indeterminata del tipo $+\infty - \infty$.

### Prodotto di Successioni

- **Convergenti**: Se $\lim_{n \to \infty} a_n = L$ e $\lim_{n \to \infty} b_n = M$, allora:

$$ \lim_{n \to \infty} (a_n \cdot b_n) = L \cdot M $$

- **Divergenti e Convergenti**:
  - Se $\lim_{n \to \infty} a_n = \pm\infty$ e $\lim_{n \to \infty} b_n = M \neq 0$, allora $\lim_{n \to \infty} (a_n \cdot b_n) = \pm\infty$ (il segno dipende dalla regola dei segni).
  - Se $\lim_{n \to \infty} a_n = \pm\infty$ e $\lim_{n \to \infty} b_n = \pm\infty$, allora $\lim_{n \to \infty} (a_n \cdot b_n) = \pm\infty$ (il segno dipende dalla regola dei segni).

- **Forma Indeterminata**: Se $\lim_{n \to \infty} a_n = \pm\infty$ e $\lim_{n \to \infty} b_n = 0$, il limite del prodotto è una forma indeterminata del tipo $\infty \cdot 0$.

## Calcolo di Limiti di Successioni

Consideriamo la successione $x_n = \frac{1}{n}$, che è una successione infinitesima, ovvero $\lim_{n \to \infty} \frac{1}{n} = 0$.

### Limite di $\sin(\frac{1}{n})$

Dato che $\lim_{n \to \infty} \frac{1}{n} = 0$ e la funzione seno è continua in $0$, possiamo applicare il teorema sul limite di una funzione composta:

$$ \lim_{n \to \infty} \sin\left(\frac{1}{n}\right) = \sin\left(\lim_{n \to \infty} \frac{1}{n}\right) = \sin(0) = 0 $$

### Limite di $\cos(\frac{1}{n})$

Analogamente, dato che $\lim_{n \to \infty} \frac{1}{n} = 0$ e la funzione coseno è continua in $0$:

$$ \lim_{n \to \infty} \cos\left(\frac{1}{n}\right) = \cos\left(\lim_{n \to \infty} \frac{1}{n}\right) = \cos(0) = 1 $$

### Limite di $\frac{\sin(1/n)}{1/n}$

Questo è un limite notevole. Poniamo $x_n = \frac{1}{n}$. Quando $n \to \infty$, abbiamo che $x_n \to 0$. Il limite si riconduce al limite notevole per funzioni:

$$ \lim_{x \to 0} \frac{\sin(x)}{x} = 1 $$

Pertanto, per il teorema ponte (o teorema di collegamento), che lega i limiti di funzioni ai limiti di successioni, possiamo scrivere:

$$ \lim_{n \to \infty} \frac{\sin(1/n)}{1/n} = 1 $$

Questo può essere dimostrato formalmente utilizzando il teorema del confronto (o dei carabinieri). Per $x \in (-\frac{\pi}{2}, \frac{\pi}{2})$ e $x \neq 0$, vale la disuguaglianza:

$$ \cos(x) < \frac{\sin(x)}{x} < 1 $$

Sostituendo $x$ con $\frac{1}{n}$ (per $n$ sufficientemente grande, $\frac{1}{n}$ cadrà in quell'intervallo):

$$ \cos\left(\frac{1}{n}\right) < \frac{\sin(1/n)}{1/n} < 1 $$

Passando al limite per $n \to \infty$:

$$ \lim_{n \to \infty} \cos\left(\frac{1}{n}\right) \le \lim_{n \to \infty} \frac{\sin(1/n)}{1/n} \le \lim_{n \to \infty} 1 $$

Poiché $\lim_{n \to \infty} \cos(\frac{1}{n}) = 1$ e $\lim_{n \to \infty} 1 = 1$, per il teorema del confronto, anche il limite intermedio deve essere 1.

# Limiti Notevoli con Radici n-esime

## Limite della Radice n-esima di una Costante

### Enunciato

Per ogni costante reale $a > 0$, il limite della successione $\{\sqrt[n]{a}\}$ è 1.
$$ \lim_{n \to \infty} \sqrt[n]{a} = 1 $$

### Strumento Utilizzato: Disuguaglianza di Bernoulli

La dimostrazione si basa sulla **Disuguaglianza di Bernoulli**, che afferma:
Per ogni $x \in \mathbb{R}$ con $x > -1$ e per ogni intero $n \ge 0$, vale:
$$ (1+x)^n \ge 1+nx $$

### Dimostrazione

Analizziamo i tre casi possibili per il valore di $a$.

#### Caso 1: $a > 1$
1.  Definiamo una nuova successione $x_n = \sqrt[n]{a} - 1$. Poiché $a>1$, si ha $\sqrt[n]{a} > 1$, e quindi $x_n > 0$ per ogni $n \ge 1$.
2.  Dalla definizione, possiamo scrivere $\sqrt[n]{a} = 1 + x_n$. Elevando entrambi i membri alla $n$:
    $$ a = (1 + x_n)^n $$
3.  Applichiamo la disuguaglianza di Bernoulli al membro di destra, con $x = x_n > 0$:
    $$ a = (1 + x_n)^n \ge 1 + n x_n $$
4.  Da questa relazione, isoliamo $x_n$:
    $$ a - 1 \ge n x_n \implies x_n \le \frac{a-1}{n} $$
5.  Abbiamo quindi "stretto" la successione $x_n$ in una disuguaglianza:
    $$ 0 < x_n \le \frac{a-1}{n} $$
6.  Calcoliamo il limite degli estremi per $n \to \infty$:
    $$ \lim_{n \to \infty} 0 = 0 \quad \text{e} \quad \lim_{n \to \infty} \frac{a-1}{n} = 0 $$
7.  Per il **Teorema del Confronto** (o dei Carabinieri), concludiamo che anche il limite della successione intermedia è zero: $\lim_{n \to \infty} x_n = 0$.
8.  Sostituendo la definizione originale di $x_n$, otteniamo:
    $$ \lim_{n \to \infty} (\sqrt[n]{a} - 1) = 0 \implies \lim_{n \to \infty} \sqrt[n]{a} = 1 $$

#### Caso 2: $a = 1$
Questo caso è banale. La successione è costantemente 1:
$$ \sqrt[n]{1} = 1 \quad \forall n \in \mathbb{N} $$
Il limite di una successione costante è la costante stessa, quindi:
$$ \lim_{n \to \infty} \sqrt[n]{1} = 1 $$

#### Caso 3: $0 < a < 1$
1.  Se $0 < a < 1$, possiamo definire una nuova costante $b = \frac{1}{a}$. Poiché $a < 1$, ne consegue che $b > 1$.
2.  Riscriviamo il termine $\sqrt[n]{a}$ in funzione di $b$:
    $$ \sqrt[n]{a} = \sqrt[n]{\frac{1}{b}} = \frac{\sqrt[n]{1}}{\sqrt[n]{b}} = \frac{1}{\sqrt[n]{b}} $$
3.  Calcoliamo ora il limite utilizzando l'algebra dei limiti:
    $$ \lim_{n \to \infty} \sqrt[n]{a} = \lim_{n \to \infty} \frac{1}{\sqrt[n]{b}} = \frac{1}{\lim_{n \to \infty} \sqrt[n]{b}} $$
4.  Poiché $b > 1$, ricadiamo nel Caso 1, per il quale abbiamo già dimostrato che $\lim_{n \to \infty} \sqrt[n]{b} = 1$.
5.  Sostituendo questo risultato, otteniamo:
    $$ \lim_{n \to \infty} \sqrt[n]{a} = \frac{1}{1} = 1 $$
La tesi è dimostrata per tutti i valori di $a>0$.

---

## Gerarchia degli Infiniti: Esponenziale vs Radice

### Enunciato
Sia $a > 1$. La funzione esponenziale $a^n$ è un infinito di ordine superiore rispetto alla funzione $\sqrt[n]{n}$.
$$ \lim_{n \to \infty} \frac{\sqrt[n]{n}}{a^n} = 0 $$

### Dimostrazione
La dimostrazione è una diretta conseguenza del calcolo separato dei limiti del numeratore e del denominatore.

1.  **Limite del Numeratore**: Come dimostreremo nel prossimo punto, vale il limite notevole:
    $$ \lim_{n \to \infty} \sqrt[n]{n} = 1 $$
2.  **Limite del Denominatore**: Poiché per ipotesi $a > 1$, la successione esponenziale diverge a più infinito:
    $$ \lim_{n \to \infty} a^n = +\infty $$
3.  **Limite del Rapporto**: Combinando i due risultati, il limite del rapporto assume la forma $\frac{1}{+\infty}$:
    $$ \lim_{n \to \infty} \frac{\sqrt[n]{n}}{a^n} = \frac{\lim_{n \to \infty} \sqrt[n]{n}}{\lim_{n \to \infty} a^n} = \frac{1}{+\infty} = 0 $$
Questo conferma che la crescita di $a^n$ è nettamente più rapida di quella di $\sqrt[n]{n}$ (che, di fatto, non diverge nemmeno).

---

## Limite della Radice n-esima di n

### Enunciato
Il limite per $n$ che tende a infinito della radice $n$-esima di $n$ è 1.
$$ \lim_{n \to \infty} \sqrt[n]{n} = 1 $$

### Dimostrazione
Questa dimostrazione utilizza un approccio simile a quello per $\sqrt[n]{a}$, ma richiede uno strumento più potente della disuguaglianza di Bernoulli: il **binomio di Newton**.

1.  Definiamo una nuova successione $x_n = \sqrt[n]{n} - 1$. Poiché per $n \ge 1$ si ha $\sqrt[n]{n} \ge 1$, ne consegue che $x_n \ge 0$.
2.  Dalla definizione, abbiamo $\sqrt[n]{n} = 1 + x_n$. Eleviamo entrambi i membri alla $n$:
    $$ n = (1 + x_n)^n $$
3.  Sviluppiamo il membro di destra con la formula del binomio di Newton, per $n \ge 2$:
    $$ (1 + x_n)^n = \binom{n}{0}1^n x_n^0 + \binom{n}{1}1^{n-1}x_n^1 + \binom{n}{2}1^{n-2}x_n^2 + \dots + \binom{n}{n}x_n^n $$
    $$ n = 1 + nx_n + \frac{n(n-1)}{2}x_n^2 + \dots + x_n^n $$
4.  Poiché tutti i termini dello sviluppo sono non-negativi (essendo $x_n \ge 0$), possiamo creare una disuguaglianza trascurando tutti i termini tranne quello con $x_n^2$:
    $$ n \ge \frac{n(n-1)}{2}x_n^2 $$
5.  Per $n \ge 2$, possiamo semplificare la disuguaglianza e isolare $x_n^2$:
    $$ 1 \ge \frac{n-1}{2}x_n^2 \implies x_n^2 \le \frac{2}{n-1} $$
6.  Abbiamo quindi "stretto" la successione $x_n^2$ in una disuguaglianza:
    $$ 0 \le x_n^2 \le \frac{2}{n-1} $$
7.  Calcolando il limite degli estremi per $n \to \infty$:
    $$ \lim_{n \to \infty} 0 = 0 \quad \text{e} \quad \lim_{n \to \infty} \frac{2}{n-1} = 0 $$
8.  Per il **Teorema del Confronto**, concludiamo che $\lim_{n \to \infty} x_n^2 = 0$.
9.  Se il limite del quadrato di una successione non negativa è zero, anche il limite della successione stessa deve essere zero. Quindi, $\lim_{n \to \infty} x_n = 0$.
10. Sostituendo la definizione originale di $x_n$, otteniamo:
    $$ \lim_{n \to \infty} (\sqrt[n]{n} - 1) = 0 \implies \lim_{n \to \infty} \sqrt[n]{n} = 1 $$

**C.V.D.**