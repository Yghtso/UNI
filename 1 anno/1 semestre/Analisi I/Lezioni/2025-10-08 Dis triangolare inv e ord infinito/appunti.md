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
# Gerarchia degli Infiniti

In questa sezione, si analizza la velocità con cui diverse funzioni tendono all'infinito, stabilendo un ordine gerarchico. Dimostreremo formalmente i limiti dei rapporti tra queste funzioni per validare tale gerarchia.

---

## Limite del Rapporto Esponenziale/Fattoriale

### Enunciato

Per ogni numero reale $a \in \mathbb{R}$, il limite della successione $\left\{\frac{a^n}{n!}\right\}$ è zero.
$$ \lim_{n \to \infty} \frac{a^n}{n!} = 0 $$
Questo dimostra che il fattoriale $n!$ è un infinito di ordine superiore rispetto a qualsiasi funzione esponenziale $a^n$.

### Dimostrazione

Possiamo considerare $a > 0$, poiché se prendiamo il valore assoluto $\frac{|a|^n}{n!}$ e dimostriamo che tende a zero, anche la successione originale tenderà a zero.

Sia $x_n = \frac{a^n}{n!}$. Vogliamo dimostrare che $\forall \varepsilon > 0, \exists N' \in \mathbb{N}$ tale che $\forall n > N'$, $|x_n| < \varepsilon$.

1.  **Scelta di un indice di soglia**: Fissiamo un numero intero $N$ che sia strettamente maggiore di $a$. Una scelta formale che utilizza la funzione *floor* è:
    $$ N = \lfloor a \rfloor + 1 $$
    Per questa scelta di $N$, e per ogni intero $k > N$, il rapporto $\frac{a}{k}$ sarà minore di 1. In particolare:
    $$ \frac{a}{N+1} < 1, \quad \frac{a}{N+2} < 1, \quad \dots $$

2.  **Scomposizione del termine $x_n$**: Per un indice $n > N$, possiamo scomporre il termine $x_n$ come segue:
    $$ x_n = \frac{a^n}{n!} = \underbrace{\frac{a \cdot a \cdot \dots \cdot a}{1 \cdot 2 \cdot \dots \cdot N}}_{N \text{ termini}} \cdot \underbrace{\frac{a}{N+1} \cdot \frac{a}{N+2} \cdot \dots \cdot \frac{a}{n}}_{n-N \text{ termini}} $$
    Il primo blocco è un valore costante che non dipende da $n$. Chiamiamolo $C$:
    $$ C = \frac{a^N}{N!} $$
    Quindi, per $n > N$, possiamo scrivere:
    $$ x_n = C \cdot \frac{a}{N+1} \cdot \frac{a}{N+2} \cdot \dots \cdot \frac{a}{n} $$

3.  **Maggiorazione**: Ciascuno dei termini nel secondo blocco è minore di una stessa quantità. Sia $r = \frac{a}{N+1}$. Per la nostra scelta di $N$, sappiamo che $0 < r < 1$. Ogni altro termine $\frac{a}{k}$ (con $k > N+1$) è ancora più piccolo di $r$.
    $$ \frac{a}{N+1} = r, \quad \frac{a}{N+2} < r, \quad \dots, \quad \frac{a}{n} < r $$
    Possiamo quindi maggiorare il prodotto:
    $$ \frac{a}{N+1} \cdot \frac{a}{N+2} \cdot \dots \cdot \frac{a}{n} < \underbrace{r \cdot r \cdot \dots \cdot r}_{n-N \text{ volte}} = r^{n-N} $$

4.  **Applicazione del Teorema del Confronto**: Mettendo tutto insieme, otteniamo la seguente disuguaglianza per $n > N$:
    $$ 0 < x_n < C \cdot r^{n-N} $$
    Riscriviamo il termine di destra come:
    $$ C \cdot r^{n-N} = C \cdot \frac{r^n}{r^N} = \left(\frac{C}{r^N}\right) \cdot r^n $$
    Poiché $C$ e $r^N$ sono costanti, chiamiamo $C' = \frac{C}{r^N}$. La disuguaglianza diventa:
    $$ 0 < x_n < C' \cdot r^n $$
    Ora consideriamo il limite per $n \to \infty$. Poiché $0 < r < 1$, il limite di $r^n$ è zero:
    $$ \lim_{n \to \infty} 0 = 0 \quad \text{e} \quad \lim_{n \to \infty} C' \cdot r^n = 0 $$
    Per il **Teorema del Confronto** (o dei Carabinieri), essendo la nostra successione $x_n$ "stretta" tra due successioni che tendono a zero, anche $x_n$ deve tendere a zero.
    $$ \lim_{n \to \infty} \frac{a^n}{n!} = 0 $$

