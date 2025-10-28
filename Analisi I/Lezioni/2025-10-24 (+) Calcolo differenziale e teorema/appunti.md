# Monotonia e Calcolo delle Derivate

---

## Teorema: Relazione tra Derivata e Monotonia (Crescente)

Questo teorema, noto come *Test di Monotonia* (in una direzione), lega il comportamento di una funzione (crescente) al segno della sua derivata.

### Enunciato Formale

**Ipotesi (HP):**
1.  Sia $f: I \to \mathbb{R}$ una funzione definita su un intervallo $I$.
2.  $f$ è **derivabile** su $I$.
3.  $f$ è **crescente** (monotona non decrescente) su $I$.
    (Cioè $\forall x_1, x_2 \in I$, se $x_1 < x_2 \implies f(x_1) \le f(x_2)$).

**Tesi (TH):**
La derivata prima è non negativa in ogni punto dell'intervallo.
$$
\forall x \in I, \quad f'(x) \ge 0
$$

### Dimostrazione Formale

1.  Sia $x_0 \in I$ un punto generico. Per ipotesi (HP 2), $f$ è derivabile in $x_0$, quindi esiste finito:
    $$
    f'(x_0) = \lim_{h \to 0} \frac{f(x_0 + h) - f(x_0)}{h}
    $$

2.  Dobbiamo analizzare il segno del rapporto incrementale $R(x_0, h)$ prima di passare al limite.

3.  **Caso 1: $h > 0$ (limite destro)**
    * Se $h > 0$, allora $x_0 + h > x_0$.
    * Per l'ipotesi (HP 3) che $f$ è crescente, $f(x_0 + h) \ge f(x_0)$.
    * Il numeratore $\Delta y = f(x_0 + h) - f(x_0) \ge 0$.
    * Il denominatore $h > 0$.
    * Il rapporto $R(x_0, h) = \frac{\Delta y}{h} = \frac{(\ge 0)}{(> 0)} \ge 0$.

4.  **Caso 2: $h < 0$ (limite sinistro)**
    * Se $h < 0$, allora $x_0 + h < x_0$.
    * Per l'ipotesi (HP 3) che $f$ è crescente, $f(x_0 + h) \le f(x_0)$.
    * Il numeratore $\Delta y = f(x_0 + h) - f(x_0) \le 0$.
    * Il denominatore $h < 0$.
    * Il rapporto $R(x_0, h) = \frac{\Delta y}{h} = \frac{(\le 0)}{(< 0)} \ge 0$.

5.  **Conclusione:**
    In entrambi i casi, per $h \neq 0$ in un intorno di $x_0$, il rapporto incrementale $R(x_0, h)$ è sempre maggiore o uguale a zero.
    Poiché per ipotesi (HP 2) il limite $f'(x_0)$ esiste, applichiamo il **Teorema della Permanenza del Segno** (o Teorema del Confronto per i limiti).
    Se una funzione (in questo caso $R(h)$) è non negativa in un intorno di 0, il suo limite per $h \to 0$ (se esiste) non può essere negativo.
    $$
    f'(x_0) = \lim_{h \to 0} R(x_0, h) \ge 0
    $$
    Dato che $x_0$ era un punto generico di $I$, la tesi è valida $\forall x \in I$.

*C.V.D.*

---

## Controesempio: Monotonia Stretta e Derivata

Ci si potrebbe chiedere se l'ipotesi di *stretta* monotonia implichi una derivata *strettamente* positiva.

**Proposizione (FALSA):**
Se $f$ è derivabile e *strettamente crescente* in $I$, allora $f'(x) > 0$ $\forall x \in I$.

### Dimostrazione per Controesempio

Per dimostrare che la proposizione è falsa, è sufficiente trovare una funzione che soddisfi le ipotesi ma non la tesi.

1.  **Funzione Scelta:**
    Consideriamo la funzione $f: \mathbb{R} \to \mathbb{R}$ definita da:
    $$
    f(x) = x^3
    $$

