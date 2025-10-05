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