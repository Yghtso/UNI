# Potenze, Radici ed Esponenziali

## Definizione di Radice n-esima e Potenza

### Definizione Formale di Radice n-esima

Dato un numero reale $y \ge 0$ e un intero $n \ge 1$, la **radice n-esima** di $y$, denotata con $\sqrt[n]{y}$, è quell'unico numero reale non negativo $x$ tale che la sua potenza $n$-esima è uguale a $y$.

Formalmente, $x = \sqrt[n]{y}$ è la soluzione unica non negativa dell'equazione:
$$
x^n = y
$$
La radice $n$-esima può anche essere espressa come una potenza con esponente frazionario:
$$
\sqrt[n]{y} := y^{1/n}
$$
*Nota: Se $n$ è dispari, la radice n-esima è definita anche per $y < 0$ ed è negativa. Se $y \ge 0$, la radice n-esima è sempre definita come l'unica soluzione non negativa.*

### Definizione Formale di Potenza $a^b$

La definizione di $a^b$ viene costruita per stadi, a seconda della natura dell'esponente $b$.

1.  **Esponente intero non negativo ($b \in \mathbb{N}$)**:
    -   Se $b=0$ e $a \neq 0$, si pone $a^0 := 1$.
    -   Se $b > 0$, la potenza $a^b$ è definita come il prodotto di $b$ fattori uguali ad $a$:
        $$
        a^b := \underbrace{a \cdot a \cdot \ldots \cdot a}_{b \text{ volte}}
        $$

2.  **Esponente intero negativo ($b \in \mathbb{Z}, b < 0$)**:
    Sia $b = -k$ con $k$ intero positivo. Per $a \neq 0$, la potenza $a^b$ è definita come l'inverso di $a^k$:
    $$
    a^b = a^{-k} := \frac{1}{a^k} = \left(\frac{1}{a}\right)^k
    $$

## Caso degli Esponenti Negativi

La relazione $a^b = (1/a)^{-b}$ per $b < 0$ è una conseguenza diretta della definizione. Dimostriamone la coerenza.

Sia $b < 0$ un intero. Allora $-b$ è un intero positivo. Sia $k = -b > 0$.
L'espressione a destra diventa:
$$
\left(\frac{1}{a}\right)^{-b} = \left(\frac{1}{a}\right)^{k}
$$
Per definizione di potenza con esponente intero positivo, questo significa:
$$
\left(\frac{1}{a}\right)^{k} = \underbrace{\frac{1}{a} \cdot \frac{1}{a} \cdot \ldots \cdot \frac{1}{a}}_{k \text{ volte}} = \frac{1^k}{a^k} = \frac{1}{a^k}
$$
D'altra parte, per definizione di potenza con esponente negativo, l'espressione a sinistra è:
$$
a^b = a^{-k} := \frac{1}{a^k}
$$
Poiché entrambe le espressioni sono uguali a $\frac{1}{a^k}$, l'identità $a^b = (1/a)^{-b}$ è verificata.

## Definizione di Esponenziale Razionale

La definizione di potenza viene estesa agli esponenti razionali $b \in \mathbb{Q}$ per $a > 0$.
Un numero razionale $b$ può essere scritto come una frazione $m/n$, con $m \in \mathbb{Z}$ e $n \in \mathbb{N}, n \ge 1$. La potenza $a^{m/n}$ è definita collegandola alla radice $n$-esima:
$$
a^{m/n} := \sqrt[n]{a^m}
$$
Questa definizione è ben posta, in quanto si può dimostrare che il valore non dipende dalla specifica frazione scelta per rappresentare il numero razionale (es. $a^{1/2} = a^{2/4}$). L'espressione può anche essere vista come:
$$
a^{m/n} = (\sqrt[n]{a})^m
$$

## Regole degli Esponenti (Proprietà delle Potenze)

Per tutte le seguenti regole, si assuma che le basi $a, b$ siano numeri reali positivi ($a,b \in \mathbb{R}, a,b > 0$) e gli esponenti $r, s$ siano numeri razionali ($r,s \in \mathbb{Q}$).