2.  **Verifica Ipotesi:**
    * **$f$ è derivabile?** Sì, è un polinomio. La sua derivata è $f'(x) = 3x^2$.
    * **$f$ è strettamente crescente?** Sì. Dobbiamo dimostrare che $\forall x_1 < x_2 \implies x_1^3 < x_2^3$.
        Consideriamo la differenza:
        $f(x_2) - f(x_1) = x_2^3 - x_1^3 = (x_2 - x_1)(x_1^2 + x_1x_2 + x_2^2)$.
        * $(x_2 - x_1) > 0$ (per ipotesi).
        * Il termine $(x_1^2 + x_1x_2 + x_2^2)$ è una forma quadratica definita positiva. Si può scrivere come $(x_1 + \frac{1}{2}x_2)^2 + \frac{3}{4}x_2^2$.
        * Questa somma di quadrati è $\ge 0$ ed è zero solo se $x_1 = x_2 = 0$.
        * Poiché $x_1 < x_2$, non possono essere entrambi zero, quindi $(x_1^2 + x_1x_2 + x_2^2) > 0$.
        * Il prodotto di due termini $> 0$ è $> 0$, quindi $f(x_2) - f(x_1) > 0$.
        * L'ipotesi è verificata: $f(x)=x^3$ è strettamente crescente.

3.  **Verifica Tesi (Fallimento):**
    La tesi della proposizione falsa era $f'(x) > 0$ per *tutti* gli $x$.
    Calcoliamo la derivata $f'(x) = 3x^2$ nel punto $x_0 = 0$:
    $$
    f'(0) = 3(0)^2 = 0
    $$
    Il valore $0$ **non** è strettamente maggiore di $0$ ($0 \ngtr 0$).

4.  **Conclusione:**
    Abbiamo trovato una funzione $f(x)=x^3$ che è sia derivabile che strettamente crescente su $\mathbb{R}$, ma che ha derivata $f'(0)=0$ in un punto.
    Questo confuta la proposizione.

**Conclusione Corretta:** Se $f$ è derivabile e strettamente crescente, allora $f'(x) \ge 0$.



---

## Algebra delle Derivate (Definizioni Formali)

Siano $f, g: I \to \mathbb{R}$ due funzioni definite su un intervallo $I$ e siano entrambe **derivabili** in un punto $x_0 \in I$. Sia $k \in \mathbb{R}$ una costante.
Allora:

1.  **Linearità (Somma e Prodotto per Scalare):**
    La funzione $S(x) = k \cdot f(x) + g(x)$ è derivabile in $x_0$ e la sua derivata è:
    $$
    S'(x_0) = (k \cdot f + g)'(x_0) := k \cdot f'(x_0) + g'(x_0)
    $$

2.  **Regola del Prodotto (di Leibniz):**
    La funzione $P(x) = f(x) \cdot g(x)$ è derivabile in $x_0$ e la sua derivata è:
    $$
    P'(x_0) = (f \cdot g)'(x_0) := f'(x_0)g(x_0) + f(x_0)g'(x_0)
    $$

3.  **Regola del Quoziente:**
    Se $g(x_0) \neq 0$, allora la funzione $Q(x) = \frac{f(x)}{g(x)}$ è derivabile in $x_0$ e la sua derivata è:
    $$
    Q'(x_0) = \left(\frac{f}{g}\right)'(x_0) := \frac{f'(x_0)g(x_0) - f(x_0)g'(x_0)}{[g(x_0)]^2}
    $$

### Derivata della Funzione Composta (Regola della Catena)

Siano $g: I \to J$ e $f: J \to \mathbb{R}$ due funzioni.

**Ipotesi:**
1.  La funzione $g$ è derivabile nel punto $x_0 \in I$.
2.  La funzione $f$ è derivabile nel punto $y_0 = g(x_0) \in J$.

**Tesi:**
La funzione composta $C(x) = (f \circ g)(x) = f(g(x))$ è derivabile in $x_0$.

**Definizione Formale della Derivata:**
$$
C'(x_0) = (f \circ g)'(x_0) := f'(g(x_0)) \cdot g'(x_0)
$$
(Si deriva la funzione "esterna" $f$ valutata nel punto "interno" $g(x_0)$, e si moltiplica per la derivata della funzione "interna" $g$).
# Calcolo Differenziale e Regola della Catena

