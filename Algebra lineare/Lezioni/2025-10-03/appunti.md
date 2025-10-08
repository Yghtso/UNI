# Basi Canoniche in Spazi Vettoriali

## Base Canonica in uno Spazio di Matrici

Dato lo spazio vettoriale $M(m, n, \mathbb{R})$ delle matrici a $m$ righe ed $n$ colonne con coefficienti in $\mathbb{R}$, la sua **base canonica** è l'insieme di tutte le matrici $E_{ij}$ che hanno un $1$ nella posizione $(i,j)$ e $0$ in tutte le altre posizioni.

Formalmente, sia $(E_{ij})$ la matrice il cui elemento generico $(k,l)$ è dato da:
$$ (E_{ij})_{kl} = \delta_{ik} \delta_{jl} $$
dove $\delta$ è il delta di Kronecker.

Questa base contiene $m \times n$ matrici. Pertanto, la dimensione dello spazio vettoriale $M(m, n, \mathbb{R})$ è:
$$ \dim(M(m, n, \mathbb{R})) = m \cdot n $$

### Esempi di Sottospazi di Matrici Quadrate ($n \times n$)

* **Matrici Diagonali**: Un sottospazio di $M(n, n, \mathbb{R})$ è quello delle matrici diagonali. Una base è formata dalle sole matrici $E_{ii}$ (con $1$ sulla diagonale). La sua dimensione è $n$.
* **Matrici Simmetriche**: Un sottospazio di $M(n, n, \mathbb{R})$ è quello delle matrici simmetriche ($A = A^T$). La dimensione di questo sottospazio è data dal numero di elementi sulla diagonale principale e sopra di essa:
    $$ \dim(\text{Sym}(n, \mathbb{R})) = \frac{n(n+1)}{2} $$
* **Matrici Antisimmetriche**: Un sottospazio di $M(n, n, \mathbb{R})$ è quello delle matrici antisimmetriche ($A = -A^T$). La dimensione è data dal numero di elementi strettamente sopra la diagonale principale:
    $$ \dim(\text{SkewSym}(n, \mathbb{R})) = \frac{n(n-1)}{2} $$

## Base Canonica in uno Spazio di Polinomi

Consideriamo lo spazio vettoriale $\mathbb{R}_n[x]$ dei polinomi a coefficienti reali di grado minore o uguale a $n$.
La sua **base canonica** è l'insieme dei monomi $\{1, x, x^2, \dots, x^n\}$.
Qualsiasi polinomio $p(x) = a_0 + a_1x + a_2x^2 + \dots + a_nx^n$ può essere scritto come combinazione lineare di questi elementi.
La dimensione di questo spazio è:
$$ \dim(\mathbb{R}_n[x]) = n+1 $$

# Algoritmo per il Calcolo dello Span (Spazio Generato)

Dato un insieme di vettori $\{v_1, v_2, \dots, v_k\}$ in uno spazio vettoriale $V$, lo **span** (o spazio generato) è l'insieme di tutte le loro possibili combinazioni lineari:
$$ \text{Span}(v_1, \dots, v_k) = \{ \alpha_1 v_1 + \dots + \alpha_k v_k \mid \alpha_i \in \mathbb{R} \} $$
Per trovare una base per lo span, si può usare il seguente algoritmo.

## Algoritmo di Estrazione di una Base

1.  **Costruire la Matrice**: Si dispongono i vettori come **colonne** (o righe) di una matrice $A$.
2.  **Riduzione a Scala**: Si applica l'algoritmo di eliminazione di Gauss per ridurre la matrice $A$ in una forma a scala per colonne (o per righe), ottenendo una matrice $S$.
3.  **Identificare i Pivot**: Le colonne (o righe) della matrice originale $A$ che corrispondono alle colonne (o righe) contenenti i pivot nella matrice a scala $S$ formano una base per lo span.

## Principio di Funzionamento

L'algoritmo si basa su un principio fondamentale: le operazioni elementari sulle righe (o colonne) di una matrice non alterano lo spazio generato dalle sue righe (o colonne).

**Principio Formale**: Sia $S = \{v_1, \dots, v_k\}$ un insieme di vettori. Se sostituiamo un vettore $v_j$ con una sua combinazione lineare con un altro vettore del gruppo, $v'_j = v_j + c \cdot v_i$ (con $i \neq j$), lo span non cambia.
$$ \text{Span}(v_1, \dots, v_j, \dots, v_k) = \text{Span}(v_1, \dots, v_j + c \cdot v_i, \dots, v_k) $$

