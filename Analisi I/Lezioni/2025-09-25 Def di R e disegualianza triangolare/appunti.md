# Funzioni, Immagine e Composizione

## Immagine e Dominio dell'Inversa

Data undimostrazione N a Z biiettiva soluzione.excalidrawa funzione $f: A \to B$, l' **immagine** di $f$, denotata con $Im(f)$, è il sottoinsieme di $B$ contenente tutti gli elementi che sono "raggiunti" da $f$. Formalmente:
$$Im(f) = \{y \in B \mid \exists x \in A : f(x) = y\}$$

Una funzione $f$ è invertibile se e solo se è **biiettiva**. Quando $f$ è invertibile, la sua funzione inversa $f^{-1}$ ha come dominio il codominio di $f$ e come codominio il dominio di $f$.

## Composizione di Funzioni

Il simbolo di **composizione** è $\circ$. Date due funzioni $f: A \to B$ e $g: C \to D$, la composizione $g \circ f$ (si legge "g composto f") è definita solo se l'immagine di $f$ è contenuta nel dominio di $g$, ovvero $Im(f) \subseteq C$.

La funzione composta $g \circ f$ associa ad ogni elemento del dominio di $f$ un elemento del codominio di $g$:
$$(g \circ f)(x) = g(f(x))$$

**Caratteristiche della composizione:**

* **Non è commutativa**: In generale, $f \circ g \neq g \circ f$.
* **È associativa**: Date tre funzioni $f, g, h$, si ha che $(h \circ g) \circ f = h \circ (g \circ f)$

# Le Successioni

Una **successione** è una funzione che ha come dominio l'insieme dei numeri naturali $\mathbb{N}$ (o un suo sottoinsieme infinito) e come codominio un qualsiasi insieme $A$.
$$f: \mathbb{N} \to A$$

In altre parole, una successione è un elenco ordinato e infinito di elementi. Invece di usare la notazione funzionale standard $f(n)$, si preferisce indicare l'elemento n-esimo della successione con un pedice:
$$a_n$$
Una generica successione si può quindi scrivere come $\{a_n\}_{n \in \mathbb{N}}$ o più semplicemente $(a_n)$, ad esempio:
* $(x_n) = x_0, x_1, x_2, \dots$
* $(a_n) = a_1, a_2, a_3, \dots$
# I Numeri Reali $\mathbb{R}$

I numeri reali $\mathbb{R}$ sono un'estensione dei numeri razionali $\mathbb{Q}$. Essi includono tutti i numeri razionali (interi, frazioni) e i numeri **irrazionali** (quei numeri che non possono essere espressi come frazione, come $\sqrt{2}$ o $\pi$).

Formalmente, un numero reale può essere definito come una **sezione all interno di $\mathbb{Q}$**, oppure, più comunemente, come il limite di una successione di numeri razionali.

La rappresentazione più comune di un numero reale è quella **decimale**:

$$
\mathbb{R} =
\left\{ \, n + \sum_{i=1}^{\infty} d_i \, 10^{-i}
\;\middle|\; n \in \mathbb{Z},\; d_i \in \{0,1,\dots,9\} \,\right\}.
$$

Se lo sviluppo è infinito e non periodico, il numero è irrazionale.
Inoltre esiste la convenzione :
$$
1 \;=\; 1.000\ldots \;=\; 0.999\ldots
$$
## Lemma, Proposizione, Teorema

Nella matematica, i risultati vengono presentati con una gerarchia precisa per strutturare la conoscenza in modo logico e comprensibile.

* **Proposizione**: Un'affermazione che viene dimostrata essere vera.

* **Teorema**: Un risultato molto importante, una proposizione di grande rilievo nella teoria.

* **Lemma**: È un "risultato preliminare". Si tratta di una proposizione che viene dimostrata non tanto per la sua importanza intrinseca, quanto perché è un passo fondamentale per la dimostrazione di un teorema più significativo. Un lemma è un "teorema di servizio".

