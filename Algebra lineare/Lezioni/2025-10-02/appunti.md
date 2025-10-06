# Unicità della Combinazione Lineare di una Base

## Proposizione

Sia $V$ uno spazio vettoriale su un campo $\mathbb{K}$ e sia $\mathcal{B} = \{v_1, v_2, \dots, v_n\}$ una base di $V$. Allora ogni vettore $v \in V$ si può scrivere in **modo unico** come combinazione lineare dei vettori della base $\mathcal{B}$.

$$ \forall v \in V, \exists! (\lambda_1, \lambda_2, \dots, \lambda_n) \in \mathbb{K}^n \text{ tale che } v = \sum_{i=1}^{n} \lambda_i v_i $$

I coefficienti $(\lambda_1, \lambda_2, \dots, \lambda_n)$ sono chiamati **coordinate** (o componenti) del vettore $v$ rispetto alla base $\mathcal{B}$.

---

## Dimostrazione

La dimostrazione si articola in due parti:
1.  **Esistenza**: Si dimostra che per ogni vettore $v \in V$ esiste *almeno una* combinazione lineare dei vettori della base che lo rappresenta.
2.  **Unicità**: Si dimostra che tale combinazione lineare è *unica*.

### 1. Esistenza della Combinazione Lineare

Per definizione, una base di uno spazio vettoriale $V$ è un insieme di generatori di $V$.

Sia $\mathcal{B} = \{v_1, v_2, \dots, v_n\}$ una base di $V$.
Poiché $\mathcal{B}$ è un insieme di generatori per $V$, lo spazio da essi generato, denotato come $\text{Span}(\mathcal{B})$, coincide con l'intero spazio $V$.

$$ \text{Span}(v_1, v_2, \dots, v_n) = V $$

Per definizione di $\text{Span}$, ogni vettore $v \in V$ può essere scritto come combinazione lineare dei vettori $v_1, v_2, \dots, v_n$.
Cioè, per ogni $v \in V$, esistono degli scalari $\lambda_1, \lambda_2, \dots, \lambda_n \in \mathbb{K}$ tali che:

$$ v = \lambda_1 v_1 + \lambda_2 v_2 + \dots + \lambda_n v_n = \sum_{i=1}^{n} \lambda_i v_i $$

Questo dimostra la parte di esistenza della proposizione.

### 2. Unicità della Combinazione Lineare

Ora dobbiamo dimostrare che i coefficienti $\lambda_1, \dots, \lambda_n$ sono unici.
Procediamo per assurdo.

Supponiamo che esistano due diverse $n$-uple di scalari che rappresentano lo stesso vettore $v$. Siano esse:
- $(\lambda_1, \lambda_2, \dots, \lambda_n)$
- $(\mu_1, \mu_2, \dots, \mu_n)$

Tali che:

$$ v = \lambda_1 v_1 + \lambda_2 v_2 + \dots + \lambda_n v_n \quad (1) $$
e
$$ v = \mu_1 v_1 + \mu_2 v_2 + \dots + \mu_n v_n \quad (2) $$

Poiché entrambe le espressioni sono uguali a $v$, possiamo uguagliarle tra loro:

$$ \lambda_1 v_1 + \lambda_2 v_2 + \dots + \lambda_n v_n = \mu_1 v_1 + \mu_2 v_2 + \dots + \mu_n v_n $$

Portiamo tutti i termini al primo membro e raccogliamo i vettori $v_i$:

$$ (\lambda_1 - \mu_1) v_1 + (\lambda_2 - \mu_2) v_2 + \dots + (\lambda_n - \mu_n) v_n = \mathbf{0} $$

dove $\mathbf{0}$ è il vettore nullo di $V$.

Per definizione, una base $\mathcal{B} = \{v_1, v_2, \dots, v_n\}$ non è solo un insieme di generatori, ma è anche un insieme di vettori **linearmente indipendenti**.
La definizione di lineare indipendenza implica che l'unica combinazione lineare dei vettori $v_1, \dots, v_n$ che dà come risultato il vettore nullo è la combinazione con tutti i coefficienti nulli.

Pertanto, deve essere che:

$$ \lambda_1 - \mu_1 = 0 $$
$$ \lambda_2 - \mu_2 = 0 $$
$$ \vdots $$
$$ \lambda_n - \mu_n = 0 $$

Questo implica che per ogni $i \in \{1, \dots, n\}$:

