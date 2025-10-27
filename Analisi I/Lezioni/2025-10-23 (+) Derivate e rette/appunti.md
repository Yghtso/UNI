# La Retta e il Coefficiente Angolare

---

## Definizione Formale di Fascio di Rette

Un **fascio di rette** è un insieme infinito di rette che condividono una proprietà comune. Esistono due tipi di fasci nel piano $\mathbb{R}^2$:

### 1. Fascio Proprio di Rette

Un **fascio proprio** è l'insieme $\mathcal{F}_{P_0}$ di *tutte* le rette del piano passanti per un punto comune $P_0 = (x_0, y_0)$, detto **centro** (o *sostegno*) del fascio.

#### Rappresentazione analitica
Se $r_1: a_1x + b_1y + c_1 = 0$ e $r_2: a_2x + b_2y + c_2 = 0$ sono due rette distinte che si intersecano in $P_0$, il fascio (ad eccezione della retta $r_2$) può essere rappresentato dalla **combinazione lineare** delle loro equazioni:
$$
\mathcal{F}_{P_0}: a_1x + b_1y + c_1 + k(a_2x + b_2y + c_2) = 0 \quad (\forall k \in \mathbb{R})
$$

### 2. Fascio Improprio di Rette

Un **fascio improprio** è l'insieme $\mathcal{F}_{m}$ di *tutte* le rette del piano parallele tra loro, ovvero aventi lo stesso coefficiente angolare $m$ (o tutte le rette verticali).
$$
\mathcal{F}_{m}: y = mx + q \quad (\forall q \in \mathbb{R})
$$
(Oppure $\mathcal{F}_{\infty}: x = k \quad (\forall k \in \mathbb{R})$ per rette verticali).

---

## Rappresentazione di una Retta

Una retta $r$ nel piano è univocamente determinata da:

1.  **Un Punto e un Angolo (Pendenza):**
    Una retta (non verticale) è definita da un punto $P_0 = (x_0, y_0)$ per cui passa e dall'angolo $\alpha$ che essa forma con la direzione positiva dell'asse delle ascisse (asse $x$).
    L'angolo $\alpha \in [0, \pi) \setminus \{\frac{\pi}{2}\}$ definisce il **coefficiente angolare** $m$:
    $$
    m = \tan(\alpha)
    $$
    

2.  **Due Punti Distinti:**
    Per il primo postulato di Euclide, una retta $r$ è univocamente definita da due punti distinti $P_1 = (x_1, y_1)$ e $P_2 = (x_2, y_2)$ che le appartengono.

---

## Definizione e Invarianza del Coefficiente Angolare ($m$)

Sia $r$ una retta non verticale nel piano cartesiano.

### Definizione Formale
Siano $P_1 = (x_1, y_1)$ e $P_2 = (x_2, y_2)$ due punti distinti qualsiasi appartenenti a $r$. Poiché $r$ non è verticale, $x_1 \neq x_2$.
Il **coefficiente angolare** $m$ di $r$ è definito come il rapporto tra la variazione delle ordinate ($\Delta y$) e la variazione delle ascisse ($\Delta x$):
$$
m := \frac{\Delta y}{\Delta x} = \frac{y_2 - y_1}{x_2 - x_1}
$$

### Dimostrazione dell'Invarianza di $m$

Dobbiamo dimostrare formalmente che $m$ è una costante intrinseca della retta e non dipende dalla scelta dei due punti $P_1, P_2$.

Siano $P_1 = (x_1, y_1)$ e $P_2 = (x_2, y_2)$ la prima coppia di punti (con $x_1 < x_2$).
Siano $P_3 = (x_3, y_3)$ e $P_4 = (x_4, y_4)$ una seconda coppia di punti distinti sulla stessa retta $r$ (con $x_3 < x_4$).

Calcoliamo i due coefficienti:
$$
m_1 = \frac{y_2 - y_1}{x_2 - x_1} \quad \text{e} \quad m_2 = \frac{y_4 - y_3}{x_4 - x_3}
$$
Vogliamo dimostrare $m_1 = m_2$.

1.  Consideriamo il triangolo rettangolo $T_1$ formato dai vertici $P_1$, $P_2$ e $K_1 = (x_2, y_1)$.
    I suoi cateti misurano $\Delta x_1 = x_2 - x_1$ (base) e $\Delta y_1 = y_2 - y_1$ (altezza).

