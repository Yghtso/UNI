# Kernel, Immagine e Matrice Associata

---

## Definizione Formale di Kernel (Nucleo)

Sia $L: V \to W$ un'applicazione lineare tra due spazi vettoriali $V$ e $W$ (sullo stesso campo $\mathbb{K}$).

Il **Kernel** (o **Nucleo**) di $L$, indicato con $\ker(L)$ o $N(L)$, è il sottoinsieme di $V$ (il dominio) costituito da tutti i vettori che vengono mappati nel vettore nullo $0_W$ del codominio.

$$
\ker(L) := \{ v \in V \mid L(v) = 0_W \}
$$

### Dimostrazione: $\ker(L)$ è un Sottospazio Vettoriale

Per dimostrare che $\ker(L)$ è un sottospazio vettoriale di $V$, dobbiamo verificare le tre proprietà fondamentali.

1.  **Contiene il vettore nullo $0_V$:**
    Dobbiamo verificare se $0_V \in \ker(L)$. Calcoliamo $L(0_V)$.
    Per una proprietà fondamentale di tutte le applicazioni lineari, $L(0_V) = L(0 \cdot v) = 0 \cdot L(v) = 0_W$.
    Poiché $L(0_V) = 0_W$, $0_V$ appartiene al $\ker(L)$.

2.  **Chiusura rispetto alla Somma:**
    Siano $v_1, v_2 \in \ker(L)$. Dobbiamo dimostrare che $(v_1 + v_2) \in \ker(L)$.
    Per ipotesi, $L(v_1) = 0_W$ e $L(v_2) = 0_W$.
    Calcoliamo $L(v_1 + v_2)$. Per la **linearità** (additività) di $L$:
    $$
    L(v_1 + v_2) = L(v_1) + L(v_2) = 0_W + 0_W = 0_W
    $$
    Poiché $L(v_1 + v_2) = 0_W$, $(v_1 + v_2) \in \ker(L)$.

3.  **Chiusura rispetto al Prodotto per Scalare:**
    Sia $v \in \ker(L)$ e $k \in \mathbb{K}$ (uno scalare). Dobbiamo dimostrare che $(k v) \in \ker(L)$.
    Per ipotesi, $L(v) = 0_W$.
    Calcoliamo $L(k v)$. Per la **linearità** (omogeneità) di $L$:
    $$
    L(k v) = k \cdot L(v) = k \cdot 0_W = 0_W
    $$
    Poiché $L(k v) = 0_W$, $(k v) \in \ker(L)$.

Avendo soddisfatto le tre condizioni, $\ker(L)$ è un sottospazio vettoriale di $V$.

---

## Definizione Formale di Immagine

Sia $L: V \to W$ un'applicazione lineare.

L'**Immagine** di $L$, indicata con $\text{Im}(L)$ o $L(V)$, è il sottoinsieme di $W$ (il codominio) costituito da tutti i vettori che sono "raggiunti" dall'applicazione $L$. È l'insieme di tutti i possibili output di $L$.

$$
\text{Im}(L) := \{ w \in W \mid \exists v \in V \text{ tale che } L(v) = w \}
$$

### Dimostrazione: $\text{Im}(L)$ è un Sottospazio Vettoriale

Per dimostrare che $\text{Im}(L)$ è un sottospazio vettoriale di $W$, verifichiamo le tre proprietà.

1.  **Contiene il vettore nullo $0_W$:**
    Dobbiamo verificare se $0_W \in \text{Im}(L)$. Per farlo, dobbiamo trovare un vettore $v \in V$ tale che $L(v) = 0_W$.
    Sappiamo che $L(0_V) = 0_W$.
    Poiché $0_V \in V$, abbiamo trovato un vettore (il vettore nullo del dominio) la cui immagine è $0_W$.
    Quindi $0_W \in \text{Im}(L)$.

