# Limiti di Successioni: Teoremi Fondamentali

## Definizione Formale di Limite e Proprietà Definitiva

### Definizione Formale di Limite
Sia $(a_n)_{n \in \mathbb{N}}$ una successione di numeri reali. Si dice che la successione $(a_n)$ **converge** al limite $L \in \mathbb{R}$, e si scrive
$$
\lim_{n \to \infty} a_n = L
$$
se, per ogni numero reale $\epsilon > 0$ (arbitrariamente piccolo), esiste un numero naturale $N$ (dipendente da $\epsilon$) tale che, per ogni indice $n > N$, la distanza tra $a_n$ e $L$ è minore di $\epsilon$.

Formalmente:
$$
\forall \epsilon > 0 \quad \exists N \in \mathbb{N} \quad \text{tale che} \quad \forall n > N \implies |a_n - L| < \epsilon
$$
Questo significa che, fissato un qualunque intorno $(L-\epsilon, L+\epsilon)$ del punto $L$, tutti i termini della successione, da un certo punto in poi, cadono all'interno di quell'intorno.

### Proprietà Vere "Definitivamente"
Una proprietà $P(n)$ relativa ai termini di una successione $(a_n)$ si dice **vera definitivamente** se esiste un indice $N \in \mathbb{N}$ tale che $P(n)$ è vera per ogni $n > N$.

La definizione di limite si può quindi riformulare utilizzando questo concetto:
$$
\lim_{n \to \infty} a_n = L \quad \iff \quad \forall \epsilon > 0, \text{ la proprietà } |a_n - L| < \epsilon \text{ è vera definitivamente.}
$$

---

## Algebra dei Limiti

I teoremi sull'algebra dei limiti stabiliscono come calcolare il limite di successioni ottenute tramite operazioni aritmetiche su successioni convergenti.

### 1. Limite della Somma
Il limite della somma di due successioni convergenti è la somma dei loro limiti.

**Ipotesi**:
Siano $(a_n)$ e $(b_n)$ due successioni tali che:
$$
\lim_{n \to \infty} a_n = L \in \mathbb{R} \quad \text{e} \quad \lim_{n \to \infty} b_n = M \in \mathbb{R}
$$
**Tesi**:
$$
\lim_{n \to \infty} (a_n + b_n) = L + M
$$
**Dimostrazione**:
Dobbiamo dimostrare che $\forall \epsilon > 0$, esiste $N$ tale che $\forall n>N$, $|(a_n+b_n) - (L+M)| < \epsilon$.
Fissiamo un $\epsilon > 0$. Per la disuguaglianza triangolare:
$$
|(a_n+b_n) - (L+M)| = |(a_n - L) + (b_n - M)| \le |a_n - L| + |b_n - M|
$$
Poiché $a_n \to L$, in corrispondenza di $\epsilon/2 > 0$ esiste un $N_a$ tale che $\forall n > N_a$, $|a_n - L| < \epsilon/2$.
Analogamente, poiché $b_n \to M$, in corrispondenza di $\epsilon/2 > 0$ esiste un $N_b$ tale che $\forall n > N_b$, $|b_n - M| < \epsilon/2$.
Scegliamo $N = \max(N_a, N_b)$. Per ogni $n>N$, entrambe le condizioni sono verificate, quindi:
$$
|a_n - L| + |b_n - M| < \frac{\epsilon}{2} + \frac{\epsilon}{2} = \epsilon
$$
Per la proprietà transitiva, concludiamo che $\forall n>N$, $|(a_n+b_n) - (L+M)| < \epsilon$.

### 2. Limite del Prodotto
Il limite del prodotto di due successioni convergenti è il prodotto dei loro limiti.

**Ipotesi**:
$$
\lim_{n \to \infty} a_n = L \in \mathbb{R} \quad \text{e} \quad \lim_{n \to \infty} b_n = M \in \mathbb{R}
$$
**Tesi**:
$$
\lim_{n \to \infty} (a_n \cdot b_n) = L \cdot M
$$
**Dimostrazione**:
Vogliamo maggiorare la quantità $|a_n b_n - LM|$. Usiamo un artificio algebrico (aggiungendo e togliendo $a_n M$):
$$
|a_n b_n - LM| = |a_n b_n - a_n M + a_n M - LM| = |a_n(b_n - M) + M(a_n - L)| \le |a_n||b_n - M| + |M||a_n - L|
$$
Poiché la successione $(a_n)$ è convergente, essa è limitata. Esiste quindi una costante $K>0$ tale che $|a_n| \le K$ per ogni $n$.
Fissato $\epsilon > 0$:
- Esiste $N_a$ t.c. $\forall n>N_a$, $|a_n - L| < \frac{\epsilon}{2(|M|+1)}$.
- Esiste $N_b$ t.c. $\forall n>N_b$, $|b_n - M| < \frac{\epsilon}{2K}$.
Scegliendo $N = \max(N_a, N_b)$, per $n>N$ si ha:
$$
|a_n||b_n - M| + |M||a_n - L| < K \cdot \frac{\epsilon}{2K} + |M| \cdot \frac{\epsilon}{2(|M|+1)} < \frac{\epsilon}{2} + \frac{\epsilon}{2} = \epsilon
$$
(Si usa $|M|+1$ per evitare problemi se $M=0$). La tesi è dimostrata.

