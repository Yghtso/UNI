# Estremo Superiore e Convergenza di Successioni Monotone

## Estremo Superiore di un Insieme

### Insieme Limitatato Superiormente

Sia $A \subset \mathbb{R}$ un insieme non vuoto.
Un numero reale $M$ si definisce **maggiorante** di $A$ se ogni elemento di $A$ è minore o uguale a $M$. In simboli:
$$\forall a \in A, a \le M$$
Se un tale maggiorante esiste, l'insieme $A$ si dice **limitato superiormente**.

L'**estremo superiore** di $A$, denotato con $\sup(A)$, è il più piccolo tra tutti i maggioranti di $A$.
Formalmente, $L = \sup(A)$ se e solo se soddisfa due condizioni:
1.  $L$ è un maggiorante di $A$: $\forall a \in A, a \le L$.
2.  Per ogni $\varepsilon > 0$, esiste almeno un elemento $a \in A$ tale che $a > L - \varepsilon$.

### Estremo Superiore Infinito

Se un insieme $A \subset \mathbb{R}$ non è limitato superiormente, ovvero non ammette alcun maggiorante, allora si pone per definizione che il suo estremo superiore è **più infinito**.
$$\sup(A) = +\infty$$
Questo significa che per ogni numero reale $K$, per quanto grande possa essere, esiste sempre un elemento nell'insieme che lo supera.
$$\forall K \in \mathbb{R}, \exists a \in A \text \quad:\quad a > K$$

## Estremo Superiore di una Successione

Data una successione $\{a_n\}_{n \in \mathbb{N}}$, l'estremo superiore della successione è l'estremo superiore del suo **sostegno**, ovvero dell'insieme dei valori assunti dalla successione.
$$\sup_{n \in \mathbb{N}} a_n = \sup\{a_n | n \in \mathbb{N}\}$$
Se la successione non è limitata superiormente, allora il suo estremo superiore è $+\infty$.

## Teorema di Convergenza delle Successioni Monotone

Questo teorema fondamentale stabilisce un legame tra la monotonia, la limitatezza e la convergenza di una successione.

### Definizioni Preliminari

#### Successione Crescente
Una successione $\{a_n\}_{n \in \mathbb{N}}$ si dice **crescente** (o non decrescente) se ogni termine è maggiore o uguale al precedente.
$$\forall n \in \mathbb{N}, a_n \le a_{n+1}$$

#### Successione Limitata Superiormente
Una successione $\{a_n\}_{n \in \mathbb{N}}$ si dice **limitata superiormente** se esiste un numero reale $M$ tale che ogni termine della successione è minore o uguale a $M$.
$$\exists M \in \mathbb{R} \text{ tale che } \forall n \in \mathbb{N}, a_n \le M$$
In questo caso, l'insieme dei valori della successione è limitato superiormente.

### Enunciato del Teorema

Ogni successione crescente e limitata superiormente è convergente.
Inoltre, il limite della successione è uguale al suo estremo superiore.
$$\lim_{n \to \infty} a_n = \sup_{n \in \mathbb{N}} a_n$$

### Dimostrazione

Sia $\{a_n\}_{n \in \mathbb{N}}$ una successione crescente e limitata superiormente.

1.  **Esistenza dell'Estremo Superiore**: Poiché la successione è limitata superiormente, l'insieme dei suoi valori $A = \{a_n | n \in \mathbb{N}\}$ ammette estremo superiore per l'assioma di completezza dei numeri reali (a differenza dei numeri razionali). Sia $L = \sup_{n \in \mathbb{N}} a_n$. Per definizione di estremo superiore, $L$ è un numero reale finito.

2.  **Verifica della Definizione di Limite**: Dobbiamo dimostrare che per ogni $\varepsilon > 0$, esiste un indice $N \in \mathbb{N}$ tale che per ogni $n > N$ si ha $|a_n - L| < \varepsilon$.

    Poiché $L$ è l'estremo superiore, per la sua seconda proprietà, fissato un qualsiasi $\varepsilon > 0$, esiste un elemento della successione, che chiamiamo $a_N$, tale che:
    $$a_N > L - \varepsilon$$
    Questo significa che $L - \varepsilon$ non è un maggiorante per la successione.

