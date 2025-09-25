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

Sia $f: A \to B$ una funzione **biunivoca (biiettiva o biiettiva)**, ovvero sia iniettiva che suriettiva. Si definisce **funzione inversa** di $f$ la funzione $f^{-1}: B \to A$ tale che:
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