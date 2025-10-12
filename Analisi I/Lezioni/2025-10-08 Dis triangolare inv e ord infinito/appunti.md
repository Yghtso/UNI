# Disuguaglianze e Limiti Fondamentali

## Disuguaglianza Triangolare Inversa

### Enunciato

Per ogni coppia di numeri reali $x, y \in \mathbb{R}$, vale la seguente disuguaglianza:
$$ | |x| - |y| | \le |x - y| $$

### Dimostrazione

La dimostrazione si basa sulla disuguaglianza triangolare standard: $|a+b| \le |a| + |b|$.

1.  Scriviamo $x$ come $x = (x-y) + y$. Applicando la disuguaglianza triangolare standard, otteniamo:
    $$ |x| = |(x-y) + y| \le |x-y| + |y| $$
    Spostando $|y|$ a sinistra, otteniamo la prima relazione:
    $$ |x| - |y| \le |x-y| \quad \quad (1) $$

2.  In modo del tutto analogo, scriviamo $y$ come $y = (y-x) + x$:
    $$ |y| = |(y-x) + x| \le |y-x| + |x| $$
    Spostando $|x|$ a sinistra, otteniamo:
    $$ |y| - |x| \le |y-x| $$
    Dato che $|y-x| = |-(x-y)| = |x-y|$, possiamo riscrivere la disuguaglianza come:
    $$ |y| - |x| \le |x-y| $$
    Moltiplicando entrambi i membri per $-1$ e invertendo il verso della disuguaglianza, otteniamo la seconda relazione:
    $$ -(|x| - |y|) \le |x-y| \quad \quad (2) $$

3.  Mettendo insieme le relazioni (1) e (2), abbiamo:
    $$ -|x-y| \le |x| - |y| \le |x-y| $$
    Questa doppia disuguaglianza è la definizione formale di valore assoluto. Pertanto, possiamo concludere che:
    $$ | |x| - |y| | \le |x - y| $$

**C.V.D.**

---

## Limite del Valore Assoluto di una Successione

### Enunciato

Sia $\{a_n\}_{n \in \mathbb{N}}$ una successione convergente a $L \in \mathbb{R}$.
$$ \lim_{n \to \infty} a_n = L $$
Allora la successione dei valori assoluti $\{|a_n|\}_{n \in \mathbb{N}}$ converge al valore assoluto del limite.
$$ \lim_{n \to \infty} |a_n| = |L| $$

### Dimostrazione

Per ipotesi, $\lim_{n \to \infty} a_n = L$. Questo significa che, per la definizione formale di limite:
$$ \forall \varepsilon > 0, \exists N \in \mathbb{N} \text{ tale che } \forall n > N, |a_n - L| < \varepsilon $$
Il nostro obiettivo è dimostrare che $\forall \varepsilon > 0, \exists N' \in \mathbb{N} \text{ tale che } \forall n > N', ||a_n| - |L|| < \varepsilon$.

Sfruttiamo la **disuguaglianza triangolare inversa** dimostrata in precedenza, ponendo $x = a_n$ e $y = L$:
$$ ||a_n| - |L|| \le |a_n - L| $$
Questa disuguaglianza ci fornisce il collegamento diretto tra la nostra ipotesi e la nostra tesi.

