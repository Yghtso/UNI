# Prodotto Cartesiano e Coppie Ordinate

## La Coppia Ordinata

In matematica, una **coppia ordinata** è un insieme di due oggetti in cui conta l'ordine. Se abbiamo due elementi, $a$ e $b$, la coppia ordinata si indica con $(a, b)$.

La caratteristica fondamentale che definisce una coppia ordinata è la seguente:
$$(a, b) = (c, d) \iff a = c \text{ e } b = d$$

Questo significa che due coppie ordinate sono uguali se e solo se sono uguali sia il primo che il secondo elemento, rispettivamente. Ad esempio, la coppia $(2, 3)$ è diversa dalla coppia $(3, 2)$.

Formalmente, una delle definizioni più comuni di coppia ordinata è in termini di insiemi:
$$(a, b) := \{\{a\}, \{a, b\}\}$$
Questa definizione cattura l'essenza dell'ordine, poiché l'elemento $a$ è l'unico elemento presente in entrambi gli insiemi.

Quest' ultima importante perché introduce il concetto di ordinamento senza introdurre la coppia ma appoggiandosi sulla teoria degli insiemi esempio :

$$
(2,5) = \big\{ \{2\}, \{2,5\} \big\}
\quad \neq \quad 
(5,2) = \big\{ \{5\}, \{5,2\} \big\}
$$
 

## Il Prodotto Cartesiano (A x B)

Dati due insiemi non vuoti, $A$ e $B$, si definisce **prodotto cartesiano** di $A$ e $B$, e si indica con $A \times B$, l'insieme di tutte le possibili coppie ordinate $(a, b)$ dove il primo elemento $a$ appartiene ad $A$ e il secondo elemento $b$ appartiene a $B$.

Formalmente, la definizione è:
$$A \times B = \{ (a, b) \mid a \in A \text{ e } b \in B \}$$

**Esempio:**
Dati gli insiemi $A = \{1, 2\}$ e $B = \{x, y, z\}$, il loro prodotto cartesiano è:
$$A \times B = \{ (1, x), (1, y), (1, z), (2, x), (2, y), (2, z) \}$$
# Il Grafico di una Funzione come Sottoinsieme del Prodotto Cartesiano

Data una funzione $f: A \to B$, dove $A$ è il **dominio** e $B$ è il **codominio**, il **grafico** della funzione $f$, indicato con $G(f)$, è un sottoinsieme del prodotto cartesiano $A \times B$.

## Definizione Formale

Il grafico $G(f)$ è definito come l'insieme di tutte le coppie ordinate $(x, y)$ del prodotto cartesiano $A \times B$ tali che $y$ è l'immagine di $x$ tramite la funzione $f$.

Formalmente:
$$G(f) = \{ (x, y) \in A \times B \mid y = f(x) \}$$

### Caratteristiche dei Punti del Grafico

Un punto, ovvero una coppia ordinata $(x, y)$, appartiene al grafico di una funzione $f$ se e solo se soddisfa due condizioni fondamentali:

1.  **Appartenenza al Prodotto Cartesiano**: La coppia $(x, y)$ deve essere un elemento del prodotto cartesiano tra il dominio e il codominio della funzione ($x \in A$ e $y \in B$).
2.  **Condizione di Unicità (o Esistenza e Unicità)**: Per ogni elemento $x$ nel dominio $A$, esiste **uno e un solo** elemento $y$ nel codominio $B$ tale che la coppia $(x, y)$ appartenga al grafico $G(f)$.

Questa seconda condizione è cruciale e discende direttamente dalla definizione di funzione: ad ogni elemento del dominio deve corrispondere un unico valore nel codominio.

### Forma dei Punti del Piano Cartesiano

Se consideriamo una funzione reale di variabile reale, $f: \mathbb{R} \to \mathbb{R}$, il suo grafico è un sottoinsieme del piano cartesiano $\mathbb{R} \times \mathbb{R}$.

Una coppia ordinata $(x_0, y_0)$ appartiene al grafico di $f$ se e solo se:
$$y_0 = f(x_0)$$

Questo significa che i punti del grafico sono tutti e soli i punti del piano le cui coordinate soddisfano l'equazione della funzione.