---

## Calcolo delle Derivate Fondamentali (Cenni di Dimostrazione)

Assumiamo $f$ e $g$ derivabili e $c \in \mathbb{R}$ costante.

### 1. Linearità (Somma)
$D[f(x) + g(x)] = f'(x) + g'(x)$

**Dimostrazione (cenno):**
Si basa sull'algebra dei limiti.
$$
D[f+g] = \lim_{h \to 0} \frac{[f(x+h)+g(x+h)] - [f(x)+g(x)]}{h}
$$
Raccogliendo i termini:
$$
= \lim_{h \to 0} \left( \frac{f(x+h) - f(x)}{h} + \frac{g(x+h) - g(x)}{h} \right)
$$
Per la linearità del limite:
$$
= \lim_{h \to 0} \frac{f(x+h) - f(x)}{h} + \lim_{h \to 0} \frac{g(x+h) - g(x)}{h} = f'(x) + g'(x)
$$
*(La derivata di $D[c \cdot f(x)] = c \cdot f'(x)$ si dimostra analogamente)*.

### 2. Polinomi ($D[x^n]$)
$D[x^n] = nx^{n-1}$
*(Dimostrato formalmente in precedenza tramite il Binomio di Newton).*

### 3. Regola del Prodotto (di Leibniz)
$D[f(x)g(x)] = f'(x)g(x) + f(x)g'(x)$

**Dimostrazione (cenno):**
Si usa il "trucco" di aggiungere e togliere un termine misto:
$$
D[fg] = \lim_{h \to 0} \frac{f(x+h)g(x+h) - f(x)g(x)}{h}
$$
$$
= \lim_{h \to 0} \frac{f(x+h)g(x+h) - f(x)g(x+h) + f(x)g(x+h) - f(x)g(x)}{h}
$$
Raccogliendo $g(x+h)$ e $f(x)$:
$$
= \lim_{h \to 0} \left( g(x+h) \cdot \frac{f(x+h) - f(x)}{h} + f(x) \cdot \frac{g(x+h) - g(x)}{h} \right)
$$
Poiché $g$ è derivabile, è continua, quindi $\lim_{h \to 0} g(x+h) = g(x)$.
Passando al limite (usando l'algebra dei limiti):
$$
= g(x) \cdot f'(x) + f(x) \cdot g'(x)
$$

### 4. Esponenziale ($D[e^x]$)
$D[e^x] = e^x$

**Dimostrazione (cenno):**
Dipende dal **limite notevole fondamentale** $\lim_{k \to 0} \frac{e^k - 1}{k} = 1$.
$$
D[e^x] = \lim_{h \to 0} \frac{e^{x+h} - e^x}{h} = \lim_{h \to 0} \frac{e^x(e^h - 1)}{h}
$$
$$
= e^x \cdot \left( \lim_{h \to 0} \frac{e^h - 1}{h} \right) = e^x \cdot 1 = e^x
$$

### 5. Seno e Coseno
$D[\sin(x)] = \cos(x)$
$D[\cos(x)] = -\sin(x)$

**Dimostrazione (cenno per $\sin(x)$):**
Dipende dai limiti notevoli $\lim_{h \to 0} \frac{\sin(h)}{h} = 1$ e $\lim_{h \to 0} \frac{\cos(h)-1}{h} = 0$.
Usando la formula di addizione $\sin(x+h) = \sin(x)\cos(h) + \cos(x)\sin(h)$:
$$
D[\sin(x)] = \lim_{h \to 0} \frac{[\sin(x)\cos(h) + \cos(x)\sin(h)] - \sin(x)}{h}
$$
$$
= \lim_{h \to 0} \left( \sin(x) \cdot \left[\frac{\cos(h)-1}{h}\right] + \cos(x) \cdot \left[\frac{\sin(h)}{h}\right] \right)
$$
Passando al limite:
$$
= \sin(x) \cdot (0) + \cos(x) \cdot (1) = \cos(x)
$$
*(La dimostrazione per $\cos(x)$ è analoga usando $\cos(x+h)$).*

### 6. Tangente
$D[\tan(x)] = \frac{1}{\cos^2(x)} = 1 + \tan^2(x)$

**Dimostrazione (cenno):**
Si usa la regola del quoziente (non dimostrata qui) e $\tan(x) = \frac{\sin(x)}{\cos(x)}$.
$$
D\left[\frac{\sin(x)}{\cos(x)}\right] = \frac{D[\sin(x)]\cos(x) - \sin(x)D[\cos(x)]}{\cos^2(x)}
$$
$$
= \frac{(\cos(x))\cos(x) - \sin(x)(-\sin(x))}{\cos^2(x)}
$$
$$
= \frac{\cos^2(x) + \sin^2(x)}{\cos^2(x)} = \frac{1}{\cos^2(x)}
$$

---

## Definizione Formale di Retta Tangente (come Limite)

Tradizionalmente, la retta tangente $t(x)$ è definita come la retta passante per $P_0=(x_0, f(x_0))$ con pendenza $m = f'(x_0)$.
Una definizione più profonda (e che si generalizza in $\mathbb{R}^n$) la definisce come **l'unica retta che approssima $f(x)$ "meglio" di ogni altra retta** vicino a $x_0$.

Sia $f$ definita in un intorno di $x_0$.

**1. Il Fascio di Rette:**
Consideriamo il fascio proprio di rette passante per $P_0(x_0, f(x_0))$. Una generica retta $\varphi(x)$ (nella tua notazione $\psi(x)$ o $\phi(x)$) di questo fascio ha equazione:
$$
\varphi(x) = f(x_0) + m(x - x_0) \quad (\text{al variare di } m \in \mathbb{R})
$$
Tutte queste rette passano per $P_0$. Vogliamo trovare quale valore di $m$ definisce la tangente.

**2. La Condizione di Tangenza:**
La retta tangente $t(x)$ è quell'unica retta $\varphi(x)$ del fascio tale che la "differenza" (errore) $E(x) = f(x) - \varphi(x)$ vada a zero *più velocemente* di $(x-x_0)$.

Formalmente, $t(x)$ è l'unica retta $\varphi(x)$ del fascio che soddisfa la seguente condizione:
$$
\lim_{x \to x_0} \frac{f(x) - \varphi(x)}{x - x_0} = 0
$$
*(Questo si legge: "la differenza $f(x) - \varphi(x)$ è un 'o-piccolo' di $(x-x_0)$", $f(x) - \varphi(x) = o(x-x_0)$).*

**3. Caratterizzazione (Ricerca di $m$):**
Una funzione $f$ ammette retta tangente in $x_0$ se e solo se esiste un $m \in \mathbb{R}$ che soddisfa il limite.
Dimostriamo che questo $m$ *deve* essere $f'(x_0)$.
Sostituiamo $\varphi(x)$ nel limite:
$$
\lim_{x \to x_0} \frac{f(x) - [f(x_0) + m(x - x_0)]}{x - x_0} = 0
$$
Spezziamo la frazione (algebra dei limiti):
$$
\lim_{x \to x_0} \left( \frac{f(x) - f(x_0)}{x - x_0} - \frac{m(x - x_0)}{x - x_0} \right) = 0
$$
$$
\lim_{x \to x_0} \left( \frac{f(x) - f(x_0)}{x - x_0} - m \right) = 0
$$
Questo limite è zero se e solo se:
$$
\lim_{x \to x_0} \frac{f(x) - f(x_0)}{x - x_0} = m
$$
**Conclusione:**
Esiste una retta $\varphi(x)$ che soddisfa la condizione di tangenza se e solo se $f$ è **derivabile** in $x_0$. In tal caso, il coefficiente angolare $m$ è univocamente determinato e vale:
$$
m = f'(x_0)
$$
La retta tangente $t(x)$ (o $\psi(x)$) è quindi:
$$
t(x) = f(x_0) + f'(x_0)(x - x_0)
$$

---

## Composizione di Funzioni (Regola della Catena)

### Definizione Formale (Enunciato)

Siano $g: I \to J$ e $f: J \to \mathbb{R}$ due funzioni.
Sia $C(x) = (f \circ g)(x) = f(g(x))$ la funzione composta.

**Ipotesi (HP):**
1.  $g$ è derivabile in $x_0 \in I$.
2.  $f$ è derivabile in $y_0 = g(x_0) \in J$.

**Tesi (TH):**
La funzione composta $C(x)$ è derivabile in $x_0$ e la sua derivata vale:
$$
C'(x_0) = (f \circ g)'(x_0) = f'(g(x_0)) \cdot g'(x_0)
$$

### Dimostrazione Formale

*(Non possiamo usare la "dimostrazione" $\frac{\Delta f}{\Delta g} \cdot \frac{\Delta g}{\Delta x}$ perché $\Delta g$ potrebbe essere $0$, portando a una divisione per zero. Usiamo un metodo formale con una funzione ausiliaria)*.

1.  **Funzione Ausiliaria:**
    Poiché $f$ è derivabile in $y_0 = g(x_0)$ (HP 2), definiamo una funzione ausiliaria $\Phi(y)$ in $J$:
    $$
    \Phi(y) =
    \begin{cases}
    \frac{f(y) - f(y_0)}{y - y_0} & \text{se } y \neq y_0 \\
    f'(y_0) & \text{se } y = y_0
    \end{cases}
    $$
    Per definizione di derivata, $\lim_{y \to y_0} \Phi(y) = f'(y_0) = \Phi(y_0)$.
    Quindi, la funzione $\Phi(y)$ è **continua** nel punto $y_0$.

2.  **Riscrivere $f(y)$:**
    Dalla definizione di $\Phi(y)$, possiamo affermare che **per ogni $y \in J$** (sia $y=y_0$ che $y \neq y_0$), vale:
    $$
    f(y) - f(y_0) = \Phi(y) \cdot (y - y_0)
    $$

3.  **Applicazione alla Composizione:**
    Applichiamo l'identità al nostro rapporto incrementale.
    Sia $y = g(x_0 + h)$ e $y_0 = g(x_0)$.
    $$
    \frac{C(x_0+h) - C(x_0)}{h} = \frac{f(g(x_0+h)) - f(g(x_0))}{h}
    $$
    Usando l'identità del passo 2 (con $y=g(x_0+h)$):
    $$
    = \frac{\Phi(g(x_0+h)) \cdot (g(x_0+h) - g(x_0))}{h}
    $$
    Riscriviamo come prodotto:
    $$
    = \Phi(g(x_0+h)) \cdot \left[ \frac{g(x_0+h) - g(x_0)}{h} \right]
    $$

4.  **Passaggio al Limite:**
    Calcoliamo il limite per $h \to 0$ (l'algebra dei limiti ci dice che il limite del prodotto è il prodotto dei limiti, se esistono finiti):
    $$
    C'(x_0) = \lim_{h \to 0} \Phi(g(x_0+h)) \cdot \lim_{h \to 0} \left[ \frac{g(x_0+h) - g(x_0)}{h} \right]
    $$

5.  **Valutazione dei due limiti:**
    * **Limite 1:** $\lim_{h \to 0} \left[ \frac{g(x_0+h) - g(x_0)}{h} \right] = g'(x_0)$
        (Questo è vero per l'Ipotesi 1).
    * **Limite 2:** $\lim_{h \to 0} \Phi(g(x_0+h)) = ?$
        * Per l'Ipotesi 1, $g$ è derivabile, quindi è **continua** in $x_0$.
        * Questo significa $\lim_{h \to 0} g(x_0+h) = g(x_0) = y_0$.
        * Sappiamo che $\Phi$ è **continua** in $y_0$.
        * Per il teorema sul **limite della funzione composta** (limite di funzione continua), abbiamo:
        $\lim_{h \to 0} \Phi(g(x_0+h)) = \Phi( \lim_{h \to 0} g(x_0+h) ) = \Phi(y_0) = f'(y_0)$.

6.  **Conclusione:**
    Sostituendo i risultati dei due limiti:
    $$
    C'(x_0) = f'(y_0) \cdot g'(x_0)
    $$
    Sostituendo $y_0 = g(x_0)$:
    $$
    C'(x_0) = f'(g(x_0)) \cdot g'(x_0)
    $$
*C.V.D.*