Fissiamo un $\varepsilon > 0$ arbitrario. Dall'ipotesi di convergenza di $a_n$, sappiamo che esiste un indice $N$ tale che per ogni $n > N$ vale $|a_n - L| < \varepsilon$.
Ma per la disuguaglianza appena scritta, se $|a_n - L| < \varepsilon$, allora a maggior ragione:
$$ ||a_n| - |L|| \le |a_n - L| < \varepsilon $$
Quindi, per lo stesso $\varepsilon$, possiamo scegliere lo stesso $N$ (cioè $N' = N$). Abbiamo così dimostrato che per ogni $\varepsilon > 0$ esiste un $N$ tale che per ogni $n > N$ si ha $||a_n| - |L|| < \varepsilon$.
Questo corrisponde esattamente alla definizione di limite.

**C.V.D.**

---

## Divergenza della Funzione Logaritmica

### Enunciato

Sia $a \in \mathbb{R}$ con $a > 1$. Allora il limite per $n \to \infty$ della successione $\{\log_a(n)\}_{n \in \mathbb{N}}$ diverge a più infinito.
$$ \lim_{n \to \infty} \log_a(n) = +\infty $$

### Dimostrazione

Per dimostrare che il limite è $+\infty$, dobbiamo verificare la definizione formale:
$$ \forall M \in \mathbb{R}, \exists N \in \mathbb{N} \text{ tale che } \forall n > N, \log_a(n) > M $$
Possiamo assumere $M > 0$ senza perdere di generalità.

Fissiamo un qualunque $M > 0$. Vogliamo trovare un $N$ che soddisfi la condizione.
La disuguaglianza $\log_a(n) > M$ è equivalente, applicando la funzione esponenziale $a^x$ (che è crescente essendo $a>1$) a entrambi i membri, a:
$$ n > a^M $$
Ora, scegliamo un indice $N$ che sia sicuramente maggiore di $a^M$. Una scelta naturale che utilizza la funzione *floor* (parte intera inferiore) è:
$$ N = \lfloor a^M \rfloor + 1 $$
Per definizione di funzione floor, $N$ è un numero intero e vale la relazione $\lfloor a^M \rfloor \le a^M < \lfloor a^M \rfloor + 1 = N$.

Ora, consideriamo un qualsiasi intero $n > N$. Per la nostra scelta di $N$, avremo:
$$ n > N = \lfloor a^M \rfloor + 1 > a^M $$
Quindi, per ogni $n > N$, si ha $n > a^M$.
Poiché la funzione $\log_a(x)$ è strettamente crescente per $a>1$, possiamo applicarla a entrambi i membri della disuguaglianza $n > a^M$ mantenendo il verso:
$$ \log_a(n) > \log_a(a^M) $$
Ma $\log_a(a^M) = M$. Quindi, abbiamo dimostrato che:
$$ \forall n > N, \log_a(n) > M $$
Questo completa la dimostrazione, poiché abbiamo trovato un $N$ adeguato per un $M$ arbitrario.

---

## Gerarchia degli Infiniti: Potenza vs Logaritmo

### Enunciato

Siano $a \in \mathbb{R}$ con $a > 1$ e $\alpha \in \mathbb{R}$ con $\alpha > 0$. Allora:
$$ \lim_{n \to \infty} \frac{\log_a(n)}{n^\alpha} = 0 $$
Questo significa che la funzione potenza $n^\alpha$ è un infinito di ordine superiore rispetto alla funzione logaritmica $\log_a(n)$.

### Dimostrazione

Per ogni numero reale $x \ge 1$, $\log_a(x)$ è un numero reale non negativo. Possiamo definire un numero intero $k_n$ dipendente da $n$ usando la funzione floor:
$$ k_n = \lfloor \log_a(n) \rfloor $$
Per la definizione di floor, valgono le seguenti disuguaglianze:
$$ k_n \le \log_a(n) < k_n + 1 $$
Dalla prima parte della disuguaglianza, $k_n \le \log_a(n)$, applicando la funzione esponenziale $a^x$ (crescente), otteniamo:
$$ a^{k_n} \le a^{\log_a(n)} \implies a^{k_n} \le n $$
Elevando alla potenza $\alpha > 0$, la disuguaglianza si conserva:
$$ (a^{k_n})^\alpha \le n^\alpha \implies a^{\alpha k_n} \le n^\alpha $$

Ora assembliamo la frazione di partenza. Essendo tutti i termini positivi per $n$ sufficientemente grande, abbiamo:
$$ 0 \le \frac{\log_a(n)}{n^\alpha} $$
Usando le disuguaglianze trovate, possiamo maggiorare il termine:
* Al numeratore usiamo: $\log_a(n) < k_n + 1$
* Al denominatore usiamo: $n^\alpha \ge a^{\alpha k_n} \implies \frac{1}{n^\alpha} \le \frac{1}{a^{\alpha k_n}}$

Combinando, otteniamo:
$$ 0 \le \frac{\log_a(n)}{n^\alpha} < \frac{k_n + 1}{a^{\alpha k_n}} = \frac{k_n + 1}{(a^\alpha)^{k_n}} $$
Ora analizziamo cosa succede quando $n \to \infty$. Dalla dimostrazione precedente, sappiamo che $\log_a(n) \to \infty$, e quindi anche $k_n = \lfloor \log_a(n) \rfloor \to \infty$.

Consideriamo il limite del termine di destra per $k_n \to \infty$. Poniamo $b = a^\alpha$. Poiché $a>1$ e $\alpha>0$, abbiamo che $b > 1$. Dobbiamo calcolare:
$$ \lim_{k_n \to \infty} \frac{k_n + 1}{b^{k_n}} $$
Questo è un limite notevole che risulta 0, poiché una funzione esponenziale con base maggiore di 1 cresce più rapidamente di qualsiasi polinomio (in questo caso, un polinomio di primo grado).

Abbiamo quindi la nostra successione "stretta" tra due successioni:
$$ 0 \le \lim_{n \to \infty} \frac{\log_a(n)}{n^\alpha} \le \lim_{k_n \to \infty} \frac{k_n + 1}{b^{k_n}} = 0 $$
Per il **Teorema del Confronto** (o dei Carabinieri), se una successione è compresa tra altre due che tendono allo stesso limite, allora anche quella successione tende a quel limite.
Concludiamo quindi che:
$$ \lim_{n \to \infty} \frac{\log_a(n)}{n^\alpha} = 0 $$

**C.V.D.**