2.  Consideriamo il triangolo rettangolo $T_2$ formato dai vertici $P_3$, $P_4$ e $K_2 = (x_4, y_3)$.
    I suoi cateti misurano $\Delta x_2 = x_4 - x_3$ (base) e $\Delta y_2 = y_4 - y_3$ (altezza).

3.  Le ipotenuse di $T_1$ e $T_2$ giacciono entrambe sulla retta $r$.
    I cateti orizzontali ($P_1K_1$ e $P_3K_2$) sono entrambi paralleli all'asse $x$, quindi sono paralleli tra loro.

4.  Per il **Teorema di Talete** (o per la similitudine dei triangoli), poiché $T_1$ e $T_2$ sono triangoli rettangoli con ipotenuse parallele (anzi, coincidenti sulla retta $r$) e cateti paralleli, essi sono **simili**.

    *(Dimostrazione alternativa della similitudine: L'angolo $\alpha$ che $r$ forma con l'asse $x$ è lo stesso angolo che forma con i cateti orizzontali $P_1K_1$ e $P_3K_2$. Entrambi i triangoli hanno quindi gli angoli $(\alpha, 90^\circ, 90^\circ-\alpha)$ e sono simili).*

5.  Dalla similitudine dei triangoli, il rapporto tra i cateti corrispondenti deve essere costante:
    $$
    \frac{\text{cateto verticale } T_1}{\text{cateto orizzontale } T_1} = \frac{\text{cateto verticale } T_2}{\text{cateto orizzontale } T_2}
    $$
    (Mantenendo i segni, non solo le lunghezze)
    $$
    \frac{y_2 - y_1}{x_2 - x_1} = \frac{y_4 - y_3}{x_4 - x_3}
    $$
    Ovvero $m_1 = m_2$.

*C.V.D.* Il coefficiente $m$ è una proprietà intrinseca della retta $r$.

---

## Formule della Retta

### 1. Retta per un Punto con Angolo (Pendenza) Nota

Vogliamo l'equazione della retta $r$ passante per $P_0 = (x_0, y_0)$ e avente coefficiente angolare $m$ (noto).

Sia $P = (x, y)$ un generico punto della retta $r$, $P \neq P_0$.
Per l'invarianza del coefficiente angolare (dimostrata sopra), $m$ deve essere uguale al coefficiente calcolato usando $P$ e $P_0$:
$$
m = \frac{y - y_0}{x - x_0}
$$
Assumendo $x \neq x_0$ (cioè che la retta non sia verticale, caso in cui $m$ non è definito), possiamo moltiplicare entrambi i membri per $(x - x_0)$, ottenendo la **formula punto-pendenza** (o equazione del fascio proprio):
$$
y - y_0 = m(x - x_0)
$$

### 2. Retta Passante per Due Punti

Vogliamo l'equazione della retta $r$ passante per $P_1 = (x_1, y_1)$ e $P_2 = (x_2, y_2)$.

#### Caso 1: Retta non verticale ($x_1 \neq x_2$)
La retta esiste ed è unica. Conosciamo due punti, quindi possiamo calcolare il suo coefficiente angolare (che è ben definito):
$$
m = \frac{y_2 - y_1}{x_2 - x_1}
$$
Ora usiamo la formula punto-pendenza (punto 1) applicandola al punto $P_1$:
$$
y - y_1 = m(x - x_1)
$$
Sostituendo il valore di $m$ appena trovato:
$$
y - y_1 = \left( \frac{y_2 - y_1}{x_2 - x_1} \right) (x - x_1)
$$
Se $y_1 \neq y_2$ (retta non orizzontale), possiamo dividere per $(y_2 - y_1)$ ottenendo la forma canonica:
$$
\frac{y - y_1}{y_2 - y_1} = \frac{x - x_1}{x_2 - x_1}
$$

#### Caso 2: Retta verticale ($x_1 = x_2$)
Se $x_1 = x_2$, il denominatore $(x_2 - x_1)$ è zero e $m$ non è definito.
In questo caso, tutti i punti della retta devono avere la stessa ascissa $x_1$. L'equazione della retta è semplicemente:
$$
x = x_1
$$
# Rapporto Incrementale e Definizione di Derivata

---

## Definizione Formale di Rapporto Incrementale

Sia $I = (a, b)$ un intervallo aperto, e sia $f: I \to \mathbb{R}$ una funzione definita su $I$.