$$ \lambda_i = \mu_i $$

Ciò contraddice la nostra ipotesi iniziale che le due $n$-uple di scalari fossero diverse. Di conseguenza, la rappresentazione di $v$ come combinazione lineare dei vettori della base è unica.

# Basi Canoniche, Dimensione e Lemma Fondamentale

## Notazione per le Basi Standard (o Canoniche)

In molti spazi vettoriali di uso comune, esiste una base particolarmente semplice e intuitiva, chiamata **base canonica** (o standard). I suoi vettori sono tipicamente indicati con la lettera $e$ e un pedice.

-   **In $\mathbb{R}^2$**: La base canonica è $\mathcal{E}_2 = \{e_1, e_2\}$, dove:
    $$ e_1 = \begin{pmatrix} 1 \\ 0 \end{pmatrix}, \quad e_2 = \begin{pmatrix} 0 \\ 1 \end{pmatrix} $$

-   **In $\mathbb{R}^3$**: La base canonica è $\mathcal{E}_3 = \{e_1, e_2, e_3\}$, dove:
    $$ e_1 = \begin{pmatrix} 1 \\ 0 \\ 0 \end{pmatrix}, \quad e_2 = \begin{pmatrix} 0 \\ 1 \\ 0 \end{pmatrix}, \quad e_3 = \begin{pmatrix} 0 \\ 0 \\ 1 \end{pmatrix} $$

-   **In $\mathbb{R}^n$**: In generale, la base canonica è $\mathcal{E}_n = \{e_1, e_2, \dots, e_n\}$, dove il vettore $e_i$ è un vettore colonna con $n$ componenti, tutte nulle tranne la $i$-esima, che è uguale a 1.

-   **Nello spazio dei polinomi $\mathbb{R}_n[x]$** (polinomi di grado al più $n$): La base canonica è $\{1, x, x^2, \dots, x^n\}$.

## Definizione Formale di Dimensione

Sia $V$ uno spazio vettoriale su un campo $\mathbb{K}$.

1.  Se $V$ ammette una base costituita da un numero finito $n$ di vettori, allora si dice che $V$ è uno **spazio vettoriale di dimensione finita**. Tutte le basi di $V$ hanno lo stesso numero di vettori. Questo numero, $n$, è chiamato **dimensione** di $V$ e si scrive:
    $$ \dim(V) = n $$

2.  Se $V$ non ammette una base finita, si dice che ha **dimensione infinita**.

3.  Per convenzione, lo spazio vettoriale banale, contenente solo il vettore nullo $\{ \mathbf{0} \}$, ha dimensione 0.

La dimensione rappresenta il numero minimo di vettori necessari per generare l'intero spazio e, contemporaneamente, il numero massimo di vettori linearmente indipendenti che si possono trovare in esso.

---

## Lemma Fondamentale sulla Sostituzione

**Enunciato del Lemma:**
Sia $V$ uno spazio vettoriale. Siano $\mathcal{G} = \{v_1, v_2, \dots, v_n\}$ un insieme di $n$ generatori di $V$ e $\mathcal{L} = \{w_1, w_2, \dots, w_n\}$ un insieme di $n$ vettori linearmente indipendenti in $V$.
Allora, anche l'insieme $\mathcal{L}$ è un insieme di generatori per $V$ (e quindi è una base).

### Dimostrazione Formale

La dimostrazione si basa su un procedimento iterativo di sostituzione. Mostreremo che è possibile sostituire uno a uno i vettori di $\mathcal{G}$ con i vettori di $\mathcal{L}$ mantenendo la proprietà di essere un insieme di generatori.

**Passo 1: Sostituzione di $v_1$ con $w_1$**

-   Poiché $\mathcal{G} = \{v_1, \dots, v_n\}$ genera $V$, il vettore $w_1 \in V$ può essere scritto come loro combinazione lineare:
    $$ w_1 = \alpha_1 v_1 + \alpha_2 v_2 + \dots + \alpha_n v_n $$
-   Poiché i vettori $w_i$ sono linearmente indipendenti, nessuno di essi può essere il vettore nullo. Quindi $w_1 \neq \mathbf{0}$.
-   Ciò implica che almeno uno dei coefficienti $\alpha_i$ deve essere non nullo. A meno di riordinare i vettori $v_i$, possiamo supporre senza perdita di generalità che $\alpha_1 \neq 0$.
-   Possiamo quindi esplicitare $v_1$ dalla combinazione lineare:
    $$ v_1 = \frac{1}{\alpha_1}w_1 - \frac{\alpha_2}{\alpha_1}v_2 - \dots - \frac{\alpha_n}{\alpha_1}v_n $$
