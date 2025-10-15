# Sistemi Lineari: Matrici Associate e Struttura delle Soluzioni

## Matrici Associate a un Sistema Lineare

Un sistema di $m$ equazioni lineari in $n$ incognite $x_1, x_2, \dots, x_n$ può essere scritto in forma estesa come:
$$
\begin{cases}
a_{11}x_1 + a_{12}x_2 + \dots + a_{1n}x_n = b_1 \\
a_{21}x_1 + a_{22}x_2 + \dots + a_{2n}x_n = b_2 \\
\vdots \\
a_{m1}x_1 + a_{m2}x_2 + \dots + a_{mn}x_n = b_m
\end{cases}
$$
Questo sistema può essere rappresentato in modo compatto tramite matrici.

### Definizione Formale di Matrice Completa (o Aumentata)
Dato un sistema lineare, si definiscono:
1.  La **matrice dei coefficienti** $A$, una matrice $m \times n$ contenente i coefficienti delle incognite.
    $$A = \begin{pmatrix} a_{11} & a_{12} & \dots & a_{1n} \\ a_{21} & a_{22} & \dots & a_{2n} \\ \vdots & \vdots & \ddots & \vdots \\ a_{m1} & a_{m2} & \dots & a_{mn} \end{pmatrix}$$
2.  Il **vettore dei termini noti** $b$, un vettore colonna $m \times 1$.
    $$b = \begin{pmatrix} b_1 \\ b_2 \\ \vdots \\ b_m \end{pmatrix}$$

La **matrice completa** (o **matrice aumentata**) del sistema, denotata con $[A|b]$, è la matrice $m \times (n+1)$ ottenuta affiancando il vettore dei termini noti alla matrice dei coefficienti.
$$[A|b] = \left( \begin{array}{cccc|c} a_{11} & a_{12} & \dots & a_{1n} & b_1 \\ a_{21} & a_{22} & \dots & a_{2n} & b_2 \\ \vdots & \vdots & \ddots & \vdots & \vdots \\ a_{m1} & a_{m2} & \dots & a_{mn} & b_m \end{array} \right)$$

* Se il sistema è **non omogeneo** (almeno un $b_i \neq 0$), la matrice completa ha la forma sopra descritta.
* Se il sistema è **omogeneo** ($b_i = 0$ per ogni $i$), il vettore dei termini noti è il vettore nullo, e la matrice completa si scrive come $[A|0]$.

## Matrice a Scala (o a Gradini)

Per risolvere un sistema lineare, si utilizza l'algoritmo di eliminazione di Gauss per trasformare la matrice completa in una forma più semplice, detta "a scala".

**Definizione Formale**: Una matrice si dice **a scala per righe** (o a gradini) se soddisfa le seguenti due proprietà:
1.  Tutte le righe composte interamente da zeri (se presenti) si trovano in fondo alla matrice.
2.  Il primo elemento non nullo di ogni riga non nulla, chiamato **pivot**, si trova in una colonna strettamente a destra del pivot della riga precedente.

Di conseguenza, tutti gli elementi al di sotto di un pivot sono necessariamente uguali a zero. L'aspetto "a gradini" è dato dalla posizione dei pivot, che scendono e si spostano verso destra.

## Struttura delle Soluzioni di un Sistema

La forma a scala della matrice completa rivela la struttura dell'insieme delle soluzioni del sistema, governato dal Teorema di Rouché-Capelli.

### Forma Generica e Variabili Libere
Dopo aver ridotto a scala la matrice $[A|b]$, sia $r$ il numero di pivot (il rango della matrice).
Se il sistema è compatibile e il numero di incognite $n$ è maggiore del rango $r$ ($n > r$), allora il sistema ammette **infinite soluzioni**.

**Definizione Formale**:
* Le $r$ incognite le cui colonne corrispondono a colonne pivot nella matrice a scala sono chiamate **variabili dipendenti** (o di base).
* Le restanti $n-r$ incognite sono chiamate **variabili libere** (o parametri).

L'insieme delle soluzioni può essere scritto in **forma generica** (o parametrica) esprimendo ciascuna delle variabili dipendenti in funzione delle sole variabili libere. Assegnando un valore arbitrario a ciascuna delle $n-r$ variabili libere, si determina univocamente il valore delle $r$ variabili dipendenti, ottenendo così una specifica soluzione del sistema.

### Soluzioni come Spazio Affine Traslato
Esiste una profonda connessione tra le soluzioni di un sistema non omogeneo e quelle del sistema omogeneo associato.

**Teorema sulla Struttura delle Soluzioni**: Sia $Ax=b$ un sistema lineare compatibile. L'insieme delle sue soluzioni $S$ è dato dalla somma di una **qualsiasi soluzione particolare** $x_p$ del sistema e di **tutte le soluzioni** del sistema omogeneo associato $Ax=0$.

**Definizione Formale**:
Sia $S_{omogeneo} = \{ x_0 \in V \mid Ax_0=0 \}$ l'insieme delle soluzioni del sistema omogeneo associato (che è un sottospazio vettoriale, noto come Nucleo o Kernel dell'applicazione lineare associata ad A).
Sia $x_p$ un vettore tale che $Ax_p = b$.
Allora l'insieme delle soluzioni del sistema non omogeneo è:
$$S = \{ x_p + x_0 \mid x_0 \in S_{omogeneo} \}$$
Questo si denota come $S = x_p + S_{omogeneo}$.

**Interpretazione Geometrica**:
* L'insieme delle soluzioni $S_{omogeneo}$ di un sistema omogeneo è sempre un **sottospazio vettoriale** (una retta, un piano, etc., passante per l'origine).
* L'insieme delle soluzioni $S$ di un sistema non omogeneo, invece, non è un sottospazio vettoriale (non contiene il vettore nullo). Esso è un **sottospazio affine**, ovvero una "copia" del sottospazio $S_{omogeneo}$ **traslata** nello spazio tramite il **vettore di traslazione** $x_p$.

**Dimostrazione**:
1.  Sia $y$ una generica soluzione di $Ax=b$, quindi $Ay=b$. Vogliamo dimostrare che $y$ può essere scritto come $x_p+x_0$.
    Consideriamo il vettore $y - x_p$. Applichiamo la matrice A:
    $$A(y-x_p) = Ay - Ax_p = b - b = 0$$
    Questo dimostra che il vettore $y-x_p$ è una soluzione del sistema omogeneo. Chiamandolo $x_0 = y-x_p$, otteniamo $y = x_p+x_0$.
2.  Viceversa, sia $x = x_p+x_0$ un vettore costruito come somma della soluzione particolare e di una soluzione dell'omogeneo.
    $$A(x_p+x_0) = Ax_p + Ax_0 = b + 0 = b$$
    Questo dimostra che ogni vettore di questa forma è una soluzione del sistema non omogeneo.