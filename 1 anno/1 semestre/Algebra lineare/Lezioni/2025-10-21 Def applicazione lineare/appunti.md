# Applicazioni Lineari e Basi

---

## Definizione Formale di Applicazione Lineare

Siano $V$ e $W$ due spazi vettoriali definiti sullo stesso campo $\mathbb{K}$ (ad esempio $\mathbb{R}$).

Un'applicazione (o funzione) $L: V \to W$ è chiamata **applicazione lineare** (o *omomorfismo*) se soddisfa simultaneamente due condizioni (le *proprietà di linearità*) per ogni vettore $v_1, v_2 \in V$ e per ogni scalare $k \in \mathbb{K}$:

1.  **Additività:** L'immagine della somma è la somma delle immagini.
    $$
    L(v_1 + v_2) = L(v_1) + L(v_2)
    $$

2.  **Omogeneità (di grado 1):** L'immagine del prodotto per uno scalare è il prodotto dello scalare per l'immagine.
    $$
    L(k \cdot v_1) = k \cdot L(v_1)
    $$

**Nota (Condizione Unificata):**
Le due condizioni possono essere combinate in un'unica condizione equivalente:
$L: V \to W$ è lineare se e solo se $\forall v_1, v_2 \in V$ e $\forall k_1, k_2 \in \mathbb{K}$ vale:
$$
L(k_1 v_1 + k_2 v_2) = k_1 L(v_1) + k_2 L(v_2)
$$
(Questa proprietà si estende per induzione a qualsiasi combinazione lineare finita: $L(\sum \alpha_i v_i) = \sum \alpha_i L(v_i)$).

**Proprietà Immediata:** Se $L$ è lineare, $L(0_V) = 0_W$ (mappa il vettore nullo del dominio nel vettore nullo del codominio).
*Dim: $L(0_V) = L(0 \cdot v) = 0 \cdot L(v) = 0_W$*.

---

## Teorema: Determinazione Univoca tramite Immagini della Base

Questo è un teorema fondamentale che stabilisce che un'applicazione lineare è "rigida": una volta deciso come agisce sui vettori di una base, il suo comportamento su *tutto* lo spazio è fissato.

> **Teorema (di Determinazione Univoca)**
> Siano $V$ e $W$ spazi vettoriali su $\mathbb{K}$.
> Sia $\mathcal{B} = \{b_1, b_2, \dots, b_n\}$ una **base** dello spazio di dominio $V$.
> Siano $w_1, w_2, \dots, w_n$ un insieme di $n$ vettori **arbitrari** (non necessariamente distinti) nello spazio di codominio $W$.
>
> Allora, esiste **una ed una sola** applicazione lineare $L: V \to W$ tale che:
> $$
	L(b_i) = w_i \quad \forall \space i = 1, \dots, n
 $$

### Dimostrazione Formale

La dimostrazione si divide in due parti: **Esistenza** (dimostriamo che *almeno una* $L$ esiste) e **Unicità** (dimostriamo che *al massimo una* $L$ esiste).

#### 1. Esistenza (Costruzione dell'applicazione $L$)

Sia $v$ un generico vettore di $V$.
Poiché $\mathcal{B} = \{b_1, \dots, b_n\}$ è una base di $V$, $v$ può essere scritto in modo **unico** come combinazione lineare dei vettori della base:
$$
v = \alpha_1 b_1 + \alpha_2 b_2 + \dots + \alpha_n b_n = \sum_{i=1}^n \alpha_i b_i
$$
dove gli $\alpha_i \in \mathbb{K}$ sono le coordinate di $v$ rispetto alla base $\mathcal{B}$.

**Definiamo** l'applicazione $L: V \to W$ nel seguente modo:
$$
L(v) := \sum_{i=1}^n \alpha_i w_i
$$
Questa è la nostra *candidata* $L$. Dobbiamo verificare due cose:
a) **$L$ è lineare?**
Siano $v, u \in V$ e $k \in \mathbb{K}$.
$v = \sum \alpha_i b_i$
$u = \sum \beta_i b_i$
$v+u = \sum (\alpha_i + \beta_i) b_i$
$k v = \sum (k \alpha_i) b_i$

* Verifica Additività:
    $L(v+u) = L(\sum (\alpha_i + \beta_i) b_i)$
    Per la nostra definizione di $L$:
    $= \sum (\alpha_i + \beta_i) w_i$
    Per la distributività in $W$:
    $= \sum (\alpha_i w_i + \beta_i w_i) = \sum \alpha_i w_i + \sum \beta_i w_i$
    Per la nostra definizione di $L$:
    $= L(v) + L(u)$. (Additività verificata).

* Verifica Omogeneità:
    $L(k v) = L(\sum (k \alpha_i) b_i)$
    Per la nostra definizione di $L$:
    $= \sum (k \alpha_i) w_i$
    Per l'omogeneità in $W$:
    $= k \sum \alpha_i w_i$
    Per la nostra definizione di $L$:
    $= k L(v)$. (Omogeneità verificata).
    
    Quindi la $L$ che abbiamo costruito è lineare.

b) **$L$ soddisfa la condizione $L(b_i) = w_i$?**
Prendiamo il $j$-esimo vettore della base, $b_j$.
La sua combinazione lineare rispetto alla base $\mathcal{B}$ è:
$b_j = 0 \cdot b_1 + \dots + 1 \cdot b_j + \dots + 0 \cdot b_n$
Le sue coordinate sono $\alpha_i = 0$ per $i \neq j$ e $\alpha_j = 1$.
Applichiamo la nostra definizione di $L$:
$L(b_j) = \sum_{i=1}^n \alpha_i w_i = (0 \cdot w_1 + \dots + 1 \cdot w_j + \dots + 0 \cdot w_n) = w_j$.
La condizione è verificata per ogni $j=1, \dots, n$.

Abbiamo dimostrato che *almeno una* $L$ esiste.

#### 2. Unicità (Dimostrazione per Assurdo)

Supponiamo per assurdo che esistano **due** applicazioni lineari distinte, $L_1$ e $L_2$, che soddisfano la condizione.
Cioè:
* $L_1: V \to W$ è lineare e $L_1(b_i) = w_i$ per ogni $i$.
* $L_2: V \to W$ è lineare e $L_2(b_i) = w_i$ per ogni $i$.
* $L_1 \neq L_2$. (Cioè $\exists v^* \in V$ tale che $L_1(v^*) \neq L_2(v^*)$).

Consideriamo un generico vettore $v \in V$.
Dato che $\mathcal{B}$ è una base, $v = \sum \alpha_i b_i$.
Applichiamo $L_1$ a $v$:
$$
L_1(v) = L_1\left(\sum_{i=1}^n \alpha_i b_i\right)
$$
Per la **linearità** di $L_1$:
$$
= \sum_{i=1}^n \alpha_i L_1(b_i)
$$
Per l'ipotesi su $L_1$:
$$
= \sum_{i=1}^n \alpha_i w_i
$$

Ora applichiamo $L_2$ allo stesso $v$:
$$
L_2(v) = L_2\left(\sum_{i=1}^n \alpha_i b_i\right)
$$
Per la **linearità** di $L_2$:
$$
= \sum_{i=1}^n \alpha_i L_2(b_i)
$$
Per l'ipotesi su $L_2$:
$$
= \sum_{i=1}^n \alpha_i w_i
$$

**Contraddizione:**
Abbiamo dimostrato che per *qualsiasi* $v \in V$, $L_1(v) = \sum \alpha_i w_i$ e $L_2(v) = \sum \alpha_i w_i$.
Ne segue che $L_1(v) = L_2(v)$ per **ogni** $v \in V$.
Questo contraddice la nostra ipotesi che $L_1 \neq L_2$.
L'assurdo è caduto, quindi l'applicazione lineare $L$ è **unica**.

*C.V.D.*

# Ampliamento Rouché-Capelli: Struttura Affine delle Soluzioni

---

## Definizioni Formali

Sia $L: \mathbb{K}^n \to \mathbb{K}^m$ un'applicazione lineare, rappresentata dalla matrice $A \in M_{m,n}(\mathbb{K})$.

1.  **Sistema Lineare (Non Omogeneo):**
    Stiamo cercando le soluzioni $x \in \mathbb{K}^n$ del sistema:
    $$
    Ax = b
    $$
    dove $b \in \mathbb{K}^m$ è il vettore dei termini noti.
    L'insieme delle soluzioni (se non vuoto) è $\Sigma = \{ x \in \mathbb{K}^n \mid Ax = b \}$.

2.  **Sistema Omogeneo Associato:**
    È il sistema ottenuto ponendo $b = 0$:
    $$
    Ax = 0
    $$
    L'insieme delle soluzioni è $\Sigma_0 = \{ w \in \mathbb{K}^n \mid Aw = 0 \}$.
    Come già noto, $\Sigma_0 = \ker(A)$ (il Nucleo di $A$), ed è un **sottospazio vettoriale** di $\mathbb{K}^n$.

## Teorema (Struttura delle Soluzioni)

> **Teorema:**
> Se il sistema $Ax=b$ è **compatibile** (cioè $\Sigma \neq \emptyset$), allora l'insieme delle soluzioni $\Sigma$ è un **sottospazio affine** di $\mathbb{K}^n$.
>
> Formalmente, $\Sigma$ è il traslato del sottospazio vettoriale $\Sigma_0$ (la giacitura) tramite un vettore $x_p$ (la traslazione), dove $x_p$ è una qualsiasi soluzione particolare del sistema.
>
> $$
 \Sigma = x_p + \Sigma_0 = \{ x_p + w \mid w \in \Sigma_0 \}
 $$

### Dimostrazione Formale

Per dimostrare l'uguaglianza $\Sigma = x_p + \Sigma_0$, dobbiamo dimostrare la doppia inclusione $(\subseteq \text{ e } \supseteq)$.

**Ipotesi (HP):** Il sistema è compatibile, quindi $\Sigma \neq \emptyset$.

1.  **Fissare la Traslazione ($x_p$):**
    Dall'ipotesi HP, esiste almeno una soluzione. Scegliamo una qualsiasi di queste soluzioni e chiamiamola **soluzione particolare**, $x_p$.
    $$
    x_p \in \Sigma \implies Ax_p = b
    $$

2.  **Dimostrazione $(\Sigma \subseteq x_p + \Sigma_0)$**
    * Dobbiamo dimostrare che ogni soluzione $x$ del sistema non omogeneo può essere scritta come la somma di $x_p$ e di una soluzione $w$ del sistema omogeneo.
    * Sia $x$ una generica soluzione in $\Sigma$. Per definizione, $Ax = b$.
    * Consideriamo il vettore $w = x - x_p$ (la differenza tra la soluzione generica e la nostra soluzione particolare).
    * Verifichiamo se $w$ appartiene alla giacitura $\Sigma_0$. Per farlo, applichiamo $A$ a $w$:
        $$
        Aw = A(x - x_p)
        $$
    * Per la **linearità** dell'applicazione $A$:
        $$
        Aw = Ax - Ax_p
        $$
    * Poiché $x \in \Sigma$ e $x_p \in \Sigma$, sappiamo che $Ax = b$ e $Ax_p = b$.
        $$
        Aw = b - b = 0
        $$
    * Dato che $Aw = 0$, il vettore $w$ appartiene, per definizione, all'insieme $\Sigma_0$ (le soluzioni del sistema omogeneo).
    * Se $w = x - x_p$, allora $x = x_p + w$.
    * Abbiamo dimostrato che ogni $x \in \Sigma$ può essere scritto come $x_p + w$ con $w \in \Sigma_0$.
    * Questo prova che $\Sigma \subseteq x_p + \Sigma_0$.

3.  **Dimostrazione ($x_p + \Sigma_0 \subseteq \Sigma$)**
    * Dobbiamo dimostrare che qualsiasi vettore $y$ costruito sommando $x_p$ a un elemento della giacitura $\Sigma_0$ è ancora una soluzione del sistema non omogeneo.
    * Sia $y$ un generico elemento di $x_p + \Sigma_0$.
    * Per definizione, $y$ può essere scritto come $y = x_p + w$, dove $w \in \Sigma_0$.
    * Verifichiamo se $y$ appartiene a $\Sigma$. Per farlo, calcoliamo $Ay$:
        $$
        Ay = A(x_p + w)
        $$
    * Per la **linearità** di $A$:
        $$
        Ay = Ax_p + Aw
        $$
    * Conosciamo i valori di entrambi i termini:
        * $Ax_p = b$ (perché $x_p$ è la nostra soluzione particolare fissata).
        * $Aw = 0$ (perché $w$ è, per ipotesi, una soluzione del sistema omogeneo $\Sigma_0$).
    * Sostituendo:
        $$
        Ay = b + 0 = b
        $$
    * Dato che $Ay = b$, il vettore $y$ è, per definizione, una soluzione del sistema non omogeneo, quindi $y \in \Sigma$.
    * Questo prova che $x_p + \Sigma_0 \subseteq \Sigma$.

4.  **Conclusione:**
    Avendo dimostrato entrambe le inclusioni, concludiamo che i due insiemi coincidono:
    $$
    \Sigma = x_p + \Sigma_0
    $$
    Questo dimostra formalmente che l'insieme delle soluzioni $\Sigma$ è un sottospazio affine, la cui **giacitura è $\Sigma_0 = \ker(A)$** (l'insieme delle soluzioni del sistema omogeneo) e la cui **traslazione è una qualsiasi soluzione particolare $x_p$** del sistema $Ax=b$.

*C.V.D.*