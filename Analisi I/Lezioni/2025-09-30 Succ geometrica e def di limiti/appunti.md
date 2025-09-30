# Somma di una Successione Geometrica e Analisi dell'Errore

## Calcolo della Somma dei Primi n Termini

Una successione geometrica è una successione di numeri in cui ogni termine, dopo il primo, si ottiene moltiplicando il precedente per una costante fissa detta **ragione**, denotata con $q$.
Dato un primo termine $a$ e una ragione $q$, la successione è: $a, aq, aq^2, \dots, aq^{n-1}, \dots$

La somma dei primi $n$ termini, indicata con $S_n$, è:
$$
S_n = a + aq + aq^2 + \dots + aq^{n-1} = \sum_{k=0}^{n-1} a q^k
$$

### Dimostrazione Classica

Questa dimostrazione si basa su un'elegante manipolazione algebrica. Assumiamo $q \neq 1$ (se $q=1$, la somma è banalmente $S_n = n \cdot a$).

1.  Scriviamo la somma per esteso:
    $$
    S_n = a + aq + aq^2 + \dots + aq^{n-1} \quad (1)
    $$
2.  Moltiplichiamo entrambi i membri per la ragione $q$:
    $$
    qS_n = aq + aq^2 + aq^3 + \dots + aq^n \quad (2)
    $$
3.  Sottraiamo l'equazione (2) dalla (1):
    $$
    S_n - qS_n = (a + aq + \dots + aq^{n-1}) - (aq + aq^2 + \dots + aq^n)
    $$
    Molti termini si elidono a vicenda (effetto "telescopico"):
    $$
    S_n - qS_n = a - aq^n
    $$
4.  Raccogliamo $S_n$ al primo membro e $a$ al secondo:
    $$
    S_n(1-q) = a(1-q^n)
    $$
5.  Dividendo per $(1-q)$, otteniamo la formula finale:
    $$
    S_n = a \frac{1-q^n}{1-q}
    $$

### Dimostrazione per Induzione

Dimostriamo che la formula $P(n): S_n = a \frac{1-q^n}{1-q}$ è valida per ogni intero $n \ge 1$.

**Passo Base ($n=1$)**:
Verifichiamo se la formula è vera per $n=1$.
La somma del primo termine è $S_1 = a$.
Secondo la formula:
$$
S_1 = a \frac{1-q^1}{1-q} = a
$$
Il passo base è verificato.

**Passo Induttivo**:
Assumiamo che la formula $P(k)$ sia vera per un generico intero $k \ge 1$ (ipotesi induttiva):
$$
S_k = \sum_{i=0}^{k-1} a q^i = a \frac{1-q^k}{1-q}
$$
Vogliamo dimostrare che, data questa assunzione, la formula è vera anche per $k+1$, ovvero $P(k+1)$:
$$
S_{k+1} = a \frac{1-q^{k+1}}{1-q}
$$
Partiamo dalla definizione di $S_{k+1}$:
$$
S_{k+1} = \sum_{i=0}^{k} a q^i = \left( \sum_{i=0}^{k-1} a q^i \right) + aq^k = S_k + aq^k
$$
Sostituiamo l'ipotesi induttiva per $S_k$:
$$
S_{k+1} = \left( a \frac{1-q^k}{1-q} \right) + aq^k
$$
Mettiamo a denominatore comune $(1-q)$:
$$
S_{k+1} = \frac{a(1-q^k) + aq^k(1-q)}{1-q} = \frac{a - aq^k + aq^k - aq^{k+1}}{1-q}
$$
Semplificando i termini $aq^k$:
$$
S_{k+1} = \frac{a - aq^{k+1}}{1-q} = a \frac{1-q^{k+1}}{1-q}
$$
Abbiamo così dimostrato la tesi $P(k+1)$.
Per il principio di induzione, la formula è valida per ogni $n \ge 1$.

## Errore di Troncamento in una Somma Geometrica Infinita

Quando la ragione $|q|<1$, la somma infinita della progressione geometrica converge a un valore finito $S$:
$$
S = \sum_{k=0}^{\infty} a q^k = \frac{a}{1-q}
$$
Se calcoliamo la somma solo fino al termine $(n-1)$-esimo, otteniamo la somma parziale $S_n$, che è un'approssimazione di $S$.

### Definizione e Calcolo dell'Errore

L'**errore di troncamento** $E_n$ è la differenza assoluta tra il valore esatto della somma infinita $S$ e il valore approssimato dalla somma parziale $S_n$. Rappresenta la "coda" della serie che abbiamo trascurato.
$$
E_n = |S - S_n|
$$
Possiamo quantificare questo errore in modo preciso:
$$
E_n = \left| \frac{a}{1-q} - a \frac{1-q^n}{1-q} \right| = \left| \frac{a - a(1-q^n)}{1-q} \right| = \left| \frac{a - a + aq^n}{1-q} \right|
$$
Otteniamo quindi la formula per l'errore:
$$
E_n = \left| \frac{aq^n}{1-q} \right| = |a| \frac{|q|^n}{1-q}
$$
L'errore $E_n$ è esattamente la somma di tutti i termini che sono stati esclusi, dal termine $n$-esimo (l'$(n+1)$-esimo termine della successione) in poi.

### Esempio: Approssimazione di 1/3

Vogliamo rappresentare il numero $1/3$ come una somma geometrica. In base decimale, $1/3 = 0.333\dots$. Possiamo scriverlo come:
$$
\frac{1}{3} = 0.3 + 0.03 + 0.003 + \dots = \frac{3}{10} + \frac{3}{100} + \frac{3}{1000} + \dots = \sum_{k=1}^{\infty} \frac{3}{10^k}
$$
Questa è una progressione geometrica con:
-   Primo termine: $a = 3/10$
-   Ragione: $q = 1/10$

Il valore esatto della somma infinita è, come previsto:
$$
S = \frac{a}{1-q} = \frac{3/10}{1-1/10} = \frac{3/10}{9/10} = \frac{3}{9} = \frac{1}{3}
$$

Supponiamo di **troncare** la somma al quarto termine ($n=4$) per approssimare $1/3$:
$$
S_4 = \frac{3}{10} + \frac{3}{100} + \frac{3}{1000} + \frac{3}{10000} = 0.3333
$$
Questa è la nostra approssimazione di $1/3$ "al quarto decimale".

**Quantifichiamo l'errore** commesso. L'errore di troncamento è:
$$
E_4 = |S - S_4| = \left| \frac{1}{3} - 0.3333 \right| = \left| \frac{1}{3} - \frac{3333}{10000} \right| = \left| \frac{10000 - 9999}{30000} \right| = \frac{1}{30000}
$$
L'errore è circa $0.0000333\dots$

Possiamo calcolare lo stesso valore usando la formula dell'errore. Nota: la nostra serie parte da $k=1$, quindi il termine $n$-esimo è $aq^{n-1}$. La formula dell'errore diventa quindi $|a|\frac{|q|^n}{1-q}$ (rappresenta la somma dal termine $n+1$ in poi).
Per $n=4$, l'errore è la somma dei termini dal quinto in poi.
$$
E_4 = |a| \frac{|q|^4}{1-q} = \frac{3}{10} \cdot \frac{(1/10)^4}{1-1/10} = \frac{3}{10} \cdot \frac{1/10000}{9/10} = \frac{3}{100000} \cdot \frac{10}{9} = \frac{3}{90000} = \frac{1}{30000}
$$
Il risultato coincide. L'errore quantifica esattamente il valore della "coda" della serie che abbiamo ignorato, che inizia con il termine $3/10^5 = 0.00003$.