**Dimostrazione (informale)**:
* Qualsiasi vettore generato dal nuovo insieme è anche generato dal vecchio, poiché $v'_j$ è esso stesso una combinazione lineare di $v_j$ e $v_i$.
* Viceversa, qualsiasi vettore generato dal vecchio insieme può essere generato dal nuovo, poiché il vettore originale $v_j$ può essere recuperato dal nuovo insieme tramite l'operazione inversa: $v_j = v'_j - c \cdot v_i$.

# Isomorfismo tra Spazi Vettoriali

## Definizione Formale di Isomorfismo

Due spazi vettoriali $V$ e $W$ sullo stesso campo $\mathbb{K}$ si dicono **isomorfi** (scritto $V \cong W$) se esiste un'applicazione lineare $\phi: V \to W$ che è anche **biunivoca** (cioè sia iniettiva che suriettiva).

Un'applicazione con queste proprietà è chiamata **isomorfismo**.

L'isomorfismo conserva tutte le proprietà strutturali dello spazio vettoriale: se $\phi$ è un isomorfismo, allora una base di $V$ viene mappata in una base di $W$. Una conseguenza diretta è che due spazi vettoriali sono isomorfi se e solo se hanno la stessa dimensione.
$$ V \cong W \iff \dim(V) = \dim(W) $$

## Definizione della Funzione Isomorfismo

Siano $V$ e $W$ due spazi vettoriali sul campo $\mathbb{K}$. Una funzione $\phi: V \to W$ è un isomorfismo se soddisfa le seguenti tre proprietà:

1.  **Linearità (Additività)**: $\forall v_1, v_2 \in V, \phi(v_1 + v_2) = \phi(v_1) + \phi(v_2)$.
2.  **Linearità (Omogeneità)**: $\forall v \in V, \forall \lambda \in \mathbb{K}, \phi(\lambda v) = \lambda \phi(v)$.
3.  **Biunivocità**: La funzione $\phi$ è sia iniettiva ($\ker(\phi) = \{0_V\}$) che suriettiva ($\text{Im}(\phi) = W$).

## Esempio: Spazio Vettoriale $\mathbb{R}^{mn}$ e Spazio di Matrici $M(m,n,\mathbb{R})$

Lo spazio vettoriale delle matrici $M(m,n,\mathbb{R})$ è isomorfo allo spazio vettoriale euclideo $\mathbb{R}^{mn}$ perché entrambi hanno dimensione $m \cdot n$.
Un possibile isomorfismo $\phi: M(m,n,\mathbb{R}) \to \mathbb{R}^{mn}$ è la funzione che rende vettore una matrice mettendo le sue colonne (o righe) una dopo l'altra. Per esempio, per $M(2,2,\mathbb{R}) \to \mathbb{R}^4$:
$$ \phi \left( \begin{pmatrix} a & b \\ c & d \end{pmatrix} \right) = (a, c, b, d) \quad \text{(vettorizzazione per colonne)} $$
Questa applicazione è lineare e biunivoca.

## Isomorfismi Non Canonici

Un isomorfismo si dice **non canonico** quando la sua definizione dipende da una scelta arbitraria, tipicamente la scelta di una base.

Mentre spazi come $M(m,n,\mathbb{R})$ hanno una base "naturale" (la base canonica), molti spazi vettoriali non ce l'hanno. L'isomorfismo tra uno spazio vettoriale $V$ di dimensione $n$ e $\mathbb{R}^n$ è l'esempio fondamentale di isomorfismo non canonico.

**Definizione Formale**: Sia $V$ uno spazio vettoriale di dimensione $n$ e sia $\mathcal{B} = \{v_1, \dots, v_n\}$ una sua **base scelta arbitrariamente**. L'isomorfismo delle coordinate rispetto alla base $\mathcal{B}$ è la funzione $\phi_{\mathcal{B}}: V \to \mathbb{R}^n$ che associa ad ogni vettore $v \in V$ il vettore delle sue coordinate rispetto a $\mathcal{B}$.
$$ \text{Se } v = c_1 v_1 + \dots + c_n v_n, \text{ allora } \phi_{\mathcal{B}}(v) = (c_1, \dots, c_n) $$
Questo isomorfismo è non canonico perché se scegliessimo una base diversa $\mathcal{B}'$, otterremmo un isomorfismo diverso $\phi_{\mathcal{B}'}$. Non esiste una scelta "privilegiata" o "naturale" di base per uno spazio vettoriale astratto.

**Esempio**: Lo spazio duale $V^*$ di uno spazio vettoriale $V$ a dimensione finita è isomorfo a $V$ (poiché $\dim(V^*) = \dim(V)$). Tuttavia, non esiste un isomorfismo canonico (naturale) tra $V$ e $V^*$. Ogni isomorfismo tra di essi richiede la scelta di una base per $V$ e della sua corrispondente base duale.