Una premessa fondamentale per la validità di queste proprietà è l'**unicità della radice n-esima positiva**. Per ogni $y>0$, esiste un unico $x>0$ tale che $x^n=y$. Questa unicità permette di manipolare le potenze in modo non ambiguo.

1.  **Prodotto di potenze con la stessa base**:
    $$
    a^r \cdot a^s = a^{r+s}
    $$
2.  **Quoziente di potenze con la stessa base**:
    $$
    \frac{a^r}{a^s} = a^{r-s}
    $$
3.  **Potenza di una potenza**:
    $$
    (a^r)^s = a^{r \cdot s}
    $$
4.  **Prodotto di potenze con lo stesso esponente**:
    $$
    (a \cdot b)^r = a^r \cdot b^r
    $$
5.  **Quoziente di potenze con lo stesso esponente**:
    $$
    \left(\frac{a}{b}\right)^r = \frac{a^r}{b^r}
    $$
6.  **Esponente nullo**:
    $$
    a^0 = 1
    $$
7.  **Esponente negativo**:
    $$
    a^{-r} = \frac{1}{a^r}
    $$

## La Funzione Esponenziale con Esponente Reale

La definizione di potenza viene estesa agli esponenti reali $x \in \mathbb{R}$ attraverso un processo al limite. Ogni numero reale $x$ può essere visto come il limite di una successione di numeri razionali $(r_n)_{n \in \mathbb{N}}$.
Ad esempio, il numero irrazionale $\pi$ è il limite della successione di numeri razionali $3, 3.1, 3.14, 3.141, \dots$

Dato $a>0$ e un numero reale $x$, e scelta una qualsiasi successione di numeri razionali $(r_n)$ tale che:
$$
\lim_{n \to \infty} r_n = x
$$
allora la potenza $a^x$ è definita come il limite della successione delle potenze $a^{r_n}$:
$$
a^x := \lim_{n \to \infty} a^{r_n}
$$
Si può dimostrare che questo limite esiste, è finito, e il suo valore non dipende dalla particolare successione di numeri razionali $(r_n)$ scelta per approssimare $x$. Questo processo garantisce che la funzione esponenziale $f(x) = a^x$ sia continua su tutto l'asse reale $\mathbb{R}$.

# Logaritmi, Disuguaglianze Notevoli e Medie

## Logaritmo: Definizione e Proprietà

### Definizione Formale di Logaritmo

Dati due numeri reali positivi $a$ e $x$, con $a \neq 1$, si definisce **logaritmo in base $a$ di $x$** l'esponente $y$ da dare alla base $a$ per ottenere l'argomento $x$.

In simboli, il logaritmo, denotato con $\log_a(x)$, è quel numero reale $y$ tale che:
$$\log_a(x) = y \iff a^y = x$$
**Condizioni di esistenza**:
* L'argomento del logaritmo deve essere strettamente positivo: $x \in \mathbb{R}^+$.
* La base del logaritmo deve essere strettamente positiva e diversa da 1: $a \in \mathbb{R}^+, a \neq 1$.

### Proprietà dei Logaritmi e Dimostrazioni

Siano $x, y \in \mathbb{R}^+$ e $a, b \in \mathbb{R}^+$ con $a,b \neq 1$.

#### 1. Logaritmo di un prodotto
La proprietà afferma che il logaritmo del prodotto di due numeri è uguale alla somma dei loro logaritmi.
$$\log_a(x \cdot y) = \log_a(x) + \log_a(y)$$
**Dimostrazione**:
Poniamo $u = \log_a(x)$ e $v = \log_a(y)$. Per la definizione di logaritmo, questo equivale a:
$$a^u = x \quad \text{e} \quad a^v = y$$
Moltiplichiamo $x$ e $y$:
$$x \cdot y = a^u \cdot a^v$$
Utilizzando le proprietà delle potenze, otteniamo:
$$x \cdot y = a^{u+v}$$
Applichiamo nuovamente la definizione di logaritmo a quest'ultima uguaglianza, passando dalla forma esponenziale a quella logaritmica:
$$\log_a(x \cdot y) = u+v$$
Sostituendo i valori iniziali di $u$ e $v$, si ottiene la tesi:
$$\log_a(x \cdot y) = \log_a(x) + \log_a(y)$$

