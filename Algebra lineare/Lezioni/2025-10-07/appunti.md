# Completamento a Base, Intersezione e Somma di Sottospazi

## Teorema del Completamento a una Base

### Principio e Enunciato Formale

Il **Teorema del Completamento a una Base** afferma che dato uno spazio vettoriale $V$ di dimensione finita $n$, e un qualsiasi insieme di $k$ vettori linearmente indipendenti $\{v_1, v_2, \dots, v_k\}$ con $k \le n$, è sempre possibile trovare altri $n-k$ vettori $\{w_1, w_2, \dots, w_{n-k}\}$ tali che l'insieme unito $\{v_1, \dots, v_k, w_1, \dots, w_{n-k}\}$ formi una base per $V$.

**Principio Base**: L'idea è quella di "arricchire" l'insieme di vettori linearmente indipendenti iniziale aggiungendo, uno alla volta, nuovi vettori che non appartengono allo spazio generato dai vettori già selezionati. Ogni nuovo vettore aggiunto garantisce l'aumento della dimensione dello spazio generato, fino a quando questa non coincide con la dimensione dell'intero spazio $V$.

Formalmente, il processo si basa su questo lemma:
Sia $S = \{u_1, \dots, u_m\}$ un insieme di vettori linearmente indipendenti in $V$. Se $\text{Span}(S) \neq V$, allora esiste un vettore $u_{m+1} \in V$ tale che $u_{m+1} \notin \text{Span}(S)$, e l'insieme $S' = \{u_1, \dots, u_m, u_{m+1}\}$ è ancora linearmente indipendente.

### Algoritmo di Completamento

Sia $V$ uno spazio di dimensione $n$ (ad esempio $\mathbb{R}^n$) e sia $\mathcal{I} = \{v_1, \dots, v_k\}$ un insieme di vettori linearmente indipendenti.

1.  **Scegliere una base nota**: Si considera una base conosciuta di $V$, tipicamente la base canonica $\{e_1, e_2, \dots, e_n\}$.
2.  **Costruire la matrice**: Si costruisce una matrice $A$ le cui colonne sono i vettori dell'insieme $\mathcal{I}$ seguiti dai vettori della base canonica:
    $$ A = [v_1 | \dots | v_k | e_1 | \dots | e_n] $$
3.  **Riduzione a scala**: Si riduce la matrice $A$ a una forma a scala per colonne (o per righe) utilizzando l'eliminazione di Gauss.
4.  **Estrazione della base**: Le colonne della matrice *originale* $A$ che corrispondono alle colonne contenenti i pivot nella matrice ridotta formano una base per $V$. Poiché i primi $k$ vettori $\{v_1, \dots, v_k\}$ sono linearmente indipendenti, i primi $k$ pivot si troveranno necessariamente nelle prime $k$ colonne. Le restanti $n-k$ colonne con pivot corrisponderanno ai vettori della base canonica necessari per completare la base.

Questo algoritmo funziona perché la riduzione a scala preserva le relazioni di dipendenza lineare tra le colonne. Se una colonna è combinazione lineare delle precedenti, lo rimarrà anche dopo la riduzione. Aggiungere i vettori della base canonica garantisce di avere un insieme di generatori per l'intero spazio, e l'algoritmo seleziona solo quelli necessari per "colmare i buchi" nello span dei vettori iniziali.

## Intersezione e Somma di Sottospazi

Siano $A$ e $B$ due sottospazi vettoriali di un medesimo spazio vettoriale $V$ su un campo $\mathbb{K}$.

### Intersezione di Sottospazi ($A \cap B$)

L'intersezione di $A$ e $B$, denotata $A \cap B$, è l'insieme di tutti i vettori che appartengono sia ad $A$ che a $B$.
$$ A \cap B = \{ v \in V \mid v \in A \text{ e } v \in B \} $$

**Teorema**: L'intersezione di due sottospazi è sempre un sottospazio.

**Dimostrazione**: Per dimostrare che $A \cap B$ è un sottospazio di $V$, dobbiamo verificare le tre proprietà fondamentali.
1.  **Il vettore nullo**: Poiché $A$ e $B$ sono sottospazi, entrambi contengono il vettore nullo $0_V$. Quindi, $0_V \in A$ e $0_V \in B$, il che implica $0_V \in A \cap B$. L'insieme non è vuoto.
2.  **Chiusura rispetto alla somma**: Siano $u, w \in A \cap B$. Per definizione, questo significa che:
    * $u, w \in A$. Poiché $A$ è un sottospazio, la loro somma $(u+w) \in A$.
    * $u, w \in B$. Poiché $B$ è un sottospazio, la loro somma $(u+w) \in B$.
    Dato che $(u+w)$ appartiene ad entrambi, allora $(u+w) \in A \cap B$.
3.  **Chiusura rispetto al prodotto per scalare**: Sia $u \in A \cap B$ e $\lambda \in \mathbb{K}$.
    * $u \in A$. Poiché $A$ è un sottospazio, $\lambda u \in A$.
    * $u \in B$. Poiché $B$ è un sottospazio, $\lambda u \in B$.
    Dato che $\lambda u$ appartiene ad entrambi, allora $\lambda u \in A \cap B$.
Avendo soddisfatto tutte le proprietà, $A \cap B$ è un sottospazio di $V$.

### Unione di Sottospazi ($A \cup B$)

L'unione di $A$ e $B$, denotata $A \cup B$, è l'insieme di tutti i vettori che appartengono ad almeno uno dei due sottospazi.
$$ A \cup B = \{ v \in V \mid v \in A \text{ o } v \in B \} $$

**Teorema**: L'unione di due sottospazi in generale **non** è un sottospazio.
Lo è solo nel caso banale in cui uno dei due sottospazi è contenuto nell'altro (cioè $A \subseteq B$ o $B \subseteq A$).

**Controesempio**: Consideriamo $V = \mathbb{R}^2$. Siano $A = \text{Span}((1,0))$ (l'asse x) e $B = \text{Span}((0,1))$ (l'asse y). Entrambi sono sottospazi di $\mathbb{R}^2$.
Prendiamo due vettori dall'unione:
* $v_1 = (1,0) \in A \implies v_1 \in A \cup B$
* $v_2 = (0,1) \in B \implies v_2 \in A \cup B$
Verifichiamo la chiusura rispetto alla somma:
$$ v_1 + v_2 = (1,0) + (0,1) = (1,1) $$
Il vettore risultante $(1,1)$ non appartiene né ad $A$ (l'asse x) né a $B$ (l'asse y). Pertanto, $(1,1) \notin A \cup B$.
L'unione $A \cup B$ non è chiusa rispetto alla somma, quindi non è un sottospazio vettoriale.

### Somma di Sottospazi ($A+B$)

La somma di $A$ e $B$, denotata $A+B$, è l'insieme di tutti i vettori che possono essere scritti come la somma di un vettore di $A$ e un vettore di $B$.
$$ A+B = \{ a+b \mid a \in A, b \in B \} $$
Questo è il più piccolo sottospazio vettoriale che contiene l'unione $A \cup B$.

**Teorema**: La somma di due sottospazi è sempre un sottospazio.

**Dimostrazione**:
1.  **Il vettore nullo**: Poiché $A$ e $B$ sono sottospazi, $0_V \in A$ e $0_V \in B$. Quindi, il vettore $0_V = 0_V + 0_V$ può essere scritto come somma di un elemento di $A$ e uno di $B$. Dunque, $0_V \in A+B$.
2.  **Chiusura rispetto alla somma**: Siano $v_1, v_2 \in A+B$. Per definizione, esistono $a_1, a_2 \in A$ e $b_1, b_2 \in B$ tali che:
    * $v_1 = a_1 + b_1$
    * $v_2 = a_2 + b_2$
    La loro somma è:
    $$ v_1 + v_2 = (a_1 + b_1) + (a_2 + b_2) = (a_1+a_2) + (b_1+b_2) $$
    Poiché $A$ è un sottospazio, $(a_1+a_2) \in A$. Allo stesso modo, poiché $B$ è un sottospazio, $(b_1+b_2) \in B$.
    La somma $v_1+v_2$ è quindi la somma di un vettore di $A$ e un vettore di $B$, perciò $(v_1+v_2) \in A+B$.
3.  **Chiusura rispetto al prodotto per scalare**: Sia $v \in A+B$ e $\lambda \in \mathbb{K}$. Esistono $a \in A$ e $b \in B$ tali che $v = a+b$.
    $$ \lambda v = \lambda(a+b) = \lambda a + \lambda b $$
    Poiché $A$ è un sottospazio, $\lambda a \in A$. Poiché $B$ è un sottospazio, $\lambda b \in B$.
    Il vettore $\lambda v$ è la somma di un elemento di $A$ e uno di $B$, perciò $\lambda v \in A+B$.
Avendo soddisfatto tutte le proprietà, $A+B$ è un sottospazio di $V$.