-   Questo significa che $v_1$ è una combinazione lineare dei vettori dell'insieme $\mathcal{G}_1 = \{w_1, v_2, \dots, v_n\}$.
-   Di conseguenza, ogni vettore di $V$, che era generato da $\mathcal{G}$, può ora essere generato da $\mathcal{G}_1$. Infatti, in una qualsiasi combinazione lineare, possiamo sostituire $v_1$ con la sua espressione in termini di $\mathcal{G}_1$.
-   Quindi, $\text{Span}(w_1, v_2, \dots, v_n) = V$. L'insieme $\mathcal{G}_1$ è un nuovo sistema di generatori.

**Passo k-esimo (per induzione)**

-   Supponiamo di aver già sostituito $k-1$ vettori, ottenendo un nuovo insieme di generatori:
    $$ \mathcal{G}_{k-1} = \{w_1, \dots, w_{k-1}, v_k, \dots, v_n\} $$
-   Consideriamo ora il vettore $w_k$. Poiché $\mathcal{G}_{k-1}$ genera $V$, possiamo scrivere $w_k$ come loro combinazione lineare:
    $$ w_k = \beta_1 w_1 + \dots + \beta_{k-1} w_{k-1} + \gamma_k v_k + \dots + \gamma_n v_n $$
-   Riorganizziamo l'equazione:
    $$ \gamma_k v_k + \dots + \gamma_n v_n = w_k - (\beta_1 w_1 + \dots + \beta_{k-1} w_{k-1}) $$
-   Almeno uno dei coefficienti $\gamma_k, \dots, \gamma_n$ deve essere diverso da zero. Se fossero tutti nulli, avremmo:
    $$ w_k = \beta_1 w_1 + \dots + \beta_{k-1} w_{k-1} $$
    Ma questo significherebbe che $w_k$ è linearmente dipendente da $w_1, \dots, w_{k-1}$, il che contraddice l'ipotesi che l'insieme $\mathcal{L}$ sia linearmente indipendente.
-   Quindi, almeno un $\gamma_j \neq 0$ per $j \in \{k, \dots, n\}$. A meno di riordinare i restanti $v_j$, possiamo supporre che $\gamma_k \neq 0$.
-   Possiamo allora esplicitare $v_k$:
    $$ v_k = \frac{1}{\gamma_k}(w_k - \beta_1 w_1 - \dots - \beta_{k-1} w_{k-1} - \gamma_{k+1} v_{k+1} - \dots - \gamma_n v_n) $$
-   Come nel primo passo, questo dimostra che $v_k$ dipende dall'insieme $\mathcal{G}_k = \{w_1, \dots, w_k, v_{k+1}, \dots, v_n\}$.
-   Pertanto, anche $\mathcal{G}_k$ è un insieme di generatori per $V$.

**Passo Finale (Passo n)**

-   Dopo $n$ passi, avremo sostituito tutti i vettori $v_i$ con i vettori $w_i$, ottenendo l'insieme:
    $$ \mathcal{G}_n = \{w_1, w_2, \dots, w_n\} $$
-   Per il procedimento induttivo, questo insieme è ancora un insieme di generatori per $V$.

**Conclusione**

L'insieme $\mathcal{L} = \{w_1, \dots, w_n\}$ è:
1.  Linearmente indipendente (per ipotesi).
2.  Un insieme di generatori per $V$ (per dimostrazione).

Un insieme con queste due proprietà è, per definizione, una **base** per lo spazio vettoriale $V$.
# Teorema della Dimensione (Invarianza del Numero di Elementi di una Base)

## Enunciato del Teorema

Se uno spazio vettoriale $V$ ammette una base con un numero finito $n$ di elementi, allora ogni altra base di $V$ è anch'essa composta da $n$ elementi.

## Dimostrazione per Assurdo

Sia $V$ uno spazio vettoriale. Supponiamo, per assurdo, che esistano due basi di $V$ con un numero diverso di elementi.
Siano esse:
- $\mathcal{B}_v = \{v_1, v_2, \dots, v_n\}$ una base di $V$ con $n$ vettori.
- $\mathcal{B}_w = \{w_1, w_2, \dots, w_m\}$ un'altra base di $V$ con $m$ vettori.

