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

# Insiemi Limitati, Convergenza e Estremi

## Insiemi Limitati, Maggioranti e Minoranti

### Intervallo e Insieme Limitato
Un insieme (o un intervallo) $A \subseteq \mathbb{R}$ si dice **limitato** se è sia limitato superiormente sia limitato inferiormente.

Simbologicamente, un intervallo è limitato se i suoi estremi sono entrambi finiti (es. $(a,b)$, $[a,b]$). Un insieme è limitato se può essere "racchiuso" in un intervallo di ampiezza finita.

Formalmente, un insieme $A$ è **limitato** se esiste un numero reale positivo $M > 0$ tale che per ogni elemento $x \in A$, il suo valore assoluto è minore o uguale a $M$.
$$
\exists M \in \mathbb{R}, M>0 \quad \text{tale che} \quad \forall x \in A \implies |x| \le M
$$
Questa condizione è equivalente a $-M \le x \le M$, che mostra come l'insieme sia "contenuto" nell'intervallo $[-M, M]$.

### Maggiorante e Minorante
Sia $A \subseteq \mathbb{R}$ un insieme non vuoto.
* Un numero reale $K$ si definisce **maggiorante** (o *upper bound*) di $A$ se ogni elemento di $A$ è minore o uguale a $K$.
    $$
    K \text{ è un maggiorante di } A \iff \forall x \in A, x \le K
    $$
    Se un insieme ammette un maggiorante, si dice **limitato superiormente**.

* Un numero reale $k$ si definisce **minorante** (o *lower bound*) di $A$ se ogni elemento di $A$ è maggiore o uguale a $k$.
    $$
    k \text{ è un minorante di } A \iff \forall x \in A, x \ge k
    $$
    Se un insieme ammette un minorante, si dice **limitato inferiormente**.

Un insieme è **limitato** se e solo se è sia limitato superiormente sia inferiormente.

---

## Convergenza e Limitatezza di una Successione

Il legame tra il fatto che una successione sia limitata e che ammetta limite è descritto da un teorema fondamentale. L'implicazione vale in una sola direzione.

### Teorema: Ogni successione convergente è limitata

**Ipotesi**:
Sia $(a_n)_{n \in \mathbb{N}}$ una successione di numeri reali convergente a un limite finito $L$.
$$ \lim_{n \to \infty} a_n = L \in \mathbb{R} $$
**Tesi**:
La successione $(a_n)$ è limitata.
$$ \exists M > 0 \quad \text{tale che} \quad |a_n| \le M \quad \forall n \in \mathbb{N} $$
**Dimostrazione**:
1.  Dalla definizione di limite, fissiamo un valore arbitrario per $\epsilon$, ad esempio $\epsilon=1$. In corrispondenza di questo $\epsilon$, esiste un indice $N \in \mathbb{N}$ tale che per ogni $n > N$ si ha:
    $$ |a_n - L| < 1 $$
2.  Utilizzando la disuguaglianza triangolare ($|a| = |(a-b)+b| \le |a-b| + |b|$), possiamo scrivere:
    $$ |a_n| = |(a_n - L) + L| \le |a_n - L| + |L| $$