* **Corollario**: Una conseguenza diretta di un teorema o di una proposizione, che richiede una dimostrazione minima o nulla a partire dal risultato principale.

* **Tesi**: L'affermazione che si intende dimostrare all'interno di una dimostrazione.

L'importanza del lemma risiede nella sua capacità di semplificare dimostrazioni complesse, spezzandole in passaggi più piccoli e gestibili.
# Dimostrazione Formale che $\mathbb{Q} \subset \mathbb{R}$

Per dimostrare formalmente che l'insieme dei numeri razionali $\mathbb{Q}$ è un sottoinsieme proprio dei numeri reali $\mathbb{R}$, dobbiamo dimostrare due cose:
1.  Ogni numero razionale è anche un numero reale $\mathbb{Q} \subseteq \mathbb{R}$
2.  Esiste almeno un numero reale che non è un numero razionale ($\mathbb{Q} \neq \mathbb{R}$).

1 ) $\mathbb{Q} \subseteq \mathbb{R}$

Sia $q$ un generico numero razionale. Per definizione di $\mathbb{Q}$ :
$$q = \frac{m}{n} \quad m \in \mathbb{Z} \quad n \in \mathbb{N}$$
La divisione tra $m$ e $n$ produce uno sviluppo decimale che è o finito o periodico. Poiché l'insieme dei numeri reali $\mathbb{R}$ è definito come l'insieme di tutti i numeri con uno sviluppo decimale (finito, periodico o non periodico), ne consegue che ogni numero con uno sviluppo decimale finito o periodico è, per definizione, un numero reale.
Pertanto, ogni elemento di $\mathbb{Q}$ è anche un elemento di $\mathbb{R}$.
$$\forall q \in \mathbb{Q} \implies q \in \mathbb{R}$$
Questo dimostra che $\mathbb{Q} \subseteq \mathbb{R}$.

2 ) $\mathbb{Q} \neq \mathbb{R}$

Per dimostrare che l'inclusione è propria, è sufficiente mostrare l'esistenza di almeno un elemento in $\mathbb{R}$ che non appartiene a $\mathbb{Q}$. Consideriamo il numero $\sqrt{2}$.

**Tesi** 

$\sqrt{2} \notin \mathbb{Q}$.

*Dimostrazione per assurdo:*
Supponiamo, per assurdo, che $\sqrt{2}$ sia razionale. Allora, per definizione, esistono due interi $a, b$ con $b \neq 0$, primi tra loro (cioè la frazione $\frac{a}{b}$ è ridotta ai minimi termini), tali che:
$$\sqrt{2} = \frac{a}{b}$$Elevando entrambi i membri al quadrato otteniamo:$$2 = \frac{a^2}{b^2} \implies a^2 = 2b^2$$
Questo significa che $a^2$ è un numero pari. Se il quadrato di un numero è pari, allora anche il numero stesso deve essere pari. Quindi, $a$ è pari. Possiamo quindi scrivere $a = 2k$ per un qualche intero $k$.

Sostituiamo $a=2k$ nell'equazione $a^2 = 2b^2$:
$$(2k)^2 = 2b^2 \implies 4k^2 = 2b^2 \implies 2k^2 = b^2$$
Questa nuova equazione ci dice che anche $b^2$ è un numero pari, e quindi anche $b$ deve essere pari.

Siamo giunti a una contraddizione: abbiamo assunto che $a$ e $b$ fossero primi tra loro, ma abbiamo dimostrato che sono entrambi pari (e quindi entrambi divisibili per 2). L'assunzione iniziale che $\sqrt{2}$ sia razionale deve essere falsa.

Quindi, $\sqrt{2}$ è un numero reale ma non è un numero razionale. Questo dimostra che esiste almeno un elemento di $\mathbb{R}$ che non è in $\mathbb{Q}$.

**Conclusione**

