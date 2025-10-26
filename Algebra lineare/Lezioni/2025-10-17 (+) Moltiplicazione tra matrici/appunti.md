# Rango, Soluzioni e Moltiplicazione Matriciale

---

## Teorema: Uguaglianza Rango per Righe e Rango per Colonne

Vogliamo dimostrare formalmente che, data una matrice $A$, la dimensione dello spazio generato dalle sue righe è uguale alla dimensione dello spazio generato dalle sue colonne.

**Definizioni Preliminari:**
Sia $A \in M_{m,n}(\mathbb{K})$.
1.  **Spazio delle Colonne (Immagine):** $C(A) = \text{Span}\{a_1, \dots, a_n\} \subseteq \mathbb{K}^m$, dove $a_j$ sono le colonne di $A$.
    La sua dimensione è il **rango per colonne**: $r_C(A) = \dim(C(A))$.
2.  **Spazio delle Righe:** $R(A) = \text{Span}\{r_1, \dots, r_m\} \subseteq \mathbb{K}^n$, dove $r_i$ sono le righe di $A$.
    La sua dimensione è il **rango per righe**: $r_R(A) = \dim(R(A))$.

**Utilizzo della Trasposta:**
Consideriamo la matrice trasposta $A^T \in M_{n,m}(\mathbb{K})$.
* Le colonne di $A^T$ sono (per definizione) le righe di $A$.
* Le righe di $A^T$ sono (per definizione) le colonne di $A$.

Di conseguenza:
* Lo spazio delle colonne di $A^T$ è lo spazio delle righe di $A$: $C(A^T) = R(A)$.
* Lo spazio delle righe di $A^T$ è lo spazio delle colonne di $A$: $R(A^T) = C(A)$.

**Dimostrazione Formale:**
Per definizione, il **rango** di una matrice (quando non specificato) è il rango *per colonne*.
$$
\text{rank}(A) := r_C(A) = \dim(C(A))
$$
$$
\text{rank}(A^T) := r_C(A^T) = \dim(C(A^T))
$$
Dall'osservazione precedente, $C(A^T) = R(A)$, quindi $\text{rank}(A^T) = \dim(R(A)) = r_R(A)$.

Stiamo cercando di dimostrare $r_C(A) = r_R(A)$, che equivale a dimostrare:
$$
\text{rank}(A) = \text{rank}(A^T)
$$