2.  **Chiusura rispetto alla Somma:**
    Siano $w_1, w_2 \in \text{Im}(L)$. Dobbiamo dimostrare che $(w_1 + w_2) \in \text{Im}(L)$.
    Per ipotesi (definizione di immagine):
    * $w_1 \in \text{Im}(L) \implies \exists v_1 \in V \text{ t.c. } L(v_1) = w_1$.
    * $w_2 \in \text{Im}(L) \implies \exists v_2 \in V \text{ t.c. } L(v_2) = w_2$.
    Consideriamo la somma $w_1 + w_2$.
    $$
    w_1 + w_2 = L(v_1) + L(v_2)
    $$
    Per la **linearità** di $L$:
    $$
    w_1 + w_2 = L(v_1 + v_2)
    $$
    Poiché $V$ è uno spazio vettoriale, $(v_1 + v_2) \in V$.
    Abbiamo trovato un vettore in $V$ (cioè $v_1+v_2$) la cui immagine è $w_1+w_2$.
    Quindi $(w_1 + w_2) \in \text{Im}(L)$.

3.  **Chiusura rispetto al Prodotto per Scalare:**
    Sia $w \in \text{Im}(L)$ e $k \in \mathbb{K}$. Dobbiamo dimostrare che $(k w) \in \text{Im}(L)$.
    Per ipotesi, $\exists v \in V \text{ t.c. } L(v) = w$.
    Consideriamo il prodotto $k w$.
    $$
    k w = k \cdot L(v)
    $$
    Per la **linearità** di $L$:
    $$
    k w = L(k v)
    $$
    Poiché $V$ è uno spazio vettoriale, $(k v) \in V$.
    Abbiamo trovato un vettore in $V$ (cioè $kv$) la cui immagine è $kw$.
    Quindi $(k w) \in \text{Im}(L)$.

Avendo soddisfatto le tre condizioni, $\text{Im}(L)$ è un sottospazio vettoriale di $W$.

---

## Teorema: Matrice Associata a un'Applicazione Lineare

Siano $V$ e $W$ due spazi vettoriali di dimensione finita.
Sia $\dim(V) = n$ e $\dim(W) = m$.
Sia $\mathcal{B} = \{b_1, \dots, b_n\}$ una base ordinata di $V$.
Sia $\mathcal{C} = \{c_1, \dots, c_m\}$ una base ordinata di $W$.
Sia $L: V \to W$ un'applicazione lineare.

> **Teorema (Esistenza e Unicità della Matrice Associata)**
> Esiste **una ed una sola** matrice $A \in M_{m,n}(\mathbb{K})$, denotata con $A = M_{\mathcal{C}}^{\mathcal{B}}(L)$, tale che per ogni vettore $v \in V$:
> $$
 [L(v)]_{\mathcal{C}} = A \cdot [v]_{\mathcal{B}}
 $$
> Dove $[v]_{\mathcal{B}}$ è il vettore colonna delle coordinate di $v$ rispetto alla base $\mathcal{B}$, e $[L(v)]_{\mathcal{C}}$ è il vettore colonna delle coordinate di $L(v)$ rispetto alla base $\mathcal{C}$.

### Dimostrazione Formale

#### 1. Esistenza e Struttura (Costruzione della Matrice)

Per il teorema di determinazione univoca, l'applicazione $L$ è completamente definita da come agisce sui vettori della base $\mathcal{B} = \{b_1, \dots, b_n\}$.

Per ogni $j = 1, \dots, n$, il vettore $L(b_j)$ è un elemento di $W$.
Dato che $\mathcal{C} = \{c_1, \dots, c_m\}$ è una base di $W$, possiamo scrivere $L(b_j)$ in modo **unico** come combinazione lineare dei vettori di $\mathcal{C}$:
$$
L(b_j) = a_{1j}c_1 + a_{2j}c_2 + \dots + a_{mj}c_m = \sum_{i=1}^m a_{ij}c_i
$$
Il vettore colonna delle coordinate di $L(b_j)$ rispetto alla base $\mathcal{C}$ è quindi:
$$
[L(b_j)]_{\mathcal{C}} = \begin{pmatrix} a_{1j} \\ a_{2j} \\ \vdots \\ a_{mj} \end{pmatrix}
$$
**Definiamo (Struttura)** la matrice $A = M_{\mathcal{C}}^{\mathcal{B}}(L)$ come la matrice $m \times n$ che ha questi vettori coordinati come sue colonne:
$$
A := \left[ [L(b_1)]_{\mathcal{C}} \mid [L(b_2)]_{\mathcal{C}} \mid \dots \mid [L(b_n)]_{\mathcal{C}} \right]
$$
Questa costruzione prova l'**esistenza** di $A$ e ne definisce la **struttura**.