Sia $x_0 \in I$ un punto fissato nel dominio.
Sia $h \in \mathbb{R}$ un numero (positivo o negativo) tale che $h \neq 0$ e $x_0 + h \in I$. (Dato che $I$ è aperto, un tale $h$ esiste sempre in un intorno di 0).

Definiamo **incremento della variabile indipendente** (o *passo*):
$$
\Delta x = h
$$
Definiamo **incremento (corrispondente) della funzione**:
$$
\Delta y = f(x_0 + h) - f(x_0) = f(x_0 + \Delta x) - f(x_0)
$$
Si definisce **rapporto incrementale** di $f$ nel punto $x_0$ (relativo all'incremento $h$) la quantità:
$$
R(x_0, h) = \frac{\Delta y}{\Delta x} = \frac{f(x_0 + h) - f(x_0)}{h}
$$
Il rapporto incrementale rappresenta geometricamente il **coefficiente angolare della retta secante** al grafico di $f$ nei punti $(x_0, f(x_0))$ e $(x_0 + h, f(x_0 + h))$.


---

## Definizione Formale di Derivata in un Punto

Sia $f: (a, b) \to \mathbb{R}$ e sia $x_0 \in (a, b)$.
La funzione $f$ si dice **derivabile** nel punto $x_0$ se esiste ed è **finito** il limite del rapporto incrementale per $h \to 0$.

Tale limite, se esiste ed è finito, è chiamato **derivata (prima)** di $f$ nel punto $x_0$ e si indica con $f'(x_0)$.

Formalmente:
$$
f'(x_0) := \lim_{h \to 0} R(x_0, h) = \lim_{h \to 0} \frac{f(x_0 + h) - f(x_0)}{h}
$$
Utilizzando la notazione $\Delta$:
$$
f'(x_0) = \lim_{\Delta x \to 0} \frac{\Delta y}{\Delta x}
$$
Geometricamente, la derivata $f'(x_0)$ rappresenta il **coefficiente angolare della retta tangente** al grafico di $f$ nel punto $(x_0, f(x_0))$.


---

## Condizioni di Derivabilità

### Derivabilità in un Punto $x_0$

Una funzione $f: (a, b) \to \mathbb{R}$ è **derivabile** in $x_0 \in (a, b)$ se e solo se:
1.  Esiste il limite: $\lim_{h \to 0} \frac{f(x_0 + h) - f(x_0)}{h} = L$
2.  Tale limite è **finito**: $L \in \mathbb{R}$ (non $\pm \infty$).

**Derivata Destra e Sinistra:**
Poiché il limite per $h \to 0$ è un limite bilaterale, in $\mathbb{R}$ esso esiste se e solo se esistono e sono uguali i limiti destro e sinistro:
* **Derivata sinistra** ($h \to 0^-$): $f'_{-}(x_0) = \lim_{h \to 0^-} \frac{f(x_0 + h) - f(x_0)}{h}$
* **Derivata destra** ($h \to 0^+$): $f'_{+}(x_0) = \lim_{h \to 0^+} \frac{f(x_0 + h) - f(x_0)}{h}$

Quindi, $f$ è derivabile in $x_0$ se e solo se $f'_{-}(x_0)$ e $f'_{+}(x_0)$ esistono, sono finiti e $f'_{-}(x_0) = f'_{+}(x_0)$.
*(Se i limiti esistono finiti ma $f'_{-}(x_0) \neq f'_{+}(x_0)$, il punto $x_0$ è un **punto angoloso**)*.

**Proprietà (Derivabilità $\implies$ Continuità):**
Se $f$ è derivabile in $x_0$, allora $f$ è continua in $x_0$.
*Attenzione: Il viceversa non è vero (es. $f(x) = |x|$ in $x_0=0$ è continua ma non derivabile).*

### Derivabilità su un Intervallo Aperto $(a, b)$

Una funzione $f: (a, b) \to \mathbb{R}$ si dice **derivabile** sull'intervallo $(a, b)$ se è derivabile in **ogni** punto $x \in (a, b)$.

Se $f$ è derivabile su $(a, b)$, è possibile definire la **funzione derivata (prima)** $f': (a,b) \to \mathbb{R}$ che associa ad ogni $x \in (a,b)$ il valore della derivata $f'(x)$.
$$
f': x \mapsto f'(x)
$$

---

## Notazioni Alternative per la Derivata

Esistono diverse notazioni standard per indicare la derivata di una funzione $y = f(x)$ calcolata in $x$ (o in un punto $x_0$):

1.  **Notazione di Lagrange (la più usata in analisi):**
    $$
    f'(x) \quad \text{o} \quad y'(x)
    $$
2.  **Notazione di Leibniz (usata in fisica e calcolo multivariabile):**
    Sottolinea il rapporto tra i differenziali $dy$ e $dx$.
    $$
    \frac{df}{dx} \quad \text{o} \quad \frac{dy}{dx}
    $$
    (Per indicare il calcolo in $x_0$: $\frac{df}{dx}(x_0)$ o $\frac{dy}{dx}\bigg|_{x=x_0}$)
3.  **Notazione di Euler (operatore differenziale D):**
    Vede la derivazione come un operatore $D$ che agisce sulla funzione $f$.
    $$
    D f(x) \quad \text{o} \quad D_x f(x)
    $$
4.  **Notazione di Newton (dot notation):**
    Usata quasi esclusivamente in fisica per indicare derivate rispetto alla variabile *tempo* $t$.
    $$
    \dot{y}(t) \quad \text{(per } f(t) \text{ derivata rispetto a } t \text{)}
    $$
# Regole di Derivazione e Continuità

---

## Derivata di una Potenza $f(x) = x^n$ (con Binomio di Newton)

Vogliamo calcolare la derivata della funzione $f(x) = x^n$, dove $n \in \mathbb{N}$ (un numero naturale).
Utilizziamo la definizione di derivata come limite del rapporto incrementale:

$$
f'(x) = \lim_{h \to 0} \frac{f(x + h) - f(x)}{h} = \lim_{h \to 0} \frac{(x + h)^n - x^n}{h}
$$

### Dimostrazione Formale

1.  **Sviluppo del Binomio di Newton:**
    Per espandere $(x+h)^n$, usiamo il Teorema del Binomio di Newton:
    $$
    (a+b)^n = \sum_{k=0}^n \binom{n}{k} a^{n-k} b^k
    $$
    Nel nostro caso, $a=x$ e $b=h$:
    $$
    (x+h)^n = \binom{n}{0}x^n h^0 + \binom{n}{1}x^{n-1} h^1 + \binom{n}{2}x^{n-2} h^2 + \dots + \binom{n}{n}x^0 h^n
    $$

2.  **Valutazione dei primi termini:**
    Ricordiamo i coefficienti binomiali:
    * $\binom{n}{0} = 1$
    * $\binom{n}{1} = n$
    Sostituendo, lo sviluppo diventa:
    $$
    (x+h)^n = (1 \cdot x^n \cdot 1) + (n \cdot x^{n-1} \cdot h) + \binom{n}{2}x^{n-2} h^2 + \dots + h^n
    $$
    $$
    (x+h)^n = x^n + nx^{n-1}h + \binom{n}{2}x^{n-2} h^2 + \dots + h^n
    $$

3.  **Calcolo dell'incremento $\Delta y$:**
    Sottraiamo $f(x) = x^n$ dall'espressione:
    $$
    f(x+h) - f(x) = (x^n + nx^{n-1}h + \binom{n}{2}x^{n-2} h^2 + \dots + h^n) - x^n
    $$
    Il termine $x^n$ si cancella:
    $$
    f(x+h) - f(x) = nx^{n-1}h + \binom{n}{2}x^{n-2} h^2 + \dots + h^n
    $$

4.  **Calcolo del Rapporto Incrementale $\frac{\Delta y}{\Delta x}$:**
    Dividiamo tutto per $h$ (possiamo farlo perché $h \to 0$ ma $h \neq 0$):
    $$
    \frac{f(x+h) - f(x)}{h} = \frac{h \left( nx^{n-1} + \binom{n}{2}x^{n-2} h + \dots + h^{n-1} \right)}{h}
    $$
    Semplifichiamo $h$:
    $$
    \frac{f(x+h) - f(x)}{h} = nx^{n-1} + \binom{n}{2}x^{n-2} h + \dots + h^{n-1}
    $$
    Tutti i termini tranne il primo ($nx^{n-1}$) contengono $h$ con esponente $\ge 1$.

5.  **Calcolo del Limite:**
    Calcoliamo il limite per $h \to 0$:
    $$
    f'(x) = \lim_{h \to 0} \left[ nx^{n-1} + \binom{n}{2}x^{n-2} h + \dots + h^{n-1} \right]
    $$
    Per l'algebra dei limiti:
    $$
    f'(x) = \lim_{h \to 0}(nx^{n-1}) + \lim_{h \to 0}\left(\binom{n}{2}x^{n-2} h + \dots + h^{n-1}\right)
    $$
    * Il primo termine, $nx^{n-1}$, non dipende da $h$, quindi il suo limite è $nx^{n-1}$.
    * Il secondo termine è una somma finita di termini che sono tutti moltiplicati per almeno $h$. Quando $h \to 0$, l'intera somma tende a $0$.
    $$
    f'(x) = nx^{n-1} + 0
    $$

6.  **Conclusione:**
    Abbiamo dimostrato formalmente che:
    $$
    D[x^n] = nx^{n-1}
    $$
    *C.V.D.*

*(Questo risultato, combinato con la linearità dell'operatore di derivata, $D[af(x) + bg(x)] = aD[f(x)] + bD[g(x)]$, permette di derivare qualsiasi funzione polinomiale $P(x) = a_n x^n + \dots + a_1 x + a_0$).*

---

## Teorema: Derivabilità implica Continuità

Se una funzione è derivabile in un punto $x_0$, allora è necessariamente continua in $x_0$.
Il viceversa non è vero (es. $f(x) = |x|$ è continua in $x_0=0$ ma non derivabile).

### Enunciato Formale

**Ipotesi (HP):**
Sia $f: (a, b) \to \mathbb{R}$ una funzione e $x_0 \in (a, b)$.
$f$ è **derivabile** in $x_0$.
Per definizione, questo significa che esiste ed è **finito** il limite:
$$
\lim_{h \to 0} \frac{f(x_0 + h) - f(x_0)}{h} = f'(x_0) \in \mathbb{R}
$$

**Tesi (TH):**
$f$ è **continua** in $x_0$.
Per definizione, dobbiamo dimostrare che:
$$
\lim_{x \to x_0} f(x) = f(x_0)
$$
Usando la sostituzione $h = x - x_0$ (da cui $x = x_0 + h$), e notando che $x \to x_0 \iff h \to 0$, la tesi è equivalente a:
$$
\lim_{h \to 0} f(x_0 + h) = f(x_0)
$$
Che a sua volta è equivalente a dimostrare:
$$
\lim_{h \to 0} \left[ f(x_0 + h) - f(x_0) \right] = 0
$$

### Dimostrazione Formale

Vogliamo calcolare $\lim_{h \to 0} [f(x_0 + h) - f(x_0)]$, usando la nostra Ipotesi.

1.  **Manipolazione Algebrica:**
    Per $h \neq 0$, possiamo moltiplicare e dividere l'espressione per $h$ (questo è il passaggio chiave):
    $$
    f(x_0 + h) - f(x_0) = \frac{f(x_0 + h) - f(x_0)}{h} \cdot h
    $$

2.  **Calcolo del Limite:**
    Applichiamo l'operatore $\lim_{h \to 0}$ a entrambi i membri:
    $$
    \lim_{h \to 0} \left[ f(x_0 + h) - f(x_0) \right] = \lim_{h \to 0} \left( \frac{f(x_0 + h) - f(x_0)}{h} \cdot h \right)
    $$

3.  **Applicazione del Teorema sul Limite del Prodotto:**
    Il limite di un prodotto è il prodotto dei limiti, *se entrambi i limiti esistono e sono finiti*.
    $$
    \lim_{h \to 0} \left[ f(x_0 + h) - f(x_0) \right] = \left( \lim_{h \to 0} \frac{f(x_0 + h) - f(x_0)}{h} \right) \cdot \left( \lim_{h \to 0} h \right)
    $$

4.  **Valutazione dei Limiti:**
    * $\lim_{h \to 0} \frac{f(x_0 + h) - f(x_0)}{h} = f'(x_0)$
        Questo è vero per l'**Ipotesi** (sappiamo che $f$ è derivabile e $f'(x_0)$ è un numero finito).
    * $\lim_{h \to 0} h = 0$
        Questo è un limite immediato.

5.  **Conclusione:**
    Sostituendo i risultati nel passaggio 3:
    $$
    \lim_{h \to 0} \left[ f(x_0 + h) - f(x_0) \right] = f'(x_0) \cdot 0
    $$
    Poiché $f'(x_0)$ è un numero finito (per ipotesi di derivabilità), il prodotto di un numero finito per zero è zero.
    $$
    \lim_{h \to 0} \left[ f(x_0 + h) - f(x_0) \right] = 0
    $$
    Questo è esattamente ciò che volevamo dimostrare (la Tesi).

*C.V.D.*