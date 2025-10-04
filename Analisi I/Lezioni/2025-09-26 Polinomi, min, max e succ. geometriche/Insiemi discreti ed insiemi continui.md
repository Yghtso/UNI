# Definizioni Formali

## Definizione di Insieme Discreto

Intuitivamente, un insieme numerico è **discreto** se i suoi elementi sono "isolati" l'uno dall'altro. Esiste uno "spazio vuoto" attorno a ciascun punto dell'insieme, che non contiene altri punti dell'insieme stesso.

### Definizione Formale
Un insieme $S \subseteq \mathbb{R}$ si definisce **discreto** se ogni suo punto è un **punto isolato**. Un punto $x \in S$ è detto isolato se esiste un intorno di $x$ che non contiene altri punti di $S$ all'infuori di $x$ stesso.

Formalmente, un insieme $S$ è discreto se:
$$
\forall x \in S, \quad \exists \epsilon > 0 \quad \text{tale che} \quad S \cap (x - \epsilon, x + \epsilon) = \{x\}
$$
Questo significa che per ogni punto $x$ dell'insieme, è possibile trovare un intervallo aperto $(x-\epsilon, x+\epsilon)$ centrato in $x$, per quanto piccolo, che interseca l'insieme $S$ solo nel punto $x$.

### Esempi di Insiemi Discreti
1.  **L'insieme dei numeri interi ($\mathbb{Z}$)**:
    Per qualsiasi intero $n \in \mathbb{Z}$, possiamo scegliere $\epsilon = 0.5$. L'intervallo $(n-0.5, n+0.5)$ contiene il solo intero $n$. Quindi, ogni punto di $\mathbb{Z}$ è isolato.

2.  **Qualsiasi insieme finito**:
    Sia $A = \{1, 5, 12\}$. Ogni elemento è isolato. Per il punto $5$, ad esempio, possiamo scegliere $\epsilon=1$. L'intervallo $(4, 6)$ contiene solo il $5$ come elemento di $A$.

3.  **L'insieme $S = \{ \frac{1}{n} \mid n \in \mathbb{N}, n \ge 1 \}$**:
    Questo insieme, $S = \{1, 1/2, 1/3, \dots\}$, è discreto. Per ogni elemento $1/n$, i suoi vicini più prossimi sono $1/(n-1)$ e $1/(n+1)$. Possiamo sempre trovare un $\epsilon$ sufficientemente piccolo (es. $\epsilon = \frac{1}{2} (\frac{1}{n} - \frac{1}{n+1})$) per isolare il punto.

---

## Definizione di Insieme Continuo (Intervallo)

Il termine "insieme continuo" non è uno standard nella terminologia matematica formale. Tuttavia, nel contesto dei numeri reali, l'idea intuitiva di un insieme "senza buchi" o "senza interruzioni" corrisponde precisamente al concetto matematico di **intervallo**.

### Definizione Formale
Un insieme $S \subseteq \mathbb{R}$ è un **intervallo** (e quindi un "insieme continuo") se, per ogni coppia di punti $x, y$ appartenenti all'insieme, anche tutti i punti reali compresi tra di essi appartengono all'insieme.

Formalmente, un insieme $S$ è un intervallo se:
$$
\forall x, y \in S \quad \text{e} \quad \forall z \in \mathbb{R}, \quad (x < z < y \implies z \in S)
$$
Questa proprietà, talvolta chiamata *convessità* in una dimensione, cattura l'essenza di non avere "salti". Se l'insieme contiene due punti, deve contenere anche tutto il segmento che li congiunge.

### Esempi di Insiemi Continui (Intervalli)
1.  **Un intervallo chiuso e limitato**:
    $A = [0, 5]$. Se prendiamo due punti qualsiasi in $A$, ad esempio $1$ e $4$, tutti i numeri reali $z$ tali che $1 < z < 4$ sono anch'essi in $A$.

2.  **Un intervallo aperto e limitato**:
    $B = (-1, 1)$. Anche se gli estremi -1 e 1 sono esclusi, la proprietà è valida per qualsiasi coppia di punti *interni* all'intervallo.

3.  **Un intervallo illimitato**:
    $C = [0, +\infty)$. Se prendiamo $x=10$ e $y=100$, tutti i numeri reali tra 10 e 100 sono inclusi in $C$.

4.  **L'insieme dei numeri reali ($\mathbb{R}$)**:
    $\mathbb{R}$ è l'esempio per eccellenza di insieme continuo, in quanto è esso stesso un intervallo $(-\infty, +\infty)$.