#### 2. Logaritmo di un quoziente
Il logaritmo del quoziente di due numeri è uguale alla differenza dei loro logaritmi.
$$\log_a\left(\frac{x}{y}\right) = \log_a(x) - \log_a(y)$$
**Dimostrazione**:
Seguendo un procedimento analogo al precedente, poniamo $u = \log_a(x)$ e $v = \log_a(y)$, da cui $a^u = x$ e $a^v = y$.
Calcoliamo il quoziente tra $x$ e $y$:
$$\frac{x}{y} = \frac{a^u}{a^v} = a^{u-v}$$
Applichiamo la definizione di logaritmo:
$$\log_a\left(\frac{x}{y}\right) = u-v$$
Sostituendo $u$ e $v$ si ottiene la tesi.

#### 3. Logaritmo di una potenza
Il logaritmo di una potenza è uguale al prodotto dell'esponente per il logaritmo della base.
$$\log_a(x^k) = k \cdot \log_a(x) \quad (k \in \mathbb{R})$$
**Dimostrazione**:
Poniamo $u = \log_a(x)$, da cui $a^u = x$.
Eleviamo entrambi i membri alla potenza $k$:
$$x^k = (a^u)^k$$
Utilizzando le proprietà delle potenze:
$$x^k = a^{u \cdot k}$$
Applichiamo la definizione di logaritmo:
$$\log_a(x^k) = u \cdot k$$
Sostituendo $u$ si ottiene la tesi.

#### 4. Formula del cambiamento di base
Questa formula permette di convertire un logaritmo da una base $a$ a un'altra base $b$.
$$\log_a(x) = \frac{\log_b(x)}{\log_b(a)}$$
**Dimostrazione**:
Poniamo $y = \log_a(x)$, da cui $a^y = x$.
Applichiamo il logaritmo in base $b$ a entrambi i membri dell'uguaglianza $a^y=x$:
$$\log_b(a^y) = \log_b(x)$$
Usando la proprietà del logaritmo di una potenza (vista al punto 3), portiamo l'esponente $y$ fuori dal logaritmo:
$$y \cdot \log_b(a) = \log_b(x)$$
Poiché $a \neq 1$, $\log_b(a) \neq 0$, quindi possiamo dividere per $\log_b(a)$:
$$y = \frac{\log_b(x)}{\log_b(a)}$$
Sostituendo il valore iniziale di $y$, si ottiene la tesi.

---

## Disuguaglianza di Bernoulli

### Enunciato e Dimostrazione per Induzione
Per ogni numero reale $x > -1$ e per ogni numero intero $n \ge 0$, vale la seguente disuguaglianza:
$$(1+x)^n \ge 1+nx$$
**Dimostrazione per induzione su $n$**:
**Passo Base ($n=0$)**:
Verifichiamo se la disuguaglianza è vera per $n=0$.
$$(1+x)^0 \ge 1 + 0 \cdot x \implies 1 \ge 1$$
La disuguaglianza è vera.