Questa uguaglianza deriva da un risultato fondamentale dell'algebra lineare, spesso dimostrato tramite il **Teorema della Dimensione (Rango-Nullità)** e l'analisi degli spazi ortogonali (Teorema Fondamentale dell'Algebra Lineare, Parte 1).

Una dimostrazione (che omettiamo per brevità, ma che si basa sulla riduzione di Gauss) stabilisce che le operazioni elementari sulle righe non alterano lo spazio delle righe $R(A)$. Inoltre, esse non alterano le relazioni di dipendenza lineare tra le colonne.
Se $r$ è il numero di *pivot* nella forma a scala di $A$:
1.  Le $r$ righe non nulle della forma a scala sono una base per $R(A)$. Quindi $\dim(R(A)) = r$.
2.  Le $r$ colonne di $A$ che corrispondono alle posizioni dei pivot nella forma a scala sono una base per $C(A)$. Quindi $\dim(C(A)) = r$.

Avendo dimostrato $\dim(C(A)) = r$ e $\dim(R(A)) = r$, concludiamo $\dim(C(A)) = \dim(R(A))$.

Sostituendo le definizioni basate sulla trasposta:
$$
\text{rank}(A) = \dim(C(A)) = \dim(R(A)) = \dim(C(A^T)) = \text{rank}(A^T)
$$
*C.V.D.*

---

## Definizione Formale dei Sottospazi delle Soluzioni

Consideriamo un sistema $Ax=b$ con $A \in M_{m,n}(\mathbb{K})$, $x \in \mathbb{K}^n$, $b \in \mathbb{K}^m$. Sia $L_A: \mathbb{K}^n \to \mathbb{K}^m$ l'applicazione lineare $L_A(x) = Ax$.

### 1. Sistema Lineare Omogeneo ($Ax = 0$)

L'insieme delle soluzioni è $\Sigma_0 = \{ x \in \mathbb{K}^n \mid Ax = 0 \}$.
Questo insieme è per definizione il **Nucleo** (o Kernel) dell'applicazione lineare $L_A$.
$$
\Sigma_0 = \ker(L_A) = \ker(A)
$$
**Teorema:** $\Sigma_0$ è un **sottospazio vettoriale** di $\mathbb{K}^n$.

**Dimostrazione:**
Dobbiamo verificare le tre proprietà dei sottospazi vettoriali:
1.  **Contiene il vettore nullo:** $A(0_n) = 0_m$. Quindi $0_n \in \Sigma_0$.
2.  **Chiusura rispetto alla somma:** Siano $x_1, x_2 \in \Sigma_0$. Questo significa $Ax_1 = 0$ e $Ax_2 = 0$.
    Consideriamo la somma: $A(x_1 + x_2) = Ax_1 + Ax_2 = 0 + 0 = 0$.
    Quindi $(x_1 + x_2) \in \Sigma_0$.
3.  **Chiusura rispetto al prodotto per scalare:** Sia $x_1 \in \Sigma_0$ e $k \in \mathbb{K}$. Questo significa $Ax_1 = 0$.
    Consideriamo il prodotto: $A(k \cdot x_1) = k \cdot (Ax_1) = k \cdot 0 = 0$.
    Quindi $(k \cdot x_1) \in \Sigma_0$.
Poiché $\Sigma_0$ soddisfa tutte le proprietà, è un sottospazio vettoriale di $\mathbb{K}^n$.

### 2. Sistema Lineare Non Omogeneo ($Ax = b$, con $b \neq 0$)

Assumiamo che il sistema sia *compatibile* (cioè ammetta almeno una soluzione).
Sia $\Sigma_b = \{ x \in \mathbb{K}^n \mid Ax = b \}$.
Sia $x_p \in \Sigma_b$ una *soluzione particolare* (sappiamo che esiste perché il sistema è compatibile).

**Teorema:** $\Sigma_b$ è un **sottospazio affine** di $\mathbb{K}^n$.

**Dimostrazione:**
Dobbiamo dimostrare che $\Sigma_b$ è il traslato di un sottospazio vettoriale. Sia $x$ una qualsiasi soluzione generica in $\Sigma_b$.
Consideriamo la differenza $w = x - x_p$.
Applichiamo $A$ a $w$:
$$
A(w) = A(x - x_p) = Ax - Ax_p
$$
Poiché $x \in \Sigma_b$ e $x_p \in \Sigma_b$, abbiamo $Ax = b$ e $Ax_p = b$.
$$
A(w) = b - b = 0
$$
Questo significa che $w \in \ker(A) = \Sigma_0$.
Ogni soluzione $x$ può essere scritta come $x = x_p + w$, dove $w \in \ker(A)$.

Formalmente, l'insieme delle soluzioni è:
$$
\Sigma_b = \{ x_p + w \mid w \in \ker(A) \} = x_p + \ker(A)
$$
Questa è la definizione formale di un sottospazio affine (varietà lineare) con punto di applicazione $x_p$ e giacitura $W = \ker(A)$.

**Nota:** $\Sigma_b$ non è un sottospazio vettoriale perché $A(0_n) = 0_m \neq b$ (dato $b \neq 0$), quindi $0_n \notin \Sigma_b$.

---

## Definizione Formale di Moltiplicazione tra Matrici

Siano $A \in M_{m,k}(\mathbb{K})$ e $B \in M_{k,n}(\mathbb{K})$.
Il prodotto $C = AB$ è una matrice $C \in M_{m,n}(\mathbb{K})$.

### 1. Definizione come Sommatoria (Elemento per Elemento)

Il generico elemento $c_{ij}$ della matrice $C$, che si trova alla riga $i$ e colonna $j$, è definito come il prodotto scalare tra la $i$-esima riga di $A$ e la $j$-esima colonna di $B$.

$$
c_{ij} = (A)_{i,:} \cdot (B)_{:,j}
$$

In termini di sommatoria, usando gli elementi $a_{ir}$ di $A$ e $b_{rj}$ di $B$:
$$
c_{ij} = \sum_{r=1}^{k} a_{ir} \cdot b_{rj}
$$
(per $i=1, \dots, m$ e $j=1, \dots, n$)

### 2. Definizione come Mappa (Combinazione Lineare di Colonne)

Interpretiamo la matrice $A$ come un'applicazione $L_A: \mathbb{K}^k \to \mathbb{K}^m$.
Scriviamo la matrice $B$ come giustapposizione dei suoi vettori colonna:
$B = [ b_1 | b_2 | \dots | b_n ]$, dove $b_j \in \mathbb{K}^k$.

La matrice prodotto $C = AB$ è la matrice le cui colonne $c_j$ sono il risultato dell'applicazione $L_A$ a ciascuna colonna $b_j$ di $B$.
$$
C = [ c_1 | c_2 | \dots | c_n ]
$$
dove la $j$-esima colonna di $C$ è:
$$
c_j = A \cdot b_j
$$
Ricordando che $A \cdot b_j$ è una combinazione lineare delle colonne di $A$ (siano esse $a_1, \dots, a_k$) con coefficienti dati dagli elementi di $b_j$ (siano essi $b_{1j}, \dots, b_{kj}$):
$$
c_j = \sum_{r=1}^{k} b_{rj} \cdot a_r
$$
Quindi, la $j$-esima colonna della matrice prodotto $C$ è una combinazione lineare delle colonne della matrice $A$, pesata dalla $j$-esima colonna della matrice $B$.

---

## Proprietà della Moltiplicazione Matriciale

Siano $A, B, C$ matrici di dimensioni compatibili per le operazioni indicate, e $k \in \mathbb{K}$ uno scalare.

1.  **Proprietà Associativa:**
    $$
    (AB)C = A(BC)
    $$
    *Dimostrazione (formale, elemento per elemento):*
    Siano $A \in M_{m,n}, B \in M_{n,p}, C \in M_{p,q}$.
    LHS: Sia $D = AB$. $d_{ik} = \sum_{j=1}^n a_{ij} b_{jk}$.
    Sia $E = (AB)C = DC$. $e_{il} = \sum_{k=1}^p d_{ik} c_{kl} = \sum_{k=1}^p \left( \sum_{j=1}^n a_{ij} b_{jk} \right) c_{kl}$.
    RHS: Sia $F = BC$. $f_{jl} = \sum_{k=1}^p b_{jk} c_{kl}$.
    Sia $G = A(BC) = AF$. $g_{il} = \sum_{j=1}^n a_{ij} f_{jl} = \sum_{j=1}^n a_{ij} \left( \sum_{k=1}^p b_{jk} c_{kl} \right)$.
    Distribuendo e riordinando le sommatorie (è lecito perché sono finite):
    $e_{il} = \sum_{k=1}^p \sum_{j=1}^n a_{ij} b_{jk} c_{kl} = \sum_{j=1}^n \sum_{k=1}^p a_{ij} b_{jk} c_{kl} = g_{il}$.
    Poiché $e_{il} = g_{il}$ per ogni $i,l$, $(AB)C = A(BC)$. C.V.D.

2.  **Proprietà Distributiva (a sinistra e a destra):**
    $$
    A(B+C) = AB + AC
    $$
    $$
    (A+B)C = AC + BC
    $$
    *Dimostrazione (distributiva a sinistra):*
    Sia $D = A(B+C)$. L'elemento $d_{ij}$ è:
    $d_{ij} = \sum_{k} a_{ik} (b_{kj} + c_{kj})$
    Per la distributività nel campo $\mathbb{K}$:
    $d_{ij} = \sum_{k} (a_{ik} b_{kj} + a_{ik} c_{kj}) = \sum_{k} a_{ik} b_{kj} + \sum_{k} a_{ik} c_{kj}$
    Questo è $d_{ij} = (AB)_{ij} + (AC)_{ij} = (AB+AC)_{ij}$. C.V.D.

3.  **Compatibilità con il prodotto scalare:**
    $$
    k(AB) = (kA)B = A(kB)
    $$

4.  **Proprietà della Trasposta:**
    $$
    (AB)^T = B^T A^T
    $$
    (Notare l'inversione dell'ordine).

### Proprietà NON Valida: Non Commutatività

La moltiplicazione tra matrici **non è commutativa**. In generale:
$$
AB \neq BA
$$

**Dimostrazione Formale (per Controesempio):**
Per dimostrare che la proprietà $AB=BA$ non è universalmente vera, è sufficiente fornire un singolo controesempio in cui fallisce.

Siano $A, B \in M_{2,2}(\mathbb{R})$:
$$
A = \begin{pmatrix} 1 & 2 \\ 0 & 1 \end{pmatrix} \quad B = \begin{pmatrix} 0 & 1 \\ 1 & 0 \end{pmatrix}
$$
Calcoliamo $AB$:
$$
AB = \begin{pmatrix} 1 & 2 \\ 0 & 1 \end{pmatrix} \begin{pmatrix} 0 & 1 \\ 1 & 0 \end{pmatrix} = \begin{pmatrix} (1\cdot 0 + 2\cdot 1) & (1\cdot 1 + 2\cdot 0) \\ (0\cdot 0 + 1\cdot 1) & (0\cdot 1 + 1\cdot 0) \end{pmatrix} = \begin{pmatrix} 2 & 1 \\ 1 & 0 \end{pmatrix}
$$
Calcoliamo $BA$:
$$
BA = \begin{pmatrix} 0 & 1 \\ 1 & 0 \end{pmatrix} \begin{pmatrix} 1 & 2 \\ 0 & 1 \end{pmatrix} = \begin{pmatrix} (0\cdot 1 + 1\cdot 0) & (0\cdot 2 + 1\cdot 1) \\ (1\cdot 1 + 0\cdot 0) & (1\cdot 2 + 0\cdot 1) \end{pmatrix} = \begin{pmatrix} 0 & 1 \\ 1 & 2 \end{pmatrix}
$$
Poiché $\begin{pmatrix} 2 & 1 \\ 1 & 0 \end{pmatrix} \neq \begin{pmatrix} 0 & 1 \\ 1 & 2 \end{pmatrix}$, abbiamo dimostrato che $AB \neq BA$. C.V.D.