3.  Combinando i due punti precedenti, per ogni $n > N$ otteniamo:
    $$ |a_n| < 1 + |L| $$
    Questo dimostra che la "coda" della successione (cioè tutti i termini dall'indice $N+1$ in poi) è limitata.
4.  Consideriamo ora i primi termini della successione, ovvero l'insieme finito $F = \{|a_0|, |a_1|, \dots, |a_N|\}$. Un insieme finito di numeri reali ammette sempre un massimo. Sia $K = \max(F)$.
5.  A questo punto, possiamo definire un maggiorante per i valori assoluti di *tutti* i termini della successione. Sia $M$ il valore più grande tra $K$ e $1+|L|$:
    $$ M = \max(K, 1+|L|) $$
6.  Per qualsiasi $n \in \mathbb{N}$, abbiamo due possibilità:
    * Se $n \le N$, allora $|a_n| \le K \le M$.
    * Se $n > N$, allora $|a_n| < 1+|L| \le M$.
7.  In entrambi i casi, $|a_n| \le M$ per ogni $n \in \mathbb{N}$. Abbiamo quindi trovato un $M$ che soddisfa la definizione di successione limitata.

*Nota: Il viceversa non è vero*. Una successione limitata non è necessariamente convergente. Un classico controesempio è la successione $a_n = (-1)^n = \{-1, 1, -1, 1, \dots\}$, che è limitata (i suoi valori sono compresi in $[-1,1]$) ma non ammette limite.

---

## Estremo Superiore ed Estremo Inferiore

### Definizione Formale di Estremo Superiore (sup)
Sia $A \subseteq \mathbb{R}$ un insieme non vuoto e limitato superiormente. L'**estremo superiore** (o **supremum**) di $A$, denotato con $\sup(A)$, è il **più piccolo dei maggioranti** di $A$.

Formalmente, un numero reale $S = \sup(A)$ deve soddisfare due proprietà:
1.  $S$ è un maggiorante di $A$:
    $$ \forall x \in A, \quad x \le S $$
2.  Qualsiasi numero più piccolo di $S$ non è un maggiorante. Questo si formalizza dicendo che per ogni $\epsilon > 0$, è possibile trovare un elemento in $A$ che è "vicino" a $S$ (cioè si trova nell'intervallo $(S-\epsilon, S]$).
    $$ \forall \epsilon > 0, \quad \exists x \in A \quad \text{tale che} \quad x > S - \epsilon $$

### Definizione Formale di Estremo Inferiore (inf)
Sia $A \subseteq \mathbb{R}$ un insieme non vuoto e limitato inferiormente. L'**estremo inferiore** (o **infimum**) di $A$, denotato con $\inf(A)$, è il **più grande dei minoranti** di $A$.

Formalmente, un numero reale $s = \inf(A)$ deve soddisfare due proprietà:
1.  $s$ è un minorante di $A$:
    $$ \forall x \in A, \quad x \ge s $$
2.  Qualsiasi numero più grande di $s$ non è un minorante.
    $$ \forall \epsilon > 0, \quad \exists x \in A \quad \text{tale che} \quad x < s + \epsilon $$

### Relazione con Massimo e Minimo
* **Massimo**: Un numero $M$ è il **massimo** di $A$ se è un maggiorante di $A$ e **appartiene ad A** ($M \in A$).
* **Minimo**: Un numero $m$ è il **minimo** di $A$ se è un minorante di $A$ e **appartiene ad A** ($m \in A$).

La relazione è la seguente:
* Se un insieme $A$ ammette un massimo, allora il suo estremo superiore coincide con il massimo: $\max(A) = \sup(A)$.
* Se un insieme $A$ ammette un minimo, allora il suo estremo inferiore coincide con il minimo: $\min(A) = \inf(A)$.

La differenza cruciale è che `sup` e `inf` esistono sempre per insiemi limitati (grazie all'assioma di completezza di $\mathbb{R}$), mentre `max` e `min` potrebbero non esistere.

#### Esempi
1.  **Insieme con massimo e minimo**: Sia $A = [2, 5]$.
    * L'insieme dei maggioranti è $[5, +\infty)$. Il più piccolo è $5$. Poiché $5 \in A$, si ha $\max(A) = 5$ e $\sup(A)=5$.
    * L'insieme dei minoranti è $(-\infty, 2]$. Il più grande è $2$. Poiché $2 \in A$, si ha $\min(A) = 2$ e $\inf(A)=2$.

2.  **Insieme senza massimo ma con minimo**: Sia $B = [2, 5)$.
    * L'insieme dei maggioranti è ancora $[5, +\infty)$, e il più piccolo è $5$. Quindi $\sup(B)=5$. Tuttavia, $5 \notin B$, quindi l'insieme $B$ **non ha un massimo**. Per qualsiasi $\epsilon>0$, possiamo trovare un elemento in B (es. $5-\epsilon/2$) che è più grande di $5-\epsilon$, soddisfacendo la seconda proprietà del sup.
    * L'estremo inferiore e il minimo coincidono con $2$, poiché $2 \in B$.
