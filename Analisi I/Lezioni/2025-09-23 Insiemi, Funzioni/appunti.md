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

## Cos'è una Funzione

In matematica, una **funzione** è una relazione che lega due insiemi, chiamati dominio e codominio, associando a ogni elemento del dominio uno e un solo elemento del codominio.

Per definire compiutamente una funzione $f$, è necessario specificare tre elementi fondamentali:

1.  **Dominio ($D_f$ o $dom(f)$):** È l'insieme di tutti i possibili valori di input per la funzione.
2.  **Codominio ($C_f$ o $codom(f)$):** È l'insieme che contiene tutti i possibili valori di output. È importante notare che non tutti gli elementi del codominio devono essere necessariamente immagini di un elemento del dominio.
3.  **Legge di corrispondenza:** È la regola che associa in modo univoco a ogni elemento $x$ del dominio un unico elemento $y$ del codominio. Si indica con $y = f(x)$.

### Definizione Formale

Siano $A$ e $B$ due insiemi non vuoti. Una funzione $f$ da $A$ a $B$, che si scrive come:
$$f: A \rightarrow B$$
è una relazione che associa ad ogni elemento $x \in A$ uno e un solo elemento $y \in B$. L'elemento $y$ si indica con $f(x)$ e viene chiamato **immagine** di $x$ tramite $f$. L'elemento $x$ è detto **controimmagine** di $y$.

## Iniettività di una Funzione

Una funzione si dice **iniettiva** (o uno-a-uno) se elementi distinti del dominio hanno immagini distinte nel codominio. Questo garantisce che non ci siano due input diversi che producono lo stesso output.

### Definizione Formale

Una funzione $f: A \rightarrow B$ è iniettiva se e solo se :
$$\forall x_1, x_2 \in A \;\; (x_1 \neq x_2 \implies f(x_1) \neq f(x_2))$$

Equivalentemente, si può dire che:
$$f(x_1) = f(x_2) \implies x_1 = x_2$$

## Funzioni Crescenti e Decrescenti

Una funzione si dice **monotòna** se il suo andamento si mantiene "costante", ovvero se è sempre crescente o sempre decrescente in un dato intervallo.

### Funzione Crescente

Sia $f$ una funzione definita su un intervallo $I \subseteq \mathbb{R}$.

* **Strettamente crescente:** $f$ è strettamente crescente in $I$ se $$\forall x_1, x_2 \in I \;\; (x_1 < x_2 \implies f(x_1) < f(x_2))$$
* **Debolmente crescente (o non decrescente):** $f$ è debolmente crescente in $I$ se per ogni $x_1, x_2 \in I$:
$$x_1 < x_2 \implies f(x_1) \leq f(x_2)$$

### Funzione Decrescente

Sia $f$ una funzione definita su un intervallo $I \subseteq \mathbb{R}$.

* **Strettamente decrescente:** $f$ è strettamente decrescente in $I$ se $$\forall x_1, x_2 \in I \;\; (x_1 < x_2 \implies f(x_1) > f(x_2))$$
* **Debolmente decrescente (o non crescente):** $f$ è debolmente decrescente in $I$ se per ogni $x_1, x_2 \in I$:
    $$x_1 < x_2 \implies f(x_1) \geq f(x_2)$$

## Immagine di una Funzione

L'**immagine** di una funzione $f$, indicata con $Im(f)$ o $f(A)$, è l'insieme di tutti i valori che la funzione assume effettivamente. In altre parole, è il sottoinsieme del codominio costituito da tutti gli elementi che sono immagine di almeno un elemento del dominio.

### Definizione Formale

Data una funzione $f: A \rightarrow B$, l'immagine di $f$ è definita come:
$$Im(f) = \{ y \in B \mid \exists x \in A : y = f(x) \}$$
Dalla definizione si evince che l'immagine è sempre un sottoinsieme del codominio:
$$Im(f) \subseteq B$$
Una funzione si dice **suriettiva** quando la sua immagine coincide con il codominio ($Im(f) = B$).

## Chiarimento su $\sqrt{x}$

È un errore comune, ma matematicamente scorretto, affermare che $\sqrt{4} = \pm 2$. La radice quadrata, quando intesa come **funzione**, deve avere un solo output per ogni input, altrimenti non rispetterebbe la definizione stessa di funzione.

### La Funzione Radice Quadrata

La funzione radice quadrata, $f(x) = \sqrt{x}$, è definita come segue:
* **Dominio:** $[0, +\infty)$
* **Codominio:** $[0, +\infty)$

Per convenzione matematica, il simbolo $\sqrt{\cdot}$ indica la **radice quadrata principale**, ovvero l'unico valore *non negativo* che, elevato al quadrato, restituisce il radicando. Pertanto:
$$\sqrt{4} = 2 \quad \text{e non} \quad \sqrt{4} \neq -2$$

### L'Equazione $x^2 = a$

La confusione nasce spesso dalla risoluzione di equazioni. L'equazione:
$$x^2 = 4$$
ammette due soluzioni, perché ci si chiede quali numeri, elevati al quadrato, diano 4. Le soluzioni sono $x = 2$ e $x = -2$, il che si può scrivere in modo compatto come:
$$x = \pm \sqrt{4} \implies x = \pm 2$$
In questo contesto, il simbolo $\pm$ non è parte della definizione di radice quadrata, ma è un modo sintetico per indicare le due possibili soluzioni dell'equazione.

In sintesi, $\sqrt{x}$ è una **funzione** che restituisce un unico valore, mentre la risoluzione di $x^2 = a$ è un'**equazione** che può avere due soluzioni.