**Verifica (L'equazione è soddisfatta):**
Ora, prendiamo un vettore *generico* $v \in V$.
Scriviamolo nella base $\mathcal{B}$: $v = \alpha_1 b_1 + \dots + \alpha_n b_n$.
Il suo vettore di coordinate è $[v]_{\mathcal{B}} = (\alpha_1, \dots, \alpha_n)^T$.
Calcoliamo $L(v)$ e poi le sue coordinate $[L(v)]_{\mathcal{C}}$:
$$
L(v) = L\left(\sum_{j=1}^n \alpha_j b_j\right)
$$
Per la **linearità** di $L$:
$$
L(v) = \sum_{j=1}^n \alpha_j L(b_j)
$$
Ora calcoliamo le coordinate rispetto a $\mathcal{C}$. L'operatore di coordinate $[ \cdot ]_{\mathcal{C}}$ è anch'esso lineare:
$$
[L(v)]_{\mathcal{C}} = \left[ \sum_{j=1}^n \alpha_j L(b_j) \right]_{\mathcal{C}} = \sum_{j=1}^n \alpha_j [L(b_j)]_{\mathcal{C}}
$$
Sostituiamo $A_j$ (la $j$-esima colonna di $A$) al posto di $[L(b_j)]_{\mathcal{C}}$:
$$
[L(v)]_{\mathcal{C}} = \sum_{j=1}^n \alpha_j A_j = \alpha_1 A_1 + \alpha_2 A_2 + \dots + \alpha_n A_n
$$
Questa espressione (somma delle colonne di $A$ pesate per $\alpha_j$) è la **definizione stessa** del prodotto matrice-vettore $A \cdot [v]_{\mathcal{B}}$:
$$
A \cdot [v]_{\mathcal{B}} = \left[ A_1 \mid \dots \mid A_n \right] \begin{pmatrix} \alpha_1 \\ \vdots \\ \alpha_n \end{pmatrix} = \sum_{j=1}^n \alpha_j A_j
$$
Abbiamo quindi dimostrato che $[L(v)]_{\mathcal{C}} = A \cdot [v]_{\mathcal{B}}$ per ogni $v$.

#### 2. Unicità

Supponiamo che esista un'altra matrice $B \in M_{m,n}(\mathbb{K})$, $B \neq A$, tale che $[L(v)]_{\mathcal{C}} = B \cdot [v]_{\mathcal{B}}$ per ogni $v \in V$.
Questa proprietà deve valere in particolare per i vettori della base $v = b_j$ (per $j=1, \dots, n$).
Il vettore di coordinate di $b_j$ rispetto alla base $\mathcal{B}$ è $e_j$ (il $j$-esimo vettore della base canonica di $\mathbb{K}^n$):
$$
[b_j]_{\mathcal{B}} = \begin{pmatrix} 0 \\ \vdots \\ 1 \\ \vdots \\ 0 \end{pmatrix} \leftarrow (j\text{-esima posizione})
$$
Applichiamo la proprietà di $B$ a $b_j$:
$$
[L(b_j)]_{\mathcal{C}} = B \cdot [b_j]_{\mathcal{B}} = B \cdot e_j
$$
Il prodotto $B \cdot e_j$ è un'operazione nota che estrae la $j$-esima colonna della matrice $B$.
Quindi: 
$[L(b_j)]_{\mathcal{C}} = (\text{j-esima colonna di } B)$.
Ma per costruzione della nostra matrice $A$, avevamo definito la $j$-esima colonna di $A$ proprio come $[L(b_j)]_{\mathcal{C}}$.
$$
(\text{$j$-esima colonna di } B) = [L(b_j)]_{\mathcal{C}} = (\text{$j$-esima colonna di } A)
$$
Questo deve valere per tutte le colonne $j = 1, \dots, n$.
Se $A$ e $B$ hanno tutte le colonne uguali, allora $A = B$.
Questo contraddice l'ipotesi $B \neq A$. L'unica matrice che soddisfa la condizione è la matrice $A$ che abbiamo costruito.

*C.V.D.*