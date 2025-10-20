# Sottospazi Affini e Teorema di Rouché-Capelli

---

## Definizione Formale di Sottospazio Affine

Sia $V$ uno spazio vettoriale su un campo $\mathbb{K}$ (ad esempio $\mathbb{R}$).
Un sottoinsieme $S \subseteq V$ è un **sottospazio affine** (o varietà lineare) di $V$ se è il traslato di un sottospazio vettoriale.

Formalmente, $S$ è un sottospazio affine se esiste un vettore $P \in V$ (chiamato *punto di applicazione*) e un sottospazio vettoriale $W \subseteq V$ (chiamato *giacitura*) tali che:

$$
S = P + W = \{ P + w \mid w \in W \}
$$

**Nota:** Un sottospazio vettoriale $W$ è sempre un sottospazio affine (basta scegliere $P = 0_V$, il vettore nullo). Viceversa, un sottospazio affine $S = P+W$ è un sottospazio vettoriale se e solo se $0_V \in S$, il che accade se e solo se $P \in W$.

---

## Teorema di Rouché-Capelli (Parte 1: Struttura delle Soluzioni)

Consideriamo un sistema di $m$ equazioni lineari in $n$ incognite $x_1, \dots, x_n$ a coefficienti nel campo $\mathbb{K}$ (es. $\mathbb{R}$). Possiamo rappresentarlo in forma matriciale come:

$$
Ax = b
$$

Dove:
* $A \in M_{m,n}(\mathbb{K})$ è la matrice dei coefficienti.
* $x \in \mathbb{K}^n$ è il vettore colonna delle incognite.
* $b \in \mathbb{K}^m$ è il vettore colonna dei termini noti.

Sia $\Sigma = \{ x \in \mathbb{K}^n \mid Ax = b \}$ l'insieme delle soluzioni del sistema.

> **Teorema (Struttura delle Soluzioni)**
> Se il sistema $Ax = b$ ammette almeno una soluzione (è *compatibile*), allora l'insieme $\Sigma$ delle sue soluzioni è un **sottospazio affine** di $\mathbb{K}^n$.

**Dimostrazione (parziale):**
Se il sistema è compatibile, esiste almeno una soluzione $x_p \in \mathbb{K}^n$ (detta *soluzione particolare*) tale che $Ax_p = b$.
Sia $x_g$ una qualsiasi altra soluzione, $Ax_g = b$.
Consideriamo la loro differenza:
$A(x_g - x_p) = Ax_g - Ax_p = b - b = 0$.
Questo significa che il vettore $w = x_g - x_p$ è una soluzione del *sistema omogeneo associato* $Ax = 0$.

L'insieme delle soluzioni del sistema omogeneo è il **Kernel** (o Nucleo) dell'applicazione lineare $L_A: \mathbb{K}^n \to \mathbb{K}^m$ associata ad $A$, indicato con $\ker(A)$.
$\ker(A) = \{ w \in \mathbb{K}^n \mid Aw = 0 \}$. Il $\ker(A)$ è un **sottospazio vettoriale** di $\mathbb{K}^n$.

Ogni soluzione $x_g$ può essere scritta come $x_g = x_p + w$, dove $w \in \ker(A)$.
Quindi, l'insieme delle soluzioni è:
$$
\Sigma = \{ x_p + w \mid w \in \ker(A) \} = x_p + \ker(A)
$$
Questa è esattamente la definizione di un sottospazio affine con punto di applicazione $x_p$ e giacitura $W = \ker(A)$.

### Casi Particolari

1.  **Sistema Omogeneo ($b=0$)**:
    Se $b=0$, il sistema è $Ax=0$. Una soluzione particolare è sempre $x_p = 0$.
    L'insieme delle soluzioni è $\Sigma = 0 + \ker(A) = \ker(A)$.
    In questo caso, l'insieme delle soluzioni **è un sottospazio vettoriale** (coincide con la sua giacitura).

2.  **Sistema Non Omogeneo ($b \neq 0$)**:
    Se $b \neq 0$ e il sistema è compatibile, esiste $x_p$ tale che $Ax_p = b$.
    Dato che $b \neq 0$, necessariamente $x_p \neq 0$ (e $x_p \notin \ker(A)$).
    L'insieme delle soluzioni $\Sigma = x_p + \ker(A)$ non contiene il vettore nullo $0$ (perché $A(0) = 0 \neq b$).
    Non contenendo il vettore nullo, $\Sigma$ **è un sottospazio affine ma non è un sottospazio vettoriale**.

---

## Teorema di Rouché-Capelli (Upgrade: Spazio delle Colonne)

La forma matriciale $Ax=b$ può essere interpretata diversamente. Se $A = [v_1 | v_2 | \dots | v_n]$ dove $v_i \in \mathbb{K}^m$ sono i vettori colonna di $A$, e $x = [x_1, \dots, x_n]^T$, allora il prodotto $Ax$ è una combinazione lineare delle colonne di $A$:

$$
Ax = x_1 v_1 + x_2 v_2 + \dots + x_n v_n
$$

L'insieme di tutte le possibili combinazioni lineari delle colonne di $A$ è lo **spazio delle colonne** (o Immagine) di $A$, $C(A)$ o $\text{Im}(A)$:
$C(A) = \text{Span}\{v_1, \dots, v_n\}$.

> **Teorema (Compatibilità e Spazio Colonna)**
> Il sistema $Ax=b$ ammette soluzione se e solo se il vettore dei termini noti $b$ appartiene allo spazio delle colonne $C(A)$ della matrice $A$.
>
> $$
> \exists x \in \mathbb{K}^n \text{ t.c. } Ax=b \quad \iff \quad b \in C(A)
> $$

