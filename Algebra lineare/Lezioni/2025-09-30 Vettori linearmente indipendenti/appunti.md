# Combinazioni Lineari, Indipendenza e Basi

## Combinazione Lineare e Sottospazio Generato (Span)

Dato uno spazio vettoriale $V$ su un campo $\mathbb{K}$, e un insieme finito di vettori $\{v_1, v_2, \dots, v_k\} \subseteq V$, si definisce **combinazione lineare** di questi vettori un qualsiasi vettore $v \in V$ che può essere espresso nella forma:
$$
v = c_1 v_1 + c_2 v_2 + \dots + c_k v_k = \sum_{i=1}^{k} c_i v_i
$$
dove $c_1, c_2, \dots, c_k$ sono scalari appartenenti al campo $\mathbb{K}$.

L'insieme di **tutte** le possibili combinazioni lineari che si possono formare con i vettori $\{v_1, \dots, v_k\}$ è un sottospazio vettoriale di $V$. Questo sottospazio è chiamato **sottospazio generato** dai vettori, o più comunemente **Span**, e si denota con $Span(v_1, \dots, v_k)$.
$$
Span(v_1, \dots, v_k) = \left\{ \sum_{i=1}^{k} c_i v_i \mid c_1, \dots, c_k \in \mathbb{K} \right\}
$$
Lo Span è il più piccolo sottospazio vettoriale di $V$ che contiene i vettori $v_1, \dots, v_k$.
## Dipendenza e Indipendenza Lineare

Consideriamo un insieme di vettori $\{v_1, v_2, \dots, v_k\}$. È possibile che alcuni di questi vettori siano "superflui" o "ridondanti" per generare lo Span.

Ad esempio, se un vettore $v_k$ può essere scritto come combinazione lineare degli altri vettori dell'insieme:
$$
v_k = c_1 v_1 + c_2 v_2 + \dots + c_{k-1} v_{k-1}
$$
allora questo vettore non aggiunge nulla di nuovo allo Span. Qualsiasi combinazione lineare che includa $v_k$ può essere riscritta usando solo i primi $k-1$ vettori. Di conseguenza, lo Span rimane invariato se rimuoviamo $v_k$:
$$
Span(v_1, \dots, v_{k-1}, v_k) = Span(v_1, \dots, v_{k-1})
$$
Quando questo accade, l'insieme di vettori è detto **linearmente dipendente**.

Questo ci porta a una definizione più formale e rigorosa, che si basa sulla combinazione lineare uguale al vettore nullo.

### Definizione Formale di Vettori Linearmente Indipendenti

Un insieme di vettori $\{v_1, v_2, \dots, v_k\}$ si dice **linearmente indipendente** se l'unica combinazione lineare di questi vettori che produce il vettore nullo ($0_V$) è quella in cui tutti i coefficienti sono nulli.
In altre parole, l'equazione vettoriale:
$$
c_1 v_1 + c_2 v_2 + \dots + c_k v_k = 0_V
$$
ammette come **unica soluzione** $c_1 = c_2 = \dots = c_k = 0$.

Se, al contrario, esiste almeno una soluzione con almeno un coefficiente non nullo, allora l'insieme di vettori è detto **linearmente dipendente**. Un insieme è linearmente dipendente se e solo se almeno uno dei suoi vettori può essere espresso come combinazione lineare degli altri.

L'indipendenza lineare garantisce che nessun vettore dell'insieme sia ridondante.
## Basi di uno Spazio Vettoriale

Una **base** di uno spazio vettoriale $V$ è un insieme di vettori che funge da "sistema di coordinate" per lo spazio. È un insieme "ottimale" di generatori: abbastanza grande da poter generare ogni vettore dello spazio, ma abbastanza piccolo da non contenere vettori superflui.

### Definizione Formale di Base

Un sottoinsieme $\mathcal{B} = \{v_1, v_2, \dots, v_n\}$ di vettori di uno spazio vettoriale $V$ è una **base** di $V$ se soddisfa entrambe le seguenti condizioni:

1.  **I vettori di $\mathcal{B}$ sono linearmente indipendenti.**
    (Non ci sono ridondanze nell'insieme).

2.  **I vettori di $\mathcal{B}$ generano l'intero spazio $V$.**
    Ovvero, $Span(\mathcal{B}) = V$.
    (L'insieme è sufficientemente grande da "coprire" tutto lo spazio).

Una proprietà fondamentale delle basi è che ogni vettore $v \in V$ può essere scritto in **modo unico** come combinazione lineare dei vettori della base $\mathcal{B}$.

### La Base Canonica (o Standard)

Per molti spazi vettoriali esiste una base che è considerata la più semplice o "naturale". Questa base è chiamata **canonica** o **standard**.

L'esempio più comune è la base canonica dello spazio vettoriale $\mathbb{R}^n$. Essa è costituita da $n$ vettori, denotati con $e_1, e_2, \dots, e_n$, dove ogni vettore $e_i$ ha un $1$ nella $i$-esima posizione e $0$ in tutte le altre.

**Esempio in $\mathbb{R}^3$**:
La base canonica è l'insieme $\mathcal{E} = \{e_1, e_2, e_3\}$ dove:
$$
e_1 = \begin{pmatrix} 1 \\ 0 \\ 0 \end{pmatrix}, \quad e_2 = \begin{pmatrix} 0 \\ 1 \\ 0 \end{pmatrix}, \quad e_3 = \begin{pmatrix} 0 \\ 0 \\ 1 \end{pmatrix}
$$
Questi tre vettori sono chiaramente linearmente indipendenti e qualsiasi vettore di $\mathbb{R}^3$ può essere scritto come loro combinazione lineare in modo immediato. Ad esempio, il vettore $v = (a, b, c)$ si scrive come:
$$
v = \begin{pmatrix} a \\ b \\ c \end{pmatrix} = a \begin{pmatrix} 1 \\ 0 \\ 0 \end{pmatrix} + b \begin{pmatrix} 0 \\ 1 \\ 0 \end{pmatrix} + c \begin{pmatrix} 0 \\ 0 \\ 1 \end{pmatrix} = a e_1 + b e_2 + c e_3
$$