---

## Limite del Rapporto Fattoriale / n^n

### Enunciato

Il limite della successione $\left\{\frac{n!}{n^n}\right\}$ è zero.
$$ \lim_{n \to \infty} \frac{n!}{n^n} = 0 $$
Questo dimostra che la funzione $n^n$ è un infinito di ordine superiore rispetto al fattoriale $n!$.

### Dimostrazione

Consideriamo il termine generico della successione $y_n = \frac{n!}{n^n}$.

1.  **Scomposizione del termine**: Possiamo scrivere $y_n$ espandendo sia il numeratore che il denominatore:
    $$ y_n = \frac{1 \cdot 2 \cdot 3 \cdot \dots \cdot n}{n \cdot n \cdot n \cdot \dots \cdot n} $$
    Raggruppando i termini verticalmente, otteniamo un prodotto di $n$ frazioni:
    $$ y_n = \left(\frac{1}{n}\right) \cdot \left(\frac{2}{n}\right) \cdot \left(\frac{3}{n}\right) \cdot \dots \cdot \left(\frac{n}{n}\right) $$

2.  **Maggiorazione**: Analizziamo i termini del prodotto:
    * Il primo termine è $\frac{1}{n}$.
    * Tutti gli altri termini $\frac{k}{n}$ per $k=2, \dots, n$ sono minori o uguali a 1.
    $$ \frac{2}{n} \le 1, \quad \frac{3}{n} \le 1, \quad \dots, \quad \frac{n}{n} = 1 $$
    Possiamo quindi maggiorare il prodotto isolando il primo termine e sostituendo tutti gli altri con 1:
    $$ y_n = \left(\frac{1}{n}\right) \cdot \underbrace{\left(\frac{2}{n} \cdot \frac{3}{n} \cdot \dots \cdot \frac{n}{n}\right)}_{\le 1} \le \frac{1}{n} \cdot 1 = \frac{1}{n} $$

3.  **Applicazione del Teorema del Confronto**: Abbiamo stabilito che per ogni $n \ge 1$, la nostra successione è limitata come segue:
    $$ 0 < \frac{n!}{n^n} \le \frac{1}{n} $$
    Consideriamo i limiti degli estremi di questa disuguaglianza per $n \to \infty$:
    $$ \lim_{n \to \infty} 0 = 0 \quad \text{e} \quad \lim_{n \to \infty} \frac{1}{n} = 0 $$
    Per il **Teorema del Confronto**, concludiamo che anche la successione intermedia deve convergere a zero.
    $$ \lim_{n \to \infty} \frac{n!}{n^n} = 0 $$
---

## Gerarchia Completa degli Infiniti

Sulla base delle dimostrazioni precedenti e di altri risultati noti, possiamo collocare le funzioni in un ordine crescente basato sulla loro "velocità" di divergenza a $+\infty$.
Indicando con "$f(n) \ll g(n)$" il fatto che $\lim_{n \to \infty} \frac{f(n)}{g(n)} = 0$ (cioè, $g(n)$ è un infinito di ordine superiore a $f(n)$), abbiamo la seguente gerarchia:

$$ \log_b(n) \ll n^\alpha \ll a^n \ll n! \ll n^n $$

Dove si assume che le costanti siano:
* Base del logaritmo: $b > 1$
* Esponente della potenza: $\alpha > 0$
* Base dell'esponenziale: $a > 1$

**In dettaglio:**
1.  **Logaritmo (crescita più lenta)**: $\log_b(n)$
2.  **Potenza**: $n^\alpha$
3.  **Esponenziale**: $a^n$
4.  **Fattoriale**: $n!$
5.  **Super-esponenziale (crescita più rapida)**: $n^n$

Questa gerarchia è fondamentale nell'analisi della complessità degli algoritmi e nello studio del comportamento asintotico delle funzioni.
# Divergenza della Radice n-esima di n!

In questa sezione, si dimostra formalmente come la successione $\{\sqrt[n]{n!}\}$ diverga a più infinito, un risultato che può sembrare controintuitivo ma che si ottiene rigorosamente attraverso l'uso di strumenti di analisi asintotica come la formula di Stirling.

## Enunciato

Il limite per $n$ che tende a infinito della radice $n$-esima di $n!$ diverge a più infinito.
$$ \lim_{n \to \infty} \sqrt[n]{n!} = +\infty $$

## Strumento Utilizzato: La Formula di Stirling