3.  **Uso della Monotonia**: Per ipotesi, la successione è crescente, quindi per ogni $n > N$ si ha:
    $$a_n \ge a_N$$
    Combinando le due disuguaglianze, otteniamo che per ogni $n > N$:
    $$L - \varepsilon < a_N \le a_n$$

4.  **Conclusione**: D'altra parte, poiché $L$ è un maggiorante per la successione, sappiamo anche che:
    $$a_n \le L < L + \varepsilon$$
    Mettendo insieme le disuguaglianze, abbiamo dimostrato che per ogni $\varepsilon > 0$ esiste un $N$ tale che per ogni $n > N$:
    $$L - \varepsilon < a_n < L + \varepsilon$$
    Questa è esattamente la definizione di limite:
    $$|a_n - L| < \varepsilon$$
    Quindi, abbiamo provato che la successione $\{a_n\}$ converge a $L$.

# Il Numero di Nepero (e)

## Definizione Formale

Il numero di Nepero, denotato con $e$, è una costante matematica fondamentale definita come il limite della successione $a_n$:

$$e := \lim_{n \to \infty} \left(1 + \frac{1}{n}\right)^n$$

Per garantire che questa definizione sia valida, dobbiamo dimostrare che la successione $a_n = \left(1 + \frac{1}{n}\right)^n$ è **convergente**. Una successione è convergente se è **monotona** e **limitata**. Dimostreremo che $a_n$ è strettamente crescente e limitata superiormente.

---

## Dimostrazione della Monotonia Crescente

Per dimostrare che la successione è crescente ($a_{n+1} > a_n$ per ogni $n \ge 1$), utilizziamo la **disuguaglianza di Bernoulli**. La disuguaglianza afferma che per ogni numero reale $x > -1$ e ogni intero $n \ge 1$:
$$(1+x)^n \ge 1+nx$$

Consideriamo il rapporto $\frac{a_n}{a_{n-1}}$ per $n \ge 2$:

$$\frac{a_n}{a_{n-1}} = \frac{\left(1 + \frac{1}{n}\right)^n}{\left(1 + \frac{1}{n-1}\right)^{n-1}} = \frac{\left(\frac{n+1}{n}\right)^n}{\left(\frac{n}{n-1}\right)^{n-1}} = \left(\frac{n+1}{n}\right)^n \cdot \left(\frac{n-1}{n}\right)^{n-1}$$

Riscriviamo l'espressione:
$$\frac{a_n}{a_{n-1}} = \frac{n+1}{n} \cdot \left(\frac{n+1}{n} \cdot \frac{n-1}{n}\right)^{n-1} = \frac{n+1}{n} \cdot \left(\frac{n^2-1}{n^2}\right)^{n-1} = \frac{n+1}{n} \cdot \left(1 - \frac{1}{n^2}\right)^{n-1}$$

Applichiamo ora la disuguaglianza di Bernoulli con $x = -\frac{1}{n^2}$ e esponente $n-1$:
$$\left(1 - \frac{1}{n^2}\right)^{n-1} \ge 1 - (n-1)\frac{1}{n^2} = 1 - \frac{1}{n} + \frac{1}{n^2}$$

Sostituendo questo risultato nella nostra espressione otteniamo:
$$\frac{a_n}{a_{n-1}} \ge \frac{n+1}{n} \cdot \left(1 - \frac{n-1}{n^2}\right) = \frac{n+1}{n} \cdot \frac{n^2 - n + 1}{n^2} = \frac{n^3 + 1}{n^3} = 1 + \frac{1}{n^3}$$

Poiché $1 + \frac{1}{n^3} > 1$ per ogni $n \ge 2$, abbiamo dimostrato che $\frac{a_n}{a_{n-1}} > 1$, ovvero $a_n > a_{n-1}$. La successione è quindi **strettamente crescente**.

### Limite Inferiore

Essendo la successione crescente, il suo primo termine è il più piccolo.
$$a_1 = \left(1 + \frac{1}{1}\right)^1 = 2$$Dato che $a_n > a_{n-1} > \dots > a_1$, segue che per ogni $n \ge 1$:$$a_n \ge a_1 = 2$$Di conseguenza, il limite $e$ deve essere maggiore o uguale a 2. Poiché la successione è strettamente crescente, possiamo affermare con certezza che:$$e > 2$$

---

## Dimostrazione che la Successione è Limitata Superiormente

Per dimostrare che $a_n$ è limitata superiormente, introduciamo una seconda successione, $b_n$:

$$b_n = \left(1 + \frac{1}{n}\right)^{n+1}$$

Dimostriamo che $b_n$ è **decrescente**. Consideriamo il rapporto $\frac{b_{n-1}}{b_n}$:
$$\frac{b_{n-1}}{b_n} = \frac{\left(1+\frac{1}{n-1}\right)^n}{\left(1+\frac{1}{n}\right)^{n+1}} = \left(\frac{\frac{n}{n-1}}{\frac{n+1}{n}}\right)^n \cdot \frac{1}{1+\frac{1}{n}} = \left(\frac{n^2}{n^2-1}\right)^n \cdot \frac{n}{n+1} = \left(1+\frac{1}{n^2-1}\right)^n \cdot \frac{n}{n+1}$$

Usando di nuovo la disuguaglianza di Bernoulli con $x = \frac{1}{n^2-1}$:
$$\left(1+\frac{1}{n^2-1}\right)^n > 1 + \frac{n}{n^2-1}$$

Quindi:
$$\frac{b_{n-1}}{b_n} > \left(1+\frac{n}{n^2-1}\right) \frac{n}{n+1} = \frac{n^2-1+n}{n^2-1} \cdot \frac{n}{n+1} = \frac{n^2+n-1}{(n-1)(n+1)} \cdot \frac{n}{n+1} = \frac{n(n^2+n-1)}{(n-1)(n+1)^2}$$
Si può dimostrare che questa quantità è maggiore di 1. Pertanto, $b_n$ è decrescente.

Ora, confrontiamo $a_n$ e $b_n$:
$$b_n = \left(1 + \frac{1}{n}\right)^{n+1} = \left(1 + \frac{1}{n}\right)^n \cdot \left(1 + \frac{1}{n}\right) = a_n \cdot \left(1 + \frac{1}{n}\right)$$
Dato che $\left(1 + \frac{1}{n}\right) > 1$, è evidente che $b_n > a_n$ per ogni $n$.

Poiché $b_n$ è decrescente e $a_n < b_n$, abbiamo:
$$a_n < b_n < b_{n-1} < \dots < b_1$$Calcoliamo $b_1$:$$b_1 = \left(1 + \frac{1}{1}\right)^{1+1} = 2^2 = 4$$Abbiamo quindi dimostrato che per ogni $n \ge 1$:$$a_n < 4$$
La successione $a_n$ è **limitata superiormente**.

Avendo dimostrato che $a_n$ è sia crescente che limitata superiormente, per il **Teorema di convergenza delle successioni monotone**, il suo limite esiste ed è finito. Questo limite è il numero $e$.

---

## Barriere per il Valore di $e$ e Forma Indeterminata

Dalle dimostrazioni precedenti, abbiamo stabilito delle "barriere" naturali per il valore di $e$:
$$2 < e < 4$$

In realtà, si può dimostrare che $a_n < 3$ per ogni $n$, raffinando la stima a:
$$2 < e < 3$$

Il valore approssimato di $e$ è $2.71828...$

### La Forma Indeterminata $1^\infty$

Il limite che definisce $e$ è il caso più celebre della forma indeterminata $1^\infty$. **Attenzione:** la richiesta menzionava $0^\infty$, ma la forma indeterminata associata a $e$ è $1^\infty$.

Una forma indeterminata del tipo $\lim_{x \to c} [f(x)]^{g(x)}$ si presenta quando:
$$\lim_{x \to c} f(x) = 1 \quad \text{e} \quad \lim_{x \to c} g(x) = \infty$$
In questo caso, non si può concludere nulla a priori sul valore del limite. Il risultato può essere $1$, $e$, un altro numero, $\infty$ o non esistere.

Per risolvere questi limiti, si ricorre a una manipolazione algebrica basata sulla definizione di $e$, utilizzando l'identità $A^B = e^{B \ln A}$:
$$\lim_{x \to c} [f(x)]^{g(x)} = \lim_{x \to c} e^{g(x) \ln(f(x))} = e^{\lim_{x \to c} [g(x) \ln(f(x))]}$$
Poiché $f(x) \to 1$, allora $\ln(f(x)) \to \ln(1) = 0$. Il limite all'esponente diventa una forma indeterminata del tipo $\infty \cdot 0$, che è spesso più semplice da risolvere.