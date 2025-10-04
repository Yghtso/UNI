# Dimostrazione Formale dell'Algoritmo di Karatsuba

## Introduzione e Contesto

Il metodo standard ha una complessità di $O(n^2)$, dove $n$ è il numero di cifre dei numeri da moltiplicare. L'algoritmo di Karatsuba riduce questa complessità a circa $O(n^{1.585})$.

## Descrizione dell'Algoritmo

L'obiettivo è calcolare il prodotto di due numeri interi $x$ e $y$ di $n$ cifre. Per semplicità, si assume che $n$ sia una potenza di 2.

### 1. Fase di "Divide" (Divisione)

Scegliamo una base $B$ (comunemente $B=10$ per i numeri decimali o $B=2$ per i numeri binari) e dividiamo ciascuno dei due numeri $x$ e $y$ in due metà di $n/2$ cifre:

* $x = a \cdot B^{n/2} + b$
* $y = c \cdot B^{n/2} + d$

dove $a, b, c, d$ sono numeri interi con al più $n/2$ cifre.

Il prodotto $x \cdot y$ può essere scritto come:
$$
x \cdot y = (a \cdot B^{n/2} + b)(c \cdot B^{n/2} + d)
$$
$$
x \cdot y = ac \cdot B^n + (ad+bc) \cdot B^{n/2} + bd
$$
Questo calcolo, se eseguito direttamente, richiederebbe quattro moltiplicazioni di numeri a $n/2$ cifre ($ac, ad, bc, bd$), portando a una complessità ancora di $O(n^2)$.

### 2. Fase di "Conquer" (Conquista e Intuizione di Karatsuba)

L'intuizione fondamentale di Karatsuba è che il termine intermedio $(ad+bc)$ può essere calcolato con una sola moltiplicazione aggiuntiva, invece di due.

Si definiscono tre prodotti di numeri a $n/2$ cifre:
1.  $z_2 = a \cdot c$
2.  $z_0 = b \cdot d$
3.  $z_1 = (a+b) \cdot (c+d)$

Il termine $z_1$ può essere espanso come:
$$
z_1 = ac + ad + bc + bd
$$
Notiamo che $ac = z_2$ e $bd = z_0$. Sostituendo, otteniamo:
$$
z_1 = z_2 + (ad+bc) + z_0
$$
Da questa relazione, possiamo isolare il termine intermedio $(ad+bc)$ che ci serve per il calcolo del prodotto originale:
$$
ad+bc = z_1 - z_2 - z_0
$$
In questo modo, abbiamo calcolato i tre coefficienti necessari ($ac, bd, ad+bc$) eseguendo solo **tre** moltiplicazioni di numeri a $n/2$ cifre ($z_2, z_0, z_1$), al costo di alcune addizioni e sottrazioni aggiuntive.

### 3. Fase di "Combine" (Combinazione)

Sostituiamo i risultati ottenuti nell'espressione del prodotto $x \cdot y$:
$$
x \cdot y = (z_2) \cdot B^n + (z_1 - z_2 - z_0) \cdot B^{n/2} + (z_0)
$$
Le operazioni in questa fase sono:
* Moltiplicazioni per $B^n$ e $B^{n/2}$: queste non sono vere e proprie moltiplicazioni, ma semplici operazioni di *shift* (spostamento di cifre o aggiunta di zeri), che richiedono un tempo lineare $O(n)$.
* Addizioni e sottrazioni: queste operazioni richiedono anch'esse un tempo lineare $O(n)$.

L'algoritmo viene applicato ricorsivamente per calcolare i prodotti $z_2, z_0, z_1$ fino a quando i numeri diventano abbastanza piccoli da essere moltiplicati con il metodo standard.

## Analisi della Complessità

Sia $T(n)$ il tempo necessario per moltiplicare due numeri di $n$ cifre con l'algoritmo di Karatsuba. La scomposizione del problema ci fornisce la seguente relazione di ricorrenza:

1.  L'algoritmo esegue **3 moltiplicazioni** su numeri di dimensione $n/2$. Il costo di questa parte è $3 \cdot T(n/2)$.
2.  L'algoritmo esegue un numero costante di addizioni, sottrazioni e shift su numeri di dimensione $n$. Il costo di questa parte è lineare, quindi $O(n)$.

La relazione di ricorrenza completa è:
$$
T(n) = 3 \cdot T(n/2) + O(n)
$$
Per risolvere questa ricorrenza, possiamo utilizzare il **Master Theorem** (Teorema Maestro) con $a=3, b=2$ e $f(n) = O(n)$.

Calcoliamo il valore critico $\log_b a$:
$$
\log_b a = \log_2 3 \approx 1.585
$$
Confrontiamo ora $f(n)=O(n)$ con $n^{\log_b a} = n^{\log_2 3}$.
Poiché $f(n) = O(n^1)$ e $1 < \log_2 3$, ci troviamo nel primo caso del Master Theorem. La complessità è quindi dominata dal costo delle chiamate ricorsive.

La soluzione della ricorrenza è:
$$
T(n) = O(n^{\log_2 3}) \approx O(n^{1.585})
$$
Questa complessità è significativamente migliore di $O(n^2)$, specialmente per valori di $n$ molto grandi, dimostrando l'efficienza dell'algoritmo di Karatsuba.