Per calcolare questo limite, utilizziamo un potente risultato dell'analisi matematica noto come **Formula di Stirling**, che fornisce un'approssimazione asintotica per la funzione fattoriale. La formula afferma che:
$$ n! \sim \sqrt{2\pi n} \left(\frac{n}{e}\right)^n $$
Il simbolo $\sim$ (asintoticamente equivalente) significa che il rapporto tra i due termini tende a 1 quando $n \to \infty$:
$$ \lim_{n \to \infty} \frac{n!}{\sqrt{2\pi n} \left(\frac{n}{e}\right)^n} = 1 $$
Questo ci permette di sostituire $n!$ con la sua approssimazione all'interno del calcolo del limite, poiché per $n$ molto grande i due valori sono proporzionalmente quasi identici.

## Dimostrazione Formale

Il nostro obiettivo è calcolare $\lim_{n \to \infty} \sqrt[n]{n!}$.

1.  **Sostituzione con l'approssimazione di Stirling**: Sfruttando l'equivalenza asintotica, il limite della radice $n$-esima del termine originale è uguale al limite della radice $n$-esima della sua approssimazione.
    $$ \lim_{n \to \infty} \sqrt[n]{n!} = \lim_{n \to \infty} \sqrt[n]{\sqrt{2\pi n} \left(\frac{n}{e}\right)^n} $$

2.  **Scomposizione del termine**: Applichiamo le proprietà delle potenze per scomporre l'espressione all'interno del limite in parti più semplici:
    $$ \sqrt[n]{\sqrt{2\pi n} \left(\frac{n}{e}\right)^n} = \left[ \left(\sqrt{2\pi n}\right) \left(\frac{n}{e}\right)^n \right]^{\frac{1}{n}} = \left(\sqrt{2\pi n}\right)^{\frac{1}{n}} \cdot \left[\left(\frac{n}{e}\right)^n\right]^{\frac{1}{n}} $$
    Semplifichiamo ulteriormente i due fattori:
    * Il primo fattore: $(\sqrt{2\pi n})^{\frac{1}{n}} = (2\pi)^{\frac{1}{2n}} \cdot n^{\frac{1}{2n}}$
    * Il secondo fattore: $\left[\left(\frac{n}{e}\right)^n\right]^{\frac{1}{n}} = \frac{n}{e}$

    Il nostro limite diventa quindi il prodotto dei limiti di questi fattori (per il teorema sul limite del prodotto):
    $$ \lim_{n \to \infty} \left[ (2\pi)^{\frac{1}{2n}} \cdot n^{\frac{1}{2n}} \cdot \frac{n}{e} \right] = \left( \lim_{n \to \infty} (2\pi)^{\frac{1}{2n}} \right) \cdot \left( \lim_{n \to \infty} n^{\frac{1}{2n}} \right) \cdot \left( \lim_{n \to \infty} \frac{n}{e} \right) $$

3.  **Calcolo dei singoli limiti**: Analizziamo ciascun limite separatamente.

    * **Primo limite**: $\lim_{n \to \infty} (2\pi)^{\frac{1}{2n}}$
        Quando $n \to \infty$, l'esponente $\frac{1}{2n} \to 0$. Poiché $c^0 = 1$ per ogni costante $c>0$, abbiamo:
        $$ \lim_{n \to \infty} (2\pi)^{\frac{1}{2n}} = (2\pi)^0 = 1 $$

    * **Secondo limite**: $\lim_{n \to \infty} n^{\frac{1}{2n}}$
        Possiamo riscrivere il termine come $\left(n^{\frac{1}{n}}\right)^{\frac{1}{2}} = (\sqrt[n]{n})^{\frac{1}{2}}$. Utilizziamo il limite notevole fondamentale $\lim_{n \to \infty} \sqrt[n]{n} = 1$.
        $$ \lim_{n \to \infty} n^{\frac{1}{2n}} = \left(\lim_{n \to \infty} \sqrt[n]{n}\right)^{\frac{1}{2}} = 1^{\frac{1}{2}} = 1 $$

    * **Terzo limite**: $\lim_{n \to \infty} \frac{n}{e}$
        Il numeratore $n$ diverge a $+\infty$ mentre il denominatore $e$ è una costante positiva. Pertanto:
        $$ \lim_{n \to \infty} \frac{n}{e} = +\infty $$

4.  **Conclusione**: Moltiplichiamo i risultati dei tre limiti:
    $$ \lim_{n \to \infty} \sqrt[n]{n!} = 1 \cdot 1 \cdot (+\infty) = +\infty $$

Abbiamo quindi dimostrato rigorosamente che la successione diverge a più infinito.