Avendo dimostrato che $\mathbb{Q} \subseteq \mathbb{R}$ e che $\mathbb{Q} \neq \mathbb{R}$, possiamo concludere formalmente che $\mathbb{Q}$ è un sottoinsieme proprio di $\mathbb{R}$.
$$\mathbb{Q} \subset \mathbb{R}$$
# Periodicità delle Rappresentazioni Decimali in $\mathbb{Q}$

Un numero reale $x$ ha uno sviluppo decimale periodico se, dopo un certo numero di cifre decimali, esiste una sequenza di cifre che si ripete all'infinito.
Formalmente, un numero $x \in \mathbb{R}$ ha una rappresentazione decimale periodica se può essere scritto nella forma:
$$x = n, d_1 d_2 \dots d_k \overline{p_1 p_2 \dots p_m}$$
dove:
* $n$ è la parte intera.
* $d_1 d_2 \dots d_k$ è l' **antiperiodo** (di lunghezza $k \ge 0$).
* $\overline{p_1 p_2 \dots p_m}$ è il **periodo** (di lunghezza $m \ge 1$).

Un numero con sviluppo decimale **finito** può essere visto come un caso particolare di sviluppo periodico, dove la cifra che si ripete è 0. Ad esempio, $0,5 = 0,5\overline{0}$.

### Dimostrazione dell'Esistenza della Periodicità in $\mathbb{Q}$

Dimostriamo ora il seguente teorema:

**Teorema** 
*Ogni numero razionale $q \in \mathbb{Q}$ ammette una rappresentazione decimale finita o periodica.*

**Dimostrazione**
Sia $q$ un numero razionale. Per definizione, esistono due interi $m \in \mathbb{Z}$ e $n \in \mathbb{N}$ con $n \neq 0$, tali che $q = \frac{m}{n}$

La rappresentazione decimale di $q$ si ottiene tramite l'algoritmo della **divisione euclidea** (divisione con resto) di $m$ per $n$.

1.  **Prima Divisione**
    Dividiamo $m$ per $n$:
$$m = n \cdot c_0 + r_0$$
    dove $c_0$ è il quoziente (la parte intera del nostro numero) e $r_0$ è il primo resto, con $0 \le r_0 < n$.
    Se $r_0 = 0$, la divisione è terminata. Il numero ha uno sviluppo decimale finito

2.  **Divisioni Successive**
    Se $r_0 \neq 0$, per trovare la prima cifra decimale moltiplichiamo il resto per 10 e dividiamo di nuovo per $n$:
$$10 \cdot r_0 = n \cdot c_1 + r_1$$
    dove $c_1$ è la prima cifra decimale e $r_1$ è il secondo resto, con $0 \le r_1 < n$.

    Procediamo iterativamente. Per trovare la k-esima cifra decimale $c_k$, calcoliamo:
    $$10 \cdot r_{k-1} = n \cdot c_k + r_k$$
    dove $r_k$ è il $(k+1)-esimo$ res    In ogni passo della divisione, il resto $r_k$ deve essere un intero compreso nell'insieme $\{0, 1, 2, \dots, n-1\}$. Questo insieme contiene $n$ possibili valori.to, e vale sempre la condizione $0 \le r_k < n$.

3.  **Analisi dei Resti e il Principio dei Cassetti (Pigeonhole Principle)**
$$\forall r_k \quad r_k \in \mathbb{N}_1 \quad \mathbb{N}_1=\{0, 1, 2, \dots, n-1\} \quad |\mathbb{N}| = n$$

    * **Caso A: Troviamo un resto nullo**
        Se ad un certo passo $k$ otteniamo $r_k = 0$, l'algoritmo termina. Tutte le divisioni successive produrranno quozienti e resti nulli. Questo corrisponde a uno sviluppo decimale finito (o di periodo $\overline{0}$)

    * **Caso B: Non troviamo mai un resto nullo.**
        Se l'algoritmo non termina, continuiamo a generare una successione di resti $\{r_0, r_1, r_2, \dots\}$. Poiché ogni resto $r_k$ deve appartenere all'insieme $\{1, 2, \dots, n-1\}$ (escludiamo lo 0 perché stiamo assumendo che la divisione non termini), ci sono al massimo $n-1$ possibili valori per i resti.

        Per il **principio dei cassetti**, dopo al massimo $n$ passi della divisione (considerando da $r_0$ a $r_{n-1}$), siamo costretti a trovare un resto che abbiamo già incontrato in precedenza.
        Cioè, esisteranno due indici $j$ e $k$ con $j < k \le n$ tali che:
        $$r_j = r_k$$
        
        Appena un resto si ripete, anche la sequenza di quozienti (le cifre decimali) e di resti successivi inizierà a ripetersi. Infatti, se $r_j = r_k$, allora:
        $$10 \cdot r_j = n \cdot c_{j+1} + r_{j+1}$$
        $$10 \cdot r_k = n \cdot c_{k+1} + r_{k+1}$$
        Poiché i termini a sinistra sono uguali, anche i quozienti e i resti devono essere uguali, ovvero $c_{j+1} = c_{k+1}$ e $r_{j+1} = r_{k+1}$. Questo ciclo si ripeterà indefinitamente.

        La sequenza di cifre decimali $c_{j+1} c_{j+2} \dots c_k$ costituirà il **periodo** della rappresentazione decimale.

**Conclusione:**

L'algoritmo della divisione euclidea applicato a una frazione $\frac{m}{n}$ genera una sequenza di resti che, avendo un numero finito di possibili valori (da $0$ a $n-1$), deve necessariamente o raggiungere lo zero (generando uno sviluppo finito) o ripetere un valore già visto (generando uno sviluppo periodico). Questo dimostra che ogni numero razionale ha una rappresentazione decimale periodica o finita.
## Ordinamento e Operazioni in $\mathbb{R}$

Dopo aver definito i numeri reali $\mathbb{R}$ come limiti di successioni di Cauchy di numeri razionali, dobbiamo definire un **ordinamento** e le **operazioni** di somma e prodotto in modo coerente.

### Ordinamento Formale dei Numeri Reali

Siano $a$ e $b$ due numeri reali, definiti come i limiti di due successioni di Cauchy (che convergono) di numeri razionali, $\{a_n\}_{n \in \mathbb{N}}$ e $\{b_n\}_{n \in \mathbb{N}}$ rispettivamente.
$$a = \lim_{n \to \infty} a_n \quad \text{e} \quad b = \lim_{n \to \infty} b_n$$

L'ordinamento tra $a$ e $b$ si definisce analizzando il comportamento delle loro successioni.

**Definizione di Minore o Uguale ($a \le b$)**

Diciamo che $a \le b$ se e solo se, per ogni numero razionale positivo $\varepsilon > 0$, esiste un indice $N \in \mathbb{N}$ tale che per ogni $n > N$ si ha:
$$a_n < b_n + \varepsilon$$
Intuitivamente, questo significa che la successione $\{a_n\}$ si trova "definitivamente" al di sotto della successione $\{b_n\}$, a meno di una piccola tolleranza $\varepsilon$.

Una definizione equivalente e più diretta è la seguente:
$$a \le b \iff \forall \varepsilon > 0, \exists N \in \mathbb{N} \text{ tale che } \forall n > N, a_n \le b_n + \varepsilon$$

**Definizione di Minore Stretto ($a < b$)**

Diciamo che $a < b$ se esiste un numero razionale positivo $\varepsilon > 0$ ed esiste un indice $N \in \mathbb{N}$ tali che per ogni $n > N$ si ha:
$$a_n \le b_n - \varepsilon$$
Questo significa che la successione $\{a_n\}$ è definitivamente separata e minore della successione $\{b_n\}$ da un margine $\varepsilon$.

**Ordinamento con Numeri Negativi**

L'ordinamento funziona allo stesso modo a prescindere dal segno dei numeri. Le definizioni sopra sono generali. Ad esempio, per confrontare $a = -2$ e $b = -5$:
* Sia $a_n \to -2$ (es. $a_n = -2$ per ogni $n$)
* Sia $b_n \to -5$ (es. $b_n = -5$ per ogni $n$)

Scegliamo $\varepsilon = 1$. Vediamo che $b_n = -5 \le a_n - \varepsilon = -2 - 1 = -3$. Questo è vero per ogni $n$. Quindi, per la definizione di minore stretto, concludiamo che $b < a$, ovvero $-5 < -2$, come ci aspettiamo.

### Operazioni Formali in $\mathbb{R}$

Le operazioni di addizione e moltiplicazione tra numeri reali sono definite attraverso le operazioni corrispondenti sulle successioni di Cauchy che li generano.

Siano $a = \lim_{n \to \infty} a_n$ e $b = \lim_{n \to \infty} b_n$.

**Definizione di Addizione (+)**

La somma $a+b$ è definita come il limite della successione somma, i cui termini sono la somma termine a termine delle successioni $\{a_n\}$ e $\{b_n\}$.
$$a + b := \lim_{n \to \infty} (a_n + b_n)$$
Si può dimostrare che se $\{a_n\}$ e $\{b_n\}$ sono successioni di Cauchy, anche la successione $\{a_n + b_n\}$ è una successione di Cauchy, garantendo così che il risultato sia un numero reale ben definito.

*Nota sulla formula `sign(a)a_n`: La formula standard non utilizza la funzione segno. La definizione $a = \lim a_n$ presuppone già che la successione $\{a_n\}$ converga al numero reale $a$, catturandone implicitamente il segno. Ad esempio, se $a = -3$, la successione $\{a_n\}$ convergerà a $-3$ (es. $a_n = -3 + 1/n$), e non c'è bisogno di "forzarne" il segno.*

**Definizione di Moltiplicazione ($\cdot$)**

Analogamente, il prodotto $a \cdot b$ è definito come il limite della successione prodotto.
$$a \cdot b := \lim_{n \to \infty} (a_n \cdot b_n)$$
Anche in questo caso, si può dimostrare che il prodotto di due successioni di Cauchy è una successione di Cauchy, e quindi il suo limite è un numero reale ben definito.

### Caso Studio $1 - 0,\overline{9} = 0$

Questo famoso risultato può essere compreso formalmente usando proprio il concetto di successioni.
Il numero $0,\overline{9}$ non è altro che una notazione per il limite di una specifica successione di numeri razionali:
$$0,\overline{9} := \lim_{n \to \infty} s_n$$
dove la successione $\{s_n\}$ è definita da:
* $s_1 = 0,9$
* $s_2 = 0,99$
* $s_3 = 0,999$
* ...
* $s_n = \sum_{k=1}^{n} \frac{9}{10^k}$

Questa è una serie geometrica. Possiamo calcolarne il limite:
$$s_n = \frac{9}{10} \sum_{k=0}^{n-1} \left(\frac{1}{10}\right)^k = \frac{9}{10} \cdot \frac{1 - (1/10)^n}{1 - 1/10} = \frac{9}{10} \cdot \frac{1 - (1/10)^n}{9/10} = 1 - \left(\frac{1}{10}\right)^n$$
Ora calcoliamo il limite per $n \to \infty$:
$$0,\overline{9} = \lim_{n \to \infty} s_n = \lim_{n \to \infty} \left(1 - \left(\frac{1}{10}\right)^n\right)$$
Poiché $\lim_{n \to \infty} (1/10)^n = 0$, otteniamo:
$$0,\overline{9} = 1 - 0 = 1$$
Il numero reale rappresentato dalla notazione $0,\overline{9}$ è **esattamente** il numero 1.

Quindi, l'operazione $1 - 0,\overline{9}$ è formalmente:
$$1 - 1 = 0$$

Questo non è un'approssimazione: $0,\overline{9}$ e $1$ sono due rappresentazioni diverse dello stesso numero reale, così come $\frac{1}{2}$ e $0,5$ sono due rappresentazioni diverse dello stesso numero razionale.