**Passo Induttivo**:
Assumiamo che la disuguaglianza sia vera per un generico intero $k \ge 0$ (ipotesi induttiva):
$$(1+x)^k \ge 1+kx$$
Vogliamo dimostrare che, data questa assunzione, la disuguaglianza è vera anche per $k+1$:
$$(1+x)^{k+1} \ge 1+(k+1)x$$
Partiamo dal primo membro, $(1+x)^{k+1}$:
$$(1+x)^{k+1} = (1+x)^k \cdot (1+x)$$
Applichiamo l'ipotesi induttiva. Poiché $x > -1$, il fattore $(1+x)$ è positivo, quindi possiamo moltiplicare entrambi i membri dell'ipotesi induttiva per $(1+x)$ senza cambiare il verso della disuguaglianza:
$$(1+x)^k \cdot (1+x) \ge (1+kx) \cdot (1+x)$$
Sviluppiamo il prodotto a destra:
$$(1+kx)(1+x) = 1 + x + kx + kx^2 = 1 + (k+1)x + kx^2$$
Abbiamo quindi ottenuto la catena di disuguaglianze:
$$(1+x)^{k+1} \ge 1 + (k+1)x + kx^2$$
Poiché $k \ge 0$ e $x^2 \ge 0$, il termine $kx^2$ è non negativo ($kx^2 \ge 0$). Pertanto:
$$1 + (k+1)x + kx^2 \ge 1 + (k+1)x$$
Per la proprietà transitiva, concludiamo che:
$$(1+x)^{k+1} \ge 1+(k+1)x$$
La tesi è dimostrata per induzione.

### Corollario: Disuguaglianza Stretta
Per ogni $x > -1$ con $x \neq 0$ e per ogni intero $n \ge 2$, vale la disuguaglianza stretta:
$$(1+x)^n > 1+nx$$
**Dimostrazione**:
Il procedimento è identico. Il passo base è per $n=2$: $(1+x)^2 = 1+2x+x^2$. Poiché $x \neq 0$, $x^2>0$, quindi $1+2x+x^2 > 1+2x$. Il passo base è verificato. Nel passo induttivo, la disuguaglianza $1+(k+1)x+kx^2 \ge 1+(k+1)x$ diventa stretta ($>$) perché per $k \ge 2$ e $x \neq 0$, il termine $kx^2$ è strettamente positivo.

---

## Disuguaglianza tra Media Aritmetica e Geometrica (AM-GM)

### Definizioni Formali
Dati due numeri reali positivi $x > 0$ e $y > 0$:
* La **media aritmetica** (AM) è definita come:
    $$
    M_A(x,y) = \frac{x+y}{2}
    $$
* La **media geometrica** (GM) è definita come:
    $$
    M_G(x,y) = \sqrt{xy}
    $$

### Dimostrazione della Disuguaglianza AM-GM
La disuguaglianza afferma che la media geometrica di due numeri positivi è sempre minore o uguale alla loro media aritmetica.
$$\sqrt{xy} \le \frac{x+y}{2}$$
con l'uguaglianza che si verifica se e solo se $x=y$.

**Dimostrazione**:
La dimostrazione parte da un principio fondamentale: il quadrato di un qualsiasi numero reale è sempre non negativo.
Consideriamo i numeri reali $\sqrt{x}$ e $\sqrt{y}$ (che esistono poiché $x,y > 0$). La loro differenza è un numero reale, e il suo quadrato è non negativo:
$$(\sqrt{x} - \sqrt{y})^2 \ge 0$$
Sviluppiamo il quadrato del binomio:
$$(\sqrt{x})^2 - 2\sqrt{x}\sqrt{y} + (\sqrt{y})^2 \ge 0$$
Semplificando si ottiene:
$$x - 2\sqrt{xy} + y \ge 0$$
Aggiungiamo $2\sqrt{xy}$ a entrambi i membri, riordinando l'espressione:
$$x+y \ge 2\sqrt{xy}$$
Dividiamo entrambi i membri per 2 (che è un numero positivo, quindi il verso della disuguaglianza non cambia):
$$\frac{x+y}{2} \ge \sqrt{xy}$$
che è la tesi.

L'uguaglianza si ha se e solo se il punto di partenza era un'uguaglianza, ovvero $(\sqrt{x}-\sqrt{y})^2 = 0$. Questo accade se e solo se $\sqrt{x}-\sqrt{y}=0$, cioè $\sqrt{x}=\sqrt{y}$, che implica $x=y$.