Supponiamo, senza perdita di generalità, che $m > n$.

### Applicazione del Lemma Precedente

1.  Dalle ipotesi, sappiamo che:
    - L'insieme $\mathcal{G} = \{v_1, v_2, \dots, v_n\}$ è un **insieme di generatori** per $V$, poiché $\mathcal{B}_v$ è una base.
    - L'insieme $\{w_1, w_2, \dots, w_m\}$ è **linearmente indipendente**, poiché $\mathcal{B}_w$ è una base. Di conseguenza, anche qualsiasi suo sottoinsieme è linearmente indipendente. In particolare, l'insieme $\mathcal{L} = \{w_1, w_2, \dots, w_n\}$ (contenente i primi $n$ vettori di $\mathcal{B}_w$) è linearmente indipendente.

2.  Ora siamo nelle condizioni di applicare il lemma dimostrato in precedenza, con:
    - $\mathcal{G} = \{v_1, \dots, v_n\}$ come insieme di $n$ generatori.
    - $\mathcal{L} = \{w_1, \dots, w_n\}$ come insieme di $n$ vettori linearmente indipendenti.

3.  Il lemma ci permette di concludere che l'insieme $\mathcal{L} = \{w_1, w_2, \dots, w_n\}$ è anch'esso un **insieme di generatori** per $V$.
    Avendo dimostrato che $\mathcal{L}$ è sia un insieme di generatori che linearmente indipendente, abbiamo che $\mathcal{L}$ è una **base** di $V$.

### Raggiungimento della Contraddizione

1.  Poiché abbiamo assunto $m > n$, esiste almeno un altro vettore nella base $\mathcal{B}_w$ che non abbiamo ancora considerato. Prendiamo il vettore successivo, $w_{n+1}$.

2.  Il vettore $w_{n+1}$ appartiene allo spazio vettoriale $V$. Poiché abbiamo appena dimostrato che $\mathcal{L} = \{w_1, w_2, \dots, w_n\}$ è una base (e quindi un sistema di generatori) per $V$, il vettore $w_{n+1}$ deve potersi scrivere come combinazione lineare dei vettori di $\mathcal{L}$:
    $$ w_{n+1} = \alpha_1 w_1 + \alpha_2 w_2 + \dots + \alpha_n w_n $$
    per opportuni scalari $\alpha_1, \alpha_2, \dots, \alpha_n$.

3.  Ora, riordiniamo questa equazione portando tutti i termini da un lato:
    $$ \alpha_1 w_1 + \alpha_2 w_2 + \dots + \alpha_n w_n - 1 \cdot w_{n+1} = \mathbf{0} $$

4.  Questa è una combinazione lineare dei vettori $\{w_1, w_2, \dots, w_n, w_{n+1}\}$ che ha come risultato il vettore nullo.
    Notiamo che questa combinazione lineare **non è banale**, perché il coefficiente del vettore $w_{n+1}$ è $-1$, che è diverso da zero.

5.  Per definizione, se esiste una combinazione lineare non banale di un insieme di vettori che dà il vettore nullo, allora quell'insieme di vettori è **linearmente dipendente**.
    Quindi, l'insieme $\{w_1, w_2, \dots, w_{n+1}\}$ è linearmente dipendente.

6.  Questo porta a un **assurdo**. L'insieme $\{w_1, w_2, \dots, w_{n+1}\}$ è un sottoinsieme della base $\mathcal{B}_w = \{w_1, w_2, \dots, w_m\}$. Per definizione, tutti i vettori di una base devono essere linearmente indipendenti, e di conseguenza anche ogni sottoinsieme di una base deve essere linearmente indipendente. La nostra conclusione contraddice l'ipotesi iniziale che $\mathcal{B}_w$ sia una base.

### Conclusione

L'assurdo è derivato dalla nostra supposizione iniziale che $m > n$. Pertanto, tale supposizione deve essere falsa.
Non può essere $m > n$.

Se avessimo supposto $n > m$, avremmo potuto ripetere lo stesso identico ragionamento scambiando i ruoli di $\mathcal{B}_v$ e $\mathcal{B}_w$, arrivando a un assurdo analogo.
L'unica possibilità che non porta a una contraddizione è che $m = n$.

Questo dimostra che il numero di elementi di una qualsiasi base di uno spazio vettoriale a dimensione finita è un invariante, cioè è sempre lo stesso.

**Q.E.D.**