Questo è un modo alternativo per dire che $b$ deve essere scrivibile come combinazione lineare delle colonne di $A$.

---

## Giacitura e Dimensione di un Sottospazio Affine

### Definizione formale di Giacitura

Sia $S$ un sottospazio affine di $V$. La **giacitura** di $S$, indicata con $W_S$ (o $\vec{S}$), è l'unico sottospazio vettoriale di $V$ tale che $S = P + W_S$ per un qualsiasi $P \in S$.

La giacitura può anche essere definita intrinsecamente a $S$, senza un punto $P$ esterno, come l'insieme delle "differenze" tra i punti di $S$:

$$
W_S = \{ s_1 - s_2 \mid s_1, s_2 \in S \}
$$

### Dimensione di un Sottospazio Affine

> **Definizione (Dimensione)**
> La **dimensione di un sottospazio affine** $S$, indicata con $\dim(S)$, è definita come la dimensione della sua giacitura $W_S$.
>
> $$
> \dim(S) := \dim(W_S)
> $$

**Dimostrazione (Applicata ai sistemi lineari):**
Come visto prima, l'insieme delle soluzioni $\Sigma$ (se non vuoto) è un sottospazio affine $\Sigma = x_p + \ker(A)$.
La giacitura di $\Sigma$ è $W_\Sigma = \ker(A)$.
Pertanto, la dimensione dell'insieme delle soluzioni è:
$$
\dim(\Sigma) = \dim(\ker(A))
$$
Dal **Teorema della Dimensione (o Rango-Nullità)**, sappiamo che per $A \in M_{m,n}$:
$\dim(\text{Im}(A)) + \dim(\ker(A)) = n$ (dove $n$ è il numero di incognite/colonne).

Se chiamiamo $\text{rank}(A) = \dim(\text{Im}(A))$ (rango), allora:
$$
\dim(\Sigma) = \dim(\ker(A)) = n - \text{rank}(A)
$$
L'insieme delle soluzioni $\Sigma$ ha dimensione $n - \text{rank}(A)$. (Questo numero è spesso chiamato la *nullità* di $A$).

---

## Definizione Formale di Rango

Sia $A \in M_{m,n}(\mathbb{K})$ una matrice.

Il **rango per colonne** di $A$ è la dimensione dello spazio delle colonne $C(A)$.
$\text{rank}_C(A) = \dim(C(A)) = \dim(\text{Span}\{v_1, \dots, v_n\})$.
(È il numero massimo di colonne linearmente indipendenti).

Il **rango per righe** di $A$ è la dimensione dello spazio delle righe $R(A)$.
$\text{rank}_R(A) = \dim(R(A))$.
(È il numero massimo di righe linearmente indipendenti).

> **Teorema Fondamentale (Teorema del Rango)**
> Per qualsiasi matrice $A$, il rango per righe e il rango per colonne coincidono.
>
> $$
> \text{rank}_C(A) = \text{rank}_R(A)
> $$

Questa comune dimensione è chiamata semplicemente **rango** (o *caratteristica*) della matrice $A$, e si indica con $\text{rank}(A)$, $r(A)$, $\text{rg}(A)$ o $\rho(A)$.

**Definizione:** Il **rango** di $A$, $\text{rank}(A)$, è la dimensione dello spazio vettoriale generato dalle colonne (o equivalentemente, dalle righe) di $A$.

---

## Teorema di Rouché-Capelli (Strong / Completo)

Sia $Ax=b$ un sistema lineare, con $A \in M_{m,n}(\mathbb{K})$.
Sia $[A|b]$ la **matrice aumentata** (o *completa*), ottenuta aggiungendo $b$ come $(n+1)$-esima colonna ad $A$.

> **Teorema di Rouché-Capelli**
> Il sistema $Ax=b$ ammette soluzioni (è *compatibile*) se e solo se il rango della matrice incompleta $A$ è uguale al rango della matrice completa $[A|b]$.
>
> $$
> \text{Sistema compatibile} \iff \text{rank}(A) = \text{rank}([A|b])
> $$

**Analisi dei casi (se il sistema è compatibile):**
Se $\text{rank}(A) = \text{rank}([A|b]) = r$, allora il sistema ammette soluzioni. Sia $n$ il numero di incognite (colonne di $A$).

1.  **Soluzione Unica**:
    Se $r = n$ (il rango è uguale al numero di incognite), il sistema ammette **una e una sola soluzione**.
    *(Dim: $\dim(\Sigma) = n - r = n - n = 0$. Un sottospazio affine di dimensione 0 è un singolo punto).*

2.  **Infinite Soluzioni**:
    Se $r < n$ (il rango è minore del numero di incognite), il sistema ammette **infinite soluzioni**.
    *(Dim: $\dim(\Sigma) = n - r > 0$. Un sottospazio affine di dimensione positiva contiene infiniti punti).*
    In questo caso, si dice che il sistema ammette $\infty^{n-r}$ soluzioni, dove $n-r$ è la dimensione dello spazio delle soluzioni (il numero di *variabili libere* o *parametri* da cui dipende la soluzione).

**Riepilogo formale dei casi:**
Sia $r = \text{rank}(A)$ e $r' = \text{rank}([A|b])$.
1.  Se $r < r'$: Il sistema è **incompatibile** (nessuna soluzione).
2.  Se $r = r'$: Il sistema è **compatibile**.
    * Se $r = n$: Esiste **una sola soluzione**.
    * Se $r < n$: Esistono **$\infty^{n-r}$ soluzioni**.