# Matrici, Sottospazi e Combinazioni Lineari

## Matrici: Definizioni e Operazioni Fondamentali

### Definizione Formale di Matrice

Sia $\mathbb{K}$ un campo (es. $\mathbb{R}$). Una **matrice** $A$ di dimensioni $m \times n$ (si legge "m per n") a coefficienti in $\mathbb{K}$ è una tabella rettangolare di elementi di $\mathbb{K}$ disposti in $m$ righe e $n$ colonne.
Formalmente, una matrice è una funzione $A: \{1, \dots, m\} \times \{1, \dots, n\} \to \mathbb{K}$. L'elemento che si trova all'intersezione della riga $i$-esima e della colonna $j$-esima si denota con $a_{ij}$ o $(A)_{ij}$.

La matrice si rappresenta come:
$$
A = \begin{pmatrix}
a_{11} & a_{12} & \cdots & a_{1n} \\
a_{21} & a_{22} & \cdots & a_{2n} \\
\vdots & \vdots & \ddots & \vdots \\
a_{m1} & a_{m2} & \cdots & a_{mn}
\end{pmatrix}
$$
L'insieme di tutte le matrici $m \times n$ a coefficienti in $\mathbb{K}$ si denota con $M(m, n, \mathbb{K})$. Se $m=n$, le matrici si dicono **quadrate** e l'insieme si denota con $M(n, \mathbb{K})$.

### Operazioni nello Spazio Vettoriale delle Matrici

L'insieme $M(m, n, \mathbb{K})$ è uno spazio vettoriale sul campo $\mathbb{K}$ con le seguenti operazioni:

1.  **Somma tra Matrici**: Date due matrici $A, B \in M(m, n, \mathbb{K})$ con $A=(a_{ij})$ e $B=(b_{ij})$, la loro somma è la matrice $C = A+B \in M(m, n, \mathbb{K})$ il cui elemento generico è dato da:
    $$
    c_{ij} = a_{ij} + b_{ij}
    $$
    La somma è definita solo per matrici delle stesse dimensioni.

2.  **Moltiplicazione per Scalare**: Data una matrice $A \in M(m, n, \mathbb{K})$ e uno scalare $\lambda \in \mathbb{K}$, il loro prodotto è la matrice $B = \lambda A \in M(m, n, \mathbb{K})$ il cui elemento generico è:
    $$
    b_{ij} = \lambda \cdot a_{ij}
    $$
## Il Vettore Nullo in uno Spazio Vettoriale

In un generico spazio vettoriale $V$, il **vettore nullo** (o elemento neutro della somma), denotato con $0_V$, è quell'unico vettore tale che per ogni $v \in V$ vale la relazione:
$$
v + 0_V = v
$$
L'aspetto del vettore nullo dipende dalla natura dello spazio vettoriale.

**Esempio con le funzioni**:
Consideriamo lo spazio vettoriale $V = F(X, \mathbb{R})$, ovvero l'insieme di tutte le funzioni da un dominio qualsiasi $X$ all'insieme dei numeri reali $\mathbb{R}$.
In questo spazio:
-   I "vettori" sono le funzioni $f: X \to \mathbb{R}$.
-   La "somma" di due vettori $f$ e $g$ è la funzione $(f+g)$ definita da $(f+g)(x) = f(x) + g(x)$ per ogni $x \in X$.

Per trovare il vettore nullo $0_V$, cerchiamo una funzione $z \in V$ tale che per ogni funzione $f \in V$ si abbia $f + z = f$.
Questo significa che per ogni $x \in X$ deve valere:
$$
(f+z)(x) = f(x) \implies f(x) + z(x) = f(x)
$$
Sottraendo $f(x)$ da entrambi i lati, otteniamo $z(x) = 0$ per ogni $x \in X$.
Pertanto, il vettore nullo in questo spazio è la **funzione costantemente nulla**, cioè la funzione che associa il valore 0 a ogni elemento del dominio.
## Sottospazi Vettoriali di Matrici

L'insieme $M(m, n, \mathbb{K})$ contiene numerosi sottospazi vettoriali. Per le matrici quadrate ($m=n$), alcuni esempi notevoli sono:

1.  **Matrici Triangolari Superiori**: L'insieme delle matrici quadrate $A=(a_{ij}) \in M(n, \mathbb{K})$ tali che tutti gli elementi al di sotto della diagonale principale sono nulli.
    Formalmente: $W_{sup} = \{ A \in M(n, \mathbb{K}) \mid a_{ij} = 0 \text{ per } i > j \}$.

2.  **Matrici Triangolari Inferiori**: L'insieme delle matrici quadrate $A=(a_{ij}) \in M(n, \mathbb{K})$ tali che tutti gli elementi al di sopra della diagonale principale sono nulli.
    Formalmente: $W_{inf} = \{ A \in M(n, \mathbb{K}) \mid a_{ij} = 0 \text{ per } i < j \}$.

3.  **Matrici Diagonali**: L'insieme delle matrici quadrate in cui gli elementi non diagonali sono tutti nulli. Questo sottospazio è l'intersezione dei due precedenti: $W_{diag} = W_{sup} \cap W_{inf}$.
    Formalmente: $W_{diag} = \{ A \in M(n, \mathbb{K}) \mid a_{ij} = 0 \text{ per } i \neq j \}$.

4.  **Matrici Simmetriche**: L'insieme delle matrici quadrate $A$ che sono uguali alla propria trasposta ($A = A^T$).
    Formalmente: $W_{sym} = \{ A \in M(n, \mathbb{K}) \mid a_{ij} = a_{ji} \text{ per ogni } i,j \}$.

5.  **Matrici Antisimmetriche**: L'insieme delle matrici quadrate $A$ tali che la loro trasposta è uguale al loro opposto ($A = -A^T$). Questo implica che gli elementi sulla diagonale principale sono tutti nulli ($a_{ii}=0$).
    Formalmente: $W_{anti} = \{ A \in M(n, \mathbb{K}) \mid a_{ij} = -a_{ji} \text{ per ogni } i,j \}$.
## La Traccia di una Matrice e il Sottospazio $M_c$

### Definizione di Traccia

La **traccia** di una matrice quadrata $A \in M(n, \mathbb{K})$, denotata con $Tr(A)$, è la somma degli elementi sulla sua diagonale principale.
$$
Tr(A) = \sum_{i=1}^{n} a_{ii} = a_{11} + a_{22} + \dots + a_{nn}
$$

### L'insieme $M_c$ è un sottospazio?

Consideriamo l'insieme $M_c = \{A \in M(n, \mathbb{K}) \mid Tr(A) = c\}$, dove $c \in \mathbb{R}$. Stabiliamo se $M_c$ è un sottospazio vettoriale di $M(n, \mathbb{K})$. Per farlo, verifichiamo le tre proprietà dei sottospazi.

1.  **Presenza del vettore nullo**: Il vettore nullo nello spazio delle matrici è la matrice nulla $O$, i cui elementi sono tutti zero. La sua traccia è $Tr(O) = \sum_{i=1}^n 0 = 0$.
    Affinché $O \in M_c$, deve essere $Tr(O) = c$, ovvero $0=c$.
    -   Se $c \neq 0$, la matrice nulla non appartiene a $M_c$, quindi $M_c$ **non è** un sottospazio vettoriale.
    -   Se $c = 0$, la condizione è soddisfatta. Procediamo con la verifica delle altre due proprietà per il caso $M_0$.

2.  **Chiusura rispetto alla somma (per $c=0$)**: Siano $A, B \in M_0$. Questo significa $Tr(A)=0$ e $Tr(B)=0$. Consideriamo la loro somma $A+B$:
    $$
    Tr(A+B) = Tr(A) + Tr(B) = 0 + 0 = 0
    $$
    Quindi $A+B \in M_0$. La proprietà è verificata.

3.  **Chiusura rispetto al prodotto per scalare (per $c=0$)**: Sia $A \in M_0$ e $\lambda \in \mathbb{K}$.
    $$
    Tr(\lambda A) = \lambda \cdot Tr(A) = \lambda \cdot 0 = 0
    $$
    Quindi $\lambda A \in M_0$. La proprietà è verificata.

**Conclusione**: L'insieme $M_c = \{A \in M(n, \mathbb{K}) \mid Tr(A) = c\}$ è un sottospazio vettoriale di $M(n, \mathbb{K})$ **se e solo se** $c=0$.
## Generare Sottospazi: Combinazioni Lineari e Span

### Come si generano i sottospazi?

Teoricamente, tutti i sottospazi di uno spazio vettoriale $V$ possono essere generati partendo da un insieme di vettori di $V$. Il metodo consiste nel prendere un insieme di vettori e considerare l'insieme di **tutte le loro possibili somme pesate** (combinazioni lineari). Questo nuovo insieme costituisce il più piccolo sottospazio vettoriale di $V$ che contiene i vettori di partenza.

### Combinazione Lineare

Dati $k$ vettori $v_1, v_2, \dots, v_k$ di uno spazio vettoriale $V$ e $k$ scalari $\lambda_1, \lambda_2, \dots, \lambda_k \in \mathbb{K}$, si definisce **combinazione lineare** di questi vettori il vettore $v$ dato da:
$$
v = \lambda_1 v_1 + \lambda_2 v_2 + \dots + \lambda_k v_k = \sum_{i=1}^{k} \lambda_i v_i
$$

### Lo Span (o Sottospazio Generato)

Dato un insieme di vettori $S = \{v_1, v_2, \dots, v_k\} \subseteq V$, si definisce **Span** (o **sottospazio generato**) di $S$ l'insieme di tutte le possibili combinazioni lineari dei vettori in $S$. Si denota con $Span(S)$ o $Span(v_1, \dots, v_k)$.
$$
Span(v_1, \dots, v_k) = \left\{ \sum_{i=1}^{k} \lambda_i v_i \mid \lambda_1, \dots, \lambda_k \in \mathbb{K} \right\}
$$

### Dimostrazione: lo Span è un Sottospazio Vettoriale

Sia $W = Span(v_1, \dots, v_k)$. Dimostriamo che $W$ è un sottospazio di $V$.

1.  **Presenza del vettore nullo**: Possiamo ottenere il vettore nullo $0_V$ scegliendo tutti gli scalari nulli:
    $$
    0_V = 0 \cdot v_1 + 0 \cdot v_2 + \dots + 0 \cdot v_k
    $$
    Questa è una combinazione lineare dei vettori dati, quindi $0_V \in W$.

2.  **Chiusura rispetto alla somma**: Siano $u, w$ due vettori generici di $W$. Per definizione di Span, esistono degli scalari $\alpha_i$ e $\beta_i$ tali che:
    $$
    u = \sum_{i=1}^{k} \alpha_i v_i \quad \text{e} \quad w = \sum_{i=1}^{k} \beta_i v_i
    $$
    La loro somma è:
    $$
    u+w = \sum_{i=1}^{k} \alpha_i v_i + \sum_{i=1}^{k} \beta_i v_i = \sum_{i=1}^{k} (\alpha_i + \beta_i) v_i
    $$
    Poiché $\alpha_i + \beta_i$ sono ancora scalari, $u+w$ è una combinazione lineare dei vettori $v_i$, e quindi $u+w \in W$.

3.  **Chiusura rispetto al prodotto per scalare**: Sia $u \in W$ e $\lambda \in \mathbb{K}$. Esistono scalari $\alpha_i$ tali che $u = \sum_{i=1}^{k} \alpha_i v_i$. Il prodotto per scalare è:
    $$
    \lambda u = \lambda \left(\sum_{i=1}^{k} \alpha_i v_i\right) = \sum_{i=1}^{k} (\lambda\alpha_i) v_i
    $$
    Poiché $\lambda\alpha_i$ sono ancora scalari, $\lambda u$ è una combinazione lineare dei vettori $v_i$, e quindi $\lambda u \in W$.

Avendo verificato le tre proprietà, possiamo concludere che lo Span di un qualsiasi insieme di vettori è sempre un sottospazio vettoriale.