### Nota sulla non invertibilità
L'implicazione dei teoremi precedenti non è, in generale, invertibile. Ad esempio, se $\lim_{n \to \infty}(a_n+b_n)$ esiste, non è detto che esistano i limiti di $(a_n)$ e $(b_n)$.
**Controesempio**: Siano $a_n = (-1)^n$ e $b_n = -(-1)^n = (-1)^{n+1}$.
Entrambe le successioni $(a_n)$ e $(b_n)$ sono indeterminate e non ammettono limite.
Tuttavia, la loro somma è la successione $(c_n)$ con $c_n = a_n + b_n = (-1)^n + (-1)^{n+1} = 0$ per ogni $n$.
Quindi, $\lim_{n \to \infty} (a_n+b_n) = 0$, ma i limiti delle singole successioni non esistono.

---

## Teorema della Permanenza del Segno

Se una successione converge a un limite non nullo, allora i termini della successione hanno definitivamente lo stesso segno del limite.

**Enunciato**: Sia $(a_n)$ una successione tale che $\lim_{n \to \infty} a_n = L$, con $L \neq 0$.
1.  Se $L>0$, allora esiste $N$ tale che $\forall n>N$ si ha $a_n > 0$.
2.  Se $L<0$, allora esiste $N$ tale che $\forall n>N$ si ha $a_n < 0$.

**Dimostrazione (caso $L>0$)**:
**Ipotesi**: $\lim_{n \to \infty} a_n = L > 0$.
**Tesi**: $\exists N : \forall n>N, a_n > 0$.
Dalla definizione di limite, possiamo scegliere un qualunque $\epsilon > 0$. Scegliamo un $\epsilon$ "strategico", ad esempio $\epsilon = L/2$. Poiché $L>0$, anche $L/2 > 0$.
In corrispondenza di questo $\epsilon$, esiste un $N$ tale che $\forall n>N$:
$$|a_n - L| < \frac{L}{2}$$
Questa disuguaglianza equivale a:
$$-\frac{L}{2} < a_n - L < \frac{L}{2}$$
Sommando $L$ a tutti i membri, otteniamo:
$$L - \frac{L}{2} < a_n < L + \frac{L}{2} \implies \frac{L}{2} < a_n < \frac{3L}{2}$$
In particolare, per ogni $n>N$ si ha $a_n > L/2$. Poiché $L>0$, anche $L/2 > 0$, e quindi $a_n > 0$.
La dimostrazione per il caso $L<0$ è analoga, scegliendo $\epsilon = -L/2$.

**Nota**: Il teorema garantisce la permanenza del segno solo *definitivamente*. Ad esempio, la successione $a_n = 2 - \frac{5}{n}$ converge a $L=2>0$. Tuttavia, i suoi primi due termini sono negativi ($a_1=-3$, $a_2=-0.5$). La proprietà $a_n>0$ è vera solo per $n>2$, cioè definitivamente.

---

## Teorema del Confronto (o dei Carabinieri)

Se una successione è "stretta" tra altre due successioni che convergono allo stesso limite, allora anche essa converge a quel limite.

**Enunciato**: Siano $(a_n)$, $(b_n)$, $(c_n)$ tre successioni tali che:
1.  $a_n \le b_n \le c_n$ (vera definitivamente).
2.  $\lim_{n \to \infty} a_n = L$ e $\lim_{n \to \infty} c_n = L$.

Allora, anche la successione $(b_n)$ converge a $L$:
$$
\lim_{n \to \infty} b_n = L
$$

**Dimostrazione**:
**Ipotesi**: $a_n \le b_n \le c_n$ definitivamente, e $a_n \to L, c_n \to L$.
**Tesi**: $b_n \to L$.
Fissiamo un $\epsilon > 0$. Dalla definizione di limite:
- Esiste $N_a$ t.c. $\forall n>N_a$, $L-\epsilon < a_n < L+\epsilon$.
- Esiste $N_c$ t.c. $\forall n>N_c$, $L-\epsilon < c_n < L+\epsilon$.
- Esiste $N_{conf}$ t.c. $\forall n>N_{conf}$, $a_n \le b_n \le c_n$.
Scegliamo $N = \max(N_a, N_c, N_{conf})$. Per ogni $n>N$, tutte e tre le condizioni sono vere. In particolare:
$$
L - \epsilon < a_n \le b_n \le c_n < L + \epsilon
$$
Questo implica che per ogni $n>N$:
$$
L - \epsilon < b_n < L + \epsilon \quad \iff \quad |b_n - L| < \epsilon
$$
che è la definizione di $\lim_{n \to \infty} b_n = L$.

**Esempio di applicazione**: Calcolare $\lim_{n \to \infty} \frac{\sin(n)}{n}$.
Non possiamo applicare il limite del quoziente perché $\lim_{n \to \infty} \sin(n)$ non esiste.
Tuttavia, sappiamo che la funzione seno è limitata tra -1 e 1:
$$ -1 \le \sin(n) \le 1 \quad \forall n \in \mathbb{N}$$
Per $n \ge 1$, possiamo dividere tutti i membri per $n$ (che è positivo), mantenendo il verso delle disuguaglianze:
$$ -\frac{1}{n} \le \frac{\sin(n)}{n} \le \frac{1}{n} $$
Abbiamo così "stretto" la nostra successione $b_n = \frac{\sin(n)}{n}$ tra due successioni:
- $a_n = -1/n$
- $c_n = 1/n$
Sappiamo che i limiti delle due successioni "carabinieri" sono:
$$ \lim_{n \to \infty} -\frac{1}{n} = 0 \quad \text{e} \quad \lim_{n \to \infty} \frac{1}{n} = 0 $$
Poiché le ipotesi del Teorema del Confronto sono verificate, concludiamo che:
$$ \lim_{n \to \infty} \frac{\sin(n)}{n} = 0 $$