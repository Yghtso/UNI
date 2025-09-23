# INSIEMI
## Definizioni Fondamentali

### Cos'è un Insieme?
Un **insieme** è una collezione o un raggruppamento di oggetti, chiamati **elementi**, ben distinti tra loro. Gli insiemi sono uno dei concetti fondamentali della matematica.

### Come si Indicano gli Insiemi e i loro Elementi
- Gli **insiemi** si indicano solitamente con le lettere maiuscole dell'alfabeto.
  - Esempio: $A$, $B$, $C$.

- Gli **elementi** di un insieme si indicano con le lettere minuscole.
  - Esempio: $a$, $b$, $c$.

### Come si Definisce un Insieme
Un insieme può essere definito principalmente in due modi:

1.  **Per elencazione (o rappresentazione tabulare):** Si elencano tutti gli elementi dell'insieme separati da virgole e racchiusi tra parentesi graffe.
    - Esempio: L'insieme $A$ dei primi tre numeri naturali si scrive come $A = \{1, 2, 3\}$.
    - Esempio: L'insieme $V$ delle vocali dell'alfabeto italiano è $V = \{a, e, i, o, u\}$.

2.  **Per proprietà caratteristica (o rappresentazione intensiva):** Si enuncia la proprietà che tutti gli elementi dell'insieme, e solo essi, devono soddisfare. Si usa la notazione:
    $$ A = \{ x \mid P(x) \} $$
    che si legge: "$A$ è l'insieme degli elementi $x$ tali che $x$ soddisfa la proprietà $P$".
    - Esempio: L'insieme $P$ dei numeri naturali pari si scrive come $P = \{ n \mid n \text{ è un numero naturale pari} \}$.
    - Esempio: $B = \{ x \in \mathbb{N} \mid x < 5 \}$ (si legge: "l'insieme $B$ è formato da tutti gli elementi $x$ appartenenti all'insieme dei numeri naturali $\mathbb{N}$ tali che $x$ è minore di 5"). Quindi $B = \{0, 1, 2, 3, 4\}$.

---

## Simboli Fondamentali

| Simbolo               | Significato                   | Esempio         | Descrizione                                                                                                                                  |
| :-------------------- | :---------------------------- | :-------------- | :------------------------------------------------------------------------------------------------------------------------------------------- |
| $\in$                 | **Appartenenza**              | $a \in V$       | L'elemento 'a' **appartiene** all'insieme delle vocali $V$.                                                                                  |
| $\notin$              | **Non appartenenza**          | $b \notin V$    | L'elemento 'b' **non appartiene** all'insieme delle vocali $V$.                                                                              |
| $\emptyset$ o $\{ \}$ | **Insieme vuoto**             | $A = \emptyset$ | L'insieme $A$ non contiene alcun elemento.                                                                                                   |
| $\subseteq$           | **Inclusione (sottoinsieme)** | $A \subseteq B$ | L'insieme $A$ è un sottoinsieme di $B$. Ogni elemento di $A$ è anche elemento di $B$. È ammesso che $A=B$.                                   |
| $\subset$             | **Inclusione stretta**        | $A \subset B$   | L'insieme $A$ è un sottoinsieme proprio di $B$. Tutti gli elementi di $A$ sono in $B$, ma esiste almeno un elemento in $B$ che non è in $A$. |
| $\cup$                | **Unione**                    | $A \cup B$      | L'insieme che contiene tutti gli elementi che sono in $A$ o in $B$ o in entrambi.                                                            |
| $\cap$                | **Intersezione**              | $A \cap B$      | L'insieme che contiene solo gli elementi che sono sia in $A$ che in $B$.                                                                     |
| $\setminus$           | **Differenza**                | $A \setminus B$ | L'insieme degli elementi che appartengono ad $A$ ma non a $B$.                                                                               |

---

## Intervalli

Un **intervallo** è un sottoinsieme dei numeri reali ($\mathbb{R}$) che corrisponde a una semiretta (intervallo illimitato) o a un segmento (intervallo limitato) sulla retta reale.

### Intervalli Chiusi e Aperti

La differenza principale sta nell'inclusione o esclusione degli estremi dell'intervallo.

-   **Intervallo Chiuso:** Include entrambi gli estremi.
-   **Intervallo Aperto:** Esclude entrambi gli estremi.

### Notazione e Rappresentazione Grafica

| Tipo di Intervallo  | Notazione           | Definizione Formale                         | Rappresentazione Grafica    |
| :------------------ | :------------------ | :------------------------------------------ | :-------------------------- |
| **Chiuso**          | $[a, b]$            | $\{ x \in \mathbb{R} \mid a \le x \le b \}$ | `a ----- b` <br>`●-------●` |
| **Aperto**          | $(a, b)$ o $]a, b[$ | $\{ x \in \mathbb{R} \mid a < x < b \}$     | `a ----- b` <br>`○-------○` |
| **Semiaperto a dx** | $[a, b)$ o $[a, b[$ | $\{ x \in \mathbb{R} \mid a \le x < b \}$   | `a ----- b` <br>`●-------○` |
| **Semiaperto a sx** | $(a, b]$ o $]a, b]$ | $\{ x \in \mathbb{R} \mid a < x \le b \}$   | `a ----- b` <br>`○-------●` |

### Esempi Concreti

-   **Intervallo chiuso `[-2, 3]`**:
    -   **Definizione**: $\{ x \in \mathbb{R} \mid -2 \le x \le 3 \}$
    -   **Significato**: Tutti i numeri reali compresi tra -2 e 3, inclusi -2 e 3.
    -   **Grafico**: 
		`-2 ----- 3` 
		`●--------●`

-   **Intervallo aperto `(0, 5)`**:
    -   **Definizione**: $\{ x \in \mathbb{R} \mid 0 < x < 5 \}$
    -   **Significato**: Tutti i numeri reali strettamente compresi tra 0 e 5 (esclusi 0 e 5).
    -   **Grafico**: 
		`0 ----- 5` 
		`○-------○`

-   **Intervallo illimitato `[1, +∞)`**:
    -   **Definizione**: $\{ x \in \mathbb{R} \mid x \ge 1 \}$
    -   **Significato**: Tutti i numeri reali maggiori o uguali a 1.
    -   **Grafico**: 
	    `1 ------->`
	    `●-------`

---

## Definizione Formale delle Operazioni tra Insiemi

Per introdurre un nuovo oggetto matematico, ad esempio, quando si definisce una funzione o un insieme, come nell'esempio precedente."da ora in poi, quando vedi f(x), intendilo come" e si legge "**è definito come**".

### Unione ($A \cup B$)
L'unione di due insiemi $A$ e $B$ è l'insieme che contiene tutti gli elementi che appartengono ad A *o* a B (o a entrambi).

-   **Definizione formale**:
    $$ A \cup B := \{ x \mid x \in A \lor x \in B \} $$
    -   $A \cup B$: è l'oggetto che stiamo definendo (l'insieme unione).
    -   `:=` : simbolo di definizione.
    -   $\{ x \mid \dots \}$: l'insieme è definito per proprietà caratteristica.
    -   $x \in A \lor x \in B$: è la condizione che un elemento $x$ deve soddisfare per appartenere all'insieme unione. Il simbolo $\lor$ rappresenta il connettivo logico "OR".

### Intersezione ($A \cap B$)
L'intersezione di due insiemi $A$ e $B$ è l'insieme che contiene solo gli elementi che appartengono *sia* ad A *sia* a B.

-   **Definizione formale**:
    $$ A \cap B := \{ x \mid x \in A \land x \in B \} $$
    -   La condizione qui è $x \in A \land x \in B$. Il simbolo $\land$ rappresenta il connettivo logico "AND" (in latino *et*).

### Differenza ($A \setminus B$)
La differenza tra due insiemi $A$ e $B$ è l'insieme che contiene gli elementi che appartengono ad A ma *non* appartengono a B.

-   **Definizione formale**:
    $$ A \setminus B := \{ x \mid x \in A \land x \notin B \} $$
    -   La condizione qui è $x \in A \land x \notin B$, che unisce l'appartenenza al primo insieme con la non appartenenza al secondo.

# FUNZIONI