# Il Piano Cartesiano come Prodotto Cartesiano $\mathbb{R} \times \mathbb{R}$

Il piano cartesiano, che usiamo comunemente per rappresentare grafici di funzioni, è la visualizzazione geometrica del prodotto cartesiano $\mathbb{R} \times \mathbb{R}$ (spesso indicato anche come $\mathbb{R}^2$).

**Definizione:**
$$\mathbb{R} \times \mathbb{R} = \mathbb{R}^2 = \{ (x, y) \mid x \in \mathbb{R} \text{ e } y \in \mathbb{R} \}$$

Ogni punto del piano è una coppia ordinata di numeri reali, dove il primo numero ($x$) è l'**ascissa** e il secondo ($y$) è l'**ordinata**.

### Altre Definizioni e Notazioni di Prodotto Cartesiano

1.  **Potenza Cartesiana**: Quando si esegue il prodotto cartesiano di un insieme con se stesso più volte, si parla di potenza cartesiana.
    * $\mathbb{R}^2 = \mathbb{R} \times \mathbb{R}$ (il piano)
    * $\mathbb{R}^3 = \mathbb{R} \times \mathbb{R} \times \mathbb{R}$ (lo spazio tridimensionale)
    * $\mathbb{R}^n = \{ (x_1, x_2, \dots, x_n) \mid x_i \in \mathbb{R} \text{ per ogni } i=1, \dots, n \}$ (lo spazio euclideo n-dimensionale)

2.  **Prodotto Cartesiano tra Insiemi Diversi**:
    * **Cilindro**: Se prendiamo una circonferenza $C$ e un intervallo $I \subset \mathbb{R}$, il prodotto cartesiano $C \times I$ rappresenta la superficie di un cilindro.

# Differenze tra Funzioni e Luoghi Geometrici

Sebbene entrambi possano essere rappresentati nel piano cartesiano, una funzione e un luogo geometrico sono concetti distinti.

Un **luogo geometrico** è un insieme di punti del piano che soddisfano una certa proprietà o equazione.
Una **funzione** (reale di variabile reale) è una regola che associa ad ogni numero reale del dominio **uno e un solo** numero reale del codominio.

| Caratteristica | Funzione ($y = f(x)$) | Luogo Geometrico ($F(x, y) = 0$) |
| :--- | :--- | :--- |
| **Relazione** | È una relazione **univoca** da $x$ a $y$. Per ogni $x$ del dominio c'è un solo $y$. | È una relazione tra le coordinate $x$ e $y$. Può essere **non univoca**. |
| **Test della Retta Verticale** | Qualsiasi retta verticale del tipo $x = k$ (con $k$ nel dominio) interseca il grafico **al massimo in un punto**. | Una retta verticale $x = k$ può intersecare il grafico in **più di un punto**. |
| **Esempi** | $y = x^2$ (parabola) | $x^2 + y^2 = 1$ (circonferenza) |
| **Rappresentazione** | Esplicita: $y$ è isolata. | Implicita: $F(x, y) = 0$. |

**Esempio Chiarificatore: La Circonferenza**
L'equazione $x^2 + y^2 = 9$ descrive un luogo geometrico (una circonferenza di raggio 3 centrata nell'origine).
Questa **non è una funzione** $y=f(x)$ perché, ad esempio, per $x=0$ abbiamo $y^2 = 9$, che dà due soluzioni: $y = 3$ e $y = -3$.
La retta verticale $x=0$ (l'asse y) interseca il grafico in due punti: $(0, 3)$ e $(0, -3)$.

## Cosa Succede se si Assegnano Due Valori a un Singolo Elemento del Dominio?

Se a un singolo elemento del dominio, diciamo $x_0$, vengono associati due (o più) valori del codominio, $y_1$ e $y_2$ con $y_1 \neq y_2$, la relazione descritta **non è una funzione**.

Questo viola la condizione fondamentale di unicità del grafico di una funzione.
$$ (x_0, y_1) \in G \quad \text{e} \quad (x_0, y_2) \in G \implies \text{G non è il grafico di una funzione} $$

Dal punto di vista grafico, questo significa che la retta verticale passante per $x_0$ interseca il grafico in più di un punto. La relazione descritta è semplicemente una **corrispondenza** o **relazione** tra insiemi, ma non una funzione.

# La Funzione Inversa: Definizione e Proprietà

Data una funzione $f: A \to B$, la sua **funzione inversa**, se esiste, è una funzione $f^{-1}: B \to A$ che "annulla" l'effetto di $f$. In pratica, se $f$ manda un elemento $x$ in $y$, la funzione inversa $f^{-1}$ riporta $y$ in $x$.

## Definizione Formale

Sia $f: A \to B$ una funzione **biunivoca (biiettiva o bigettiva)**, ovvero sia iniettiva che suriettiva. Si definisce **funzione inversa** di $f$ la funzione $f^{-1}: B \to A$ tale che:
$$f^{-1}(y) = x \iff f(x) = y$$
per ogni $x \in A$ e $y \in B$.

Questo implica due relazioni fondamentali tra una funzione e la sua inversa, note come **proprietà di composizione**:

1.  La composizione di $f^{-1}$ con $f$ dà la funzione identità sul dominio $A$:
    $$(f^{-1} \circ f)(x) = f^{-1}(f(x)) = x, \quad \forall x \in A$$
2.  La composizione di $f$ con $f^{-1}$ dà la funzione identità sul codominio $B$:
    $$(f \circ f^{-1})(y) = f(f^{-1}(y)) = y, \quad \forall y \in B$$

### Relazioni con la Funzione Originaria

* **Dominio e Codominio**: Il dominio della funzione inversa è il codominio della funzione originale, e viceversa.
    * Dominio di $f^{-1}$ = Codominio di $f$
    * Codominio di $f^{-1}$ = Dominio di $f$

* **Grafico**: Il grafico della funzione inversa, $G(f^{-1})$, è l'insieme delle coppie ordinate $(y, x)$ tali per cui $(x, y)$ appartiene al grafico di $f$.
    $$G(f^{-1}) = \{ (y, x) \in B \times A \mid (x, y) \in G(f) \}$$
    Nel piano cartesiano ($\mathbb{R}^2$), il grafico di $y = f^{-1}(x)$ è **simmetrico** al grafico di $y = f(x)$ rispetto alla bisettrice del primo e terzo quadrante, cioè la retta di equazione $y=x$.

# Condizioni di Invertibilità di una Funzione

Una funzione ammette un'inversa se e solo se è **biiettiva (o biunivoca)**. Una funzione $f: A \to B$ è biiettiva se possiede entrambe le seguenti proprietà:

1.  **Iniettività (Funzione uno-a-uno)**: Elementi distinti del dominio hanno immagini distinte nel codominio.
    * Formalmente: $\forall x_1, x_2 \in A, \quad x_1 \neq x_2 \implies f(x_1) \neq f(x_2)$.
    * Graficamente (Test della Retta Orizzontale): Ogni retta orizzontale $y=k$ interseca il grafico della funzione al massimo in un punto.

2.  **Suriettività (Funzione "su")**: Ogni elemento del codominio $B$ è immagine di almeno un elemento del dominio $A$.
    * Formalmente: $\forall y \in B, \exists x \in A \text{ tale che } f(x) = y$.

**Perché la biiettività è necessaria?**
* L'**iniettività** garantisce che l'inversa sia una *funzione*: senza di essa, un elemento $y$ del codominio di $f$ potrebbe provenire da più di un $x$, e $f^{-1}(y)$ non avrebbe un valore unico.
* La **suriettività** garantisce che l'inversa sia definita per *tutti* gli elementi del suo dominio (che è il codominio di $f$).

## Come si Ottiene Formalmente l'Inversa

Data una funzione biiettiva $y = f(x)$, per trovare l'espressione analitica della sua inversa $f^{-1}$ si segue questo procedimento:

1.  Si pone $y = f(x)$.
2.  Si **risolve l'equazione per $x$** in termini di $y$. Questo passaggio è possibile e produce una soluzione unica proprio grazie alla biiettività della funzione.
3.  Si ottiene un'espressione del tipo $x = g(y)$. Questa è la funzione inversa: $f^{-1}(y) = g(y)$.
4.  Per convenzione, si scambia la variabile $y$ con la $x$ per rappresentare la funzione inversa nella forma standard $y = f^{-1}(x)$.

## Come Rendere una Funzione Invertibile: La Restrizione del Dominio

Se una funzione non è iniettiva, non è invertibile su tutto il suo dominio. Tuttavia, è possibile renderla invertibile **restringendo il suo dominio** a un sottoinsieme in cui la funzione diventa iniettiva.
La **restrizione di una funzione** $f: A \to B$ a un sottoinsieme $D \subset A$ è una nuova funzione, indicata con $f|_{D}$, che ha per dominio $D$ e agisce come $f$ su quegli elementi.

### Notazione Formale della Restrizione

La restrizione di $f$ al dominio $D$ si indica come:
$$f|_{D}: D \to B$$
dove $f|_{D}(x) = f(x)$ per ogni $x \in D$.

L'obiettivo è scegliere un sottoinsieme $D$ del dominio originale tale che $f|_{D}$ sia iniettiva (e possibilmente anche suriettiva, o si restringe il codominio all'immagine $f(D)$), rendendola così invertibile.

# Analisi di $\sqrt{x^2} = |x|$

L'identità $\sqrt{x^2} = |x|$ deriva direttamente dalla definizione della funzione radice quadrata e dalla funzione quadrato.

Consideriamo la funzione $f(x) = x^2$. Questa funzione **non è iniettiva** sul suo dominio naturale $\mathbb{R}$. Ad esempio, $f(2) = 4$ e $f(-2) = 4$.

La funzione **radice quadrata**, indicata con $\sqrt{\cdot}$, è definita come l'inversa della restrizione della funzione quadrato all'intervallo $[0, +\infty)$.
Sia $g(x) = x^2$ con dominio ristretto $D = [0, +\infty)$. La funzione $g: [0, +\infty) \to [0, +\infty)$ è biiettiva, e la sua inversa è $g^{-1}(x) = \sqrt{x}$.

Per definizione, la radice quadrata di un numero non negativo $y$ è quel **numero non negativo** $z$ tale che $z^2 = y$.
$$\sqrt{y} = z \iff z^2 = y \text{ e } z \ge 0$$

Analizziamo ora $\sqrt{x^2}$:
* Se $x \ge 0$ (ad es. $x=3$), allora $x^2 = 9$. La radice quadrata di 9 è quel numero non negativo che al quadrato dà 9, ovvero $3$. Quindi $\sqrt{3^2} = 3$. In questo caso, $\sqrt{x^2} = x$.
* Se $x < 0$ (ad es. $x=-3$), allora $x^2 = 9$. La radice quadrata di 9 è sempre $3$. Quindi $\sqrt{(-3)^2} = 3$. In questo caso, $\sqrt{x^2} = -x$ (poiché $-(-3) = 3$).

Queste due condizioni sono esattamente la definizione di **valore assoluto**:
$$|x| = \begin{cases} x & \text{se } x \ge 0 \\ -x & \text{se } x < 0 \end{cases}$$

Pertanto, per ogni $x \in \mathbb{R}$, si ha che $\sqrt{x^2} = |x|$.

## Inversione della Funzione Seno: $\arcsin(x)$

La funzione $f(x) = \sin(x)$ è definita su tutto $\mathbb{R}$ ma è **periodica** e quindi **non iniettiva**. Ad esempio, $\sin(0) = 0$, $\sin(\pi) = 0$, $\sin(2\pi)=0$.

Per definire la sua funzione inversa, l'**arcoseno** ($\arcsin$), è necessario restringere il dominio di $\sin(x)$ a un intervallo in cui la funzione sia monotòna (e quindi iniettiva) e assuma tutti i valori del suo codominio (suriettività sull'immagine $[-1, 1]$).

Per **convenzione internazionale**, si sceglie l'intervallo:
$$D = \left[ -\frac{\pi}{2}, \frac{\pi}{2} \right]$$

In questo intervallo:
1.  La funzione seno è **strettamente crescente**.
2.  I suoi valori coprono l'intera immagine $[-1, 1]$.

La funzione ristretta $\sin|_{\left[ -\frac{\pi}{2}, \frac{\pi}{2} \right]}$ è quindi biiettiva se vista come:
$$\sin: \left[ -\frac{\pi}{2}, \frac{\pi}{2} \right] \to [-1, 1]$$
La sua funzione inversa è l'arcoseno:
$$\arcsin: [-1, 1] \to \left[ -\frac{\pi}{2}, \frac{\pi}{2} \right]$$

L'arcoseno di un valore $y \in [-1, 1]$ è definito come quell'**unico angolo** $\theta$ nell'intervallo $\left[ -\frac{\pi}{2}, \frac{\pi}{2} \right]$ tale che $\sin(\theta) = y$.
Ad esempio, $\arcsin(1) = \frac{\pi}{2}$ e non $\frac{5\pi}{2}$, anche se $\sin(\frac{5\pi}{2})=1$, perché $\frac{5\pi}{2}$ non appartiene all'intervallo di definizione convenzionale dell'arcoseno.

# L'Insieme dei Numeri Naturali $\mathbb{N}$

I numeri naturali sono il fondamento dell'aritmetica e del concetto di conteggio. L'insieme dei numeri naturali si indica con il simbolo $\mathbb{N}$.

Esistono due convenzioni comuni:
1.  $\mathbb{N} = \{1, 2, 3, \dots\}$ (numeri naturali senza lo zero)

## Definizione Formale

Formalmente, l'insieme $\mathbb{N}$ può essere definito come :
1.  Ogni numero naturale $n$ ha un **successore**, indicato con $S(n)$ (intuitivamente, $S(n) = n+1$).
2.  `1` non è il successore di alcun numero naturale.
3.  Numeri naturali diversi hanno successori diversi: se $n \neq m$, allora $S(n) \neq S(m)$.
4.  **Principio di Induzione**: Se una proprietà $P$ è vera per `0`, e se ogni volta che è vera per un numero naturale $n$ è vera anche per il suo successore $S(n)$, allora la proprietà $P$ è vera per tutti i numeri naturali.

## Operazioni e Proprietà in $\mathbb{N}$

Le operazioni di addizione e moltiplicazione sono definite in modo ricorsivo a partire dagli assiomi:

* **Addizione (+)**:
    * $n + 0 = n$
    * $n + S(m) = S(n + m)$ 
     $3+2 = 3+S(1) = S(3+1) = S(S(3+0)) = S(S(3)) = S(4) = 5$
* **Moltiplicazione (·)**:
    * $n \cdot 0 = 0$
    * $n \cdot S(m) = (n \cdot m) + n$

Queste operazioni godono delle seguenti **proprietà** (per ogni $a, b, c \in \mathbb{N}$):
* **Commutativa**: $a+b = b+a$; $a \cdot b = b \cdot a$
* **Associativa**: $(a+b)+c = a+(b+c)$; $(a \cdot b) \cdot c = a \cdot (b \cdot c)$
* **Distributiva** della moltiplicazione rispetto all'addizione: $a \cdot (b+c) = (a \cdot b) + (a \cdot c)$
* **Elemento Neutro**:
    * `0` è l'elemento neutro per l'addizione: $a+0 = a$
    * `1` è l'elemento neutro per la moltiplicazione: $a \cdot 1 = a$

## Cardinalità di un Insieme

La **cardinalità** di un insieme finito è semplicemente il numero di elementi che esso contiene. I numeri naturali sono lo strumento con cui "contiamo" e definiamo la cardinalità.

Formalmente, un insieme $A$ ha cardinalità $n \in \mathbb{N}$ se esiste una funzione biunivoca (una corrispondenza uno-a-uno) tra gli elementi di $A$ e l'insieme $\{0, 1, 2, \dots, n-1\}$ (o $\{1, 2, \dots, n\}$). Si scrive $|A| = n$ oppure $\#A = n$.

## Divisione con Resto (Divisione Euclidea)

L'insieme $\mathbb{N}$ non è chiuso rispetto alla divisione (es. $3 \div 2$ non è un numero naturale). Tuttavia, in $\mathbb{N}$ è sempre definita la **divisione con resto**.

**Teorema della Divisione Euclidea**: Dati due numeri naturali $a$ (dividendo) e $b$ (divisore), con $b \neq 0$, esistono e sono **unici** due numeri naturali $q$ (quoziente) e $r$ (resto) tali che:
$$a = b \cdot q + r \quad \text{con} \quad 0 \le r < b$$

* Se $r=0$, si dice che $a$ è divisibile per $b$ oppure formalmente che :
$$b \mid a \;\;\Longleftrightarrow\;\; \exists k \in \mathbb{Z} : a = b k$$


## Ordinamento dei Numeri Naturali

L'insieme $\mathbb{N}$ è un **insieme totalmente ordinato**. La relazione d'ordine "minore o uguale" ($\le$) è definita formalmente come:
$$ a \le b \iff \exists c \in \mathbb{N} \text{ tale che } a+c = b $$

Questa relazione ha le seguenti proprietà:
* **Riflessiva**: $a \le a \quad \forall \quad  a \in \mathbb{N}$.
* **Antisimmetrica**: Se $a \le b$ e $b \le a$, allora $a=b$.
* **Transitiva**: Se $a \le b$ e $b \le c$, allora $a \le c$.
* **Totale**: Per ogni coppia $a, b \in \mathbb{N}$, vale sempre $a \le b$ oppure $b \le a$.

Inoltre, $\mathbb{N}$ è un **insieme ben ordinato**: ogni suo sottoinsieme non vuoto ammette un elemento minimo.

# L'Insieme dei Numeri Interi $\mathbb{Z}$


L'insieme dei numeri interi, indicato con $\mathbb{Z}$, nasce dall'esigenza di dare soluzione a equazioni come $x + 5 = 2$, che non hanno soluzione in $\mathbb{N}$. Intuitivamente, $\mathbb{Z}$ estende $\mathbb{N}$ introducendo i numeri negativi.

$$\mathbb{Z} = \{\dots, -3, -2, -1, 0, 1, 2, 3, \dots\}$$
## Cardinalità di $\mathbb{N}$ e $\mathbb{Z}$: Infiniti a Confronto

Sebbene $\mathbb{N}$ sia un sottoinsieme proprio di $\mathbb{Z}$, i due insiemi hanno la **stessa cardinalità**. Entrambi sono **insiemi numerabili** (o **contabili**), cioè i loro elementi possono essere messi in corrispondenza biunivoca con i numeri naturali.
### Come Numerare gli Interi

È possibile "contare" tutti gli elementi di $\mathbb{Z}$ senza saltarne nessuno, creando una lista infinita. Una possibile numerazione (funzione biunivoca $f: \mathbb{N} \to \mathbb{Z}$) è la seguente:
$$ 0, 1, -1, 2, -2, 3, -3, \dots $$
Formalmente:
$$ f(n) = \begin{cases} n/2 & \text{se } n \text{ è pari} \\ -(n+1)/2 & \text{se } n \text{ è dispari} \end{cases} $$
Poiché esiste questa corrispondenza, si dice che $|\mathbb{N}| = |\mathbb{Z}|$. 
## Cosa Cambia da $\mathbb{N}$ a $\mathbb{Z}$

Il passaggio da $\mathbb{N}$ a $\mathbb{Z}$ introduce una fondamentale proprietà algebrica.

* In $\mathbb{N}$, l'operazione di sottrazione non è **interna** (non è sempre definita). L'equazione $a+x=b$ ha soluzione solo se $a \le b$.
* In $\mathbb{Z}$, ogni elemento $a$ ammette un **opposto** (o **inverso additivo**), indicato con $-a$, tale che $a + (-a) = 0$.

Questa proprietà rende $\mathbb{Z}$ un **anello** con le operazioni di addizione e moltiplicazione. In parole povere, in $\mathbb{Z}$ l'operazione di **sottrazione è sempre definita** e interna: $a-b$ è definita come $a + (-b)$.

# L'Insieme dei Numeri Razionali $\mathbb{Q}$

L'insieme dei numeri razionali, indicato con $\mathbb{Q}$, nasce dall'esigenza di rendere la divisione sempre possibile (tranne che per zero), risolvendo equazioni come $2x = 1$ che non hanno soluzione in $\mathbb{Z}$.

Un numero razionale è un numero che può essere espresso come il rapporto, o frazione, di due numeri interi, con il denominatore diverso da zero.

## Definizione Formale

Formalmente, i numeri razionali sono costruiti come **classi di equivalenza** di coppie ordinate di numeri interi.

1.  Si considera il prodotto cartesiano $\mathbb{Z} \times (\mathbb{Z} \setminus \{0\})$, ovvero l'insieme di tutte le coppie $(p, q)$ con $p \in \mathbb{Z}$ e $q \in \mathbb{Z}, q \neq 0$.
2.  Su questo insieme si definisce una **relazione di equivalenza** $\sim$:
    $$(a, b) \sim (c, d) \iff a \cdot d = b \cdot c$$
    Ad esempio, la coppia $(1, 2)$ è equivalente a $(2, 4)$ perché $1 \cdot 4 = 2 \cdot 2$. Entrambe rappresentano lo stesso numero razionale "un mezzo".
3.  L'insieme $\mathbb{Q}$ è l'**insieme quoziente** $(\mathbb{Z} \times (\mathbb{Z} \setminus \{0\})) / \sim$. Ogni classe di equivalenza $[(p, q)]$ è un numero razionale, che comunemente scriviamo come frazione $\frac{p}{q}$.

### Forma Canonica (Minimi Termini)

Ogni numero razionale (ogni classe di equivalenza) può essere rappresentato in un'unica forma, detta **canonica** o **ridotta ai minimi termini**. Una frazione $\frac{p}{q}$ è in forma canonica se:
1.  $q > 0$.
2.  Il massimo comun divisore tra $p$ e $q$ è 1 (cioè $p$ e $q$ sono **coprimi**).

Ad esempio, le frazioni $\frac{2}{4}$, $\frac{-3}{-6}$, $\frac{5}{10}$ appartengono tutte alla stessa classe di equivalenza, la cui forma canonica è $\frac{1}{2}$.

## Il Reciproco e la Struttura di Campo

In $\mathbb{Q}$, ogni numero $x \neq 0$ possiede un **inverso moltiplicativo** o **reciproco**, indicato con $x^{-1}$ o $\frac{1}{x}$

Dato un numero razionale $x = \frac{p}{q}$ (con $p, q \neq 0$), il suo reciproco è $x^{-1} = \frac{q}{p}$.

Questo inverso soddisfa la **Proprietà dell'Elemento Inverso per la Moltiplicazione**:
$$x \cdot x^{-1} = 1, \quad \forall x \in \mathbb{Q}, x \neq 0$$

L'esistenza dell'inverso additivo (ereditato da $\mathbb{Z}$) e dell'inverso moltiplicativo rende l'insieme $\mathbb{Q}$, munito di addizione e moltiplicazione, un **campo**. Questo significa che le quattro operazioni aritmetiche fondamentali (addizione, sottrazione, moltiplicazione e divisione per un numero non nullo) sono **interne** e ben definite.

## Operazioni Finite e Confronto con gli Irrazionali

Una caratteristica fondamentale di $\mathbb{Q}$ è che le quattro operazioni aritmetiche tra due numeri razionali possono essere eseguite in un **numero finito di passi** e il risultato è sempre un numero razionale.
Ad esempio:
$$\frac{a}{b} + \frac{c}{d} = \frac{ad+bc}{bd}$$
Il calcolo richiede solo un numero finito di moltiplicazioni e addizioni tra interi.

Questo non è vero per altre operazioni, come l'estrazione di radice. Ad esempio, $\sqrt{2}$ non può essere espresso come frazione di interi (è un numero **irrazionale**), quindi non appartiene a $\mathbb{Q}$. Il suo calcolo non può essere "completato" in un numero finito di passi aritmetici all'interno di $\mathbb{Q}$.

## Dalle Frazioni ai Decimali Periodici (e ritorno)

Ogni numero razionale, se espresso in forma decimale, genera un numero **finito** o **periodico**. Viceversa, ogni numero decimale periodico può essere trasformato in una frazione (e quindi è un numero razionale).

Per ottenere la **frazione generatrice** da un numero decimale periodico:
1.  **Periodico Semplice** (es. $x = 2,\overline{15}$):
    * Si scrive il numero senza virgola: 215
    * Si sottrae la parte non periodica: $215 - 2 = 213$
    * Al denominatore si mettono tanti '9' quante sono le cifre del periodo: 99
    * Frazione: $\frac{213}{99}$

2.  **Periodico Misto** (es. $x = 3,4\overline{16}$):
    * Si scrive il numero senza virgola: 3416
    * Si sottrae il numero formato da tutto ciò che precede il periodo: $3416 - 34 = 3382$
    * Al denominatore si mettono tanti '9' quante sono le cifre del periodo, seguiti da tanti '0' quante sono le cifre dell'antiperiodo: 990
    * Frazione: $\frac{3382}{990}$
# Il Calcolo Infinito di $\sqrt{2}$ e la Propagazione degli Errori

È stato dimostrato fin dall'antichità che $\sqrt{2}$ è un numero irrazionale, cioè non può essere scritto come una frazione $\frac{p}{q}$. Questo implica che la sua rappresentazione decimale è infinita e non periodica.

Qualsiasi tentativo di "calcolare" $\sqrt{2}$ usando solo le operazioni di $\mathbb{Q}$ si traduce in un processo di approssimazione infinito.

## Dimostrazione per Iterazione (Metodo di Bisezione)

Possiamo illustrare perché il calcolo richiede un numero infinito di passi cercando di "trovare" $\sqrt{2}$ con un algoritmo iterativo. Cerchiamo la radice dell'equazione $x^2 - 2 = 0$.

1.  **Intervallo Iniziale**: Sappiamo che $1^2 = 1 < 2$ e $2^2 = 4 > 2$. Quindi, il valore di $\sqrt{2}$ deve trovarsi nell'intervallo $[1, 2]$. Questi due valori, 1 e 2, agiscono come "carabinieri" che intrappolano la soluzione.

2.  **Prima Iterazione**:
    * Calcoliamo il punto medio dell'intervallo: $m_1 = \frac{1+2}{2} = 1.5$.
    * Valutiamo il quadrato: $m_1^2 = 1.5^2 = 2.25$.
    * Poiché $2.25 > 2$, la soluzione si trova nell'intervallo a sinistra: $[1, 1.5]$.

3.  **Seconda Iterazione**:
    * Nuovo punto medio: $m_2 = \frac{1+1.5}{2} = 1.25$.
    * Valutiamo il quadrato: $m_2^2 = 1.25^2 = 1.5625$.
    * Poiché $1.5625 < 2$, la soluzione si trova nell'intervallo a destra: $[1.25, 1.5]$.

4.  **Processo Infinito**:
    * Si continua a dividere l'intervallo a metà e a scegliere il sotto-intervallo che contiene la radice. Ad ogni passo, otteniamo un'approssimazione razionale di $\sqrt{2}$ sempre migliore, e l'intervallo che la contiene diventa sempre più piccolo.
    * Tuttavia, poiché $\sqrt{2}$ non è razionale, il punto medio $m_k$ non sarà mai esattamente $\sqrt{2}$. L'algoritmo non terminerà mai con una soluzione esatta. Può solo essere fermato quando l'ampiezza dell'intervallo è inferiore a una certa tolleranza di errore desiderata.

Questo dimostra che per "calcolare" $\sqrt{2}$ è necessario un processo potenzialmente infinito di passi.

## Propagazione e Amplificazione degli Errori

Nei calcoli iterativi e numerici, specialmente quelli eseguiti da computer che lavorano con un numero finito di cifre, gli errori sono inevitabili.

* **Errore di Arrotondamento**: Ad ogni passo, il risultato di un'operazione potrebbe dover essere arrotondato, introducendo un piccolo errore.
* **Accumulo di Errori**: In un processo lungo e iterativo, questi piccoli errori possono sommarsi. Se ad ogni passo si aggiunge un piccolo errore, dopo $N$ passi l'errore totale può diventare significativo.
* **Amplificazione degli Errori**: In alcuni algoritmi (detti "instabili"), un piccolo errore iniziale può essere amplificato esponenzialmente ad ogni iterazione, portando a un risultato finale completamente inaffidabile. Ad esempio, se un'operazione prevede la sottrazione di due numeri molto vicini tra loro, la perdita di cifre significative può amplificare enormemente l'errore relativo.

Nel caso del metodo di bisezione per $\sqrt{2}$, l'algoritmo è stabile e l'errore viene dimezzato ad ogni passo, ma in sistemi più complessi (come la risoluzione di sistemi di equazioni differenziali o il calcolo di orbite planetarie a lungo termine) la gestione della propagazione degli errori è un aspetto critico e fondamentale.