# Discontinuità Rimovibili ed Estensione Continua

---

## Discontinuità Rimovibile ed Estensione per Continuità

Formalmente, un punto $x_0$ è un punto di **discontinuità di terza specie** (o **rimovibile**) per una funzione $f: I \setminus \{x_0\} \to \mathbb{R}$ (o $f: I \to \mathbb{R}$) se:

1.  Il limite della funzione per $x \to x_0$ esiste ed è finito.
    $$
    \exists L \in \mathbb{R} \text{ tale che } \lim_{x \to x_0} f(x) = L
    $$
2.  Il valore $L$ è diverso dal valore della funzione nel punto $f(x_0)$, oppure $f(x_0)$ non è definita.
    $$
    f(x_0) \neq L \quad \lor \quad x_0 \notin \text{dom}(f)
    $$

Quando una discontinuità è rimovibile, significa che la funzione "manca" il valore corretto $L$ nel punto $x_0$, ma vi converge da entrambi i lati.

### Estensione per Continuità

Se $f$ ha una discontinuità rimovibile in $x_0$ con limite $L$, possiamo definire una nuova funzione, chiamata **estensione per continuità** (o *prolungamento continuo*) di $f$, indicata con $\tilde{f}$ (letto "f tilde").

Questa nuova funzione $\tilde{f}$ è definita formalmente come:

$$
\tilde{f}(x) =
\begin{cases}
f(x) & \text{se } x \in \text{dom}(f) \setminus \{x_0\} \\
L & \text{se } x = x_0
\end{cases}
$$

Dove $L = \lim_{x \to x_0} f(x)$.

Per costruzione, la funzione $\tilde{f}$ è continua in $x_0$, poiché:
$$
\lim_{x \to x_0} \tilde{f}(x) = \lim_{x \to x_0} f(x) = L = \tilde{f}(x_0)
$$

La funzione $\tilde{f}$ "ripara" la discontinuità di $f$ assegnando al punto $x_0$ l'unico valore che rende la funzione continua.

---

## Condizioni per l'Estensione Continua

Affinché l'estensione per continuità $\tilde{f}$ possa essere definita in $x_0$, deve essere soddisfatta una condizione fondamentale:

> **Condizione (Esistenza del Limite Finito):**
> Deve esistere il limite della funzione $f(x)$ per $x \to x_0$ e tale limite deve essere finito (cioè $L \in \mathbb{R}$).
> $$
 \exists L \in \mathbb{R} \text{ tale che } \lim_{x \to x_0} f(x) = L
 $$

Se il limite non esiste (es. discontinuità di salto o seconda specie) o se il limite è infinito ($L = \pm\infty$), la discontinuità **non è rimovibile** e la funzione non può essere estesa per continuità in $x_0$.

### Limiti Destro e Sinistro (Caso $\mathbb{R}$)

Nel contesto di funzioni $f: \mathbb{R} \to \mathbb{R}$, l'esistenza del limite $\lim_{x \to x_0} f(x)$ è **equivalente** all'esistenza e all'uguaglianza dei limiti destro e sinistro.

Formalmente, la condizione $\lim_{x \to x_0} f(x) = L$ è vera se e solo se:
1.  Esiste finito il limite sinistro: $\lim_{x \to x_0^-} f(x) = L_-$
2.  Esiste finito il limite destro: $\lim_{x \to x_0^+} f(x) = L_+$
3.  I due limiti coincidono: $L_- = L_+ = L$

**Perché questo è vero in $\mathbb{R}$ e non in $\mathbb{R}^2$?**

* In $\mathbb{R}$ (una dimensione), per "avvicinarsi" a un punto $x_0$, esistono solo due direzioni possibili: da sinistra ($x < x_0$) o da destra ($x > x_0$). Se la funzione converge allo stesso valore $L$ da entrambe le uniche direzioni possibili, allora converge in $x_0$.
* In $\mathbb{R}^2$ (due dimensioni), per avvicinarsi a un punto $P_0 = (x_0, y_0)$, esistono **infinite direzioni** (o *cammini*).  Possiamo avvicinarci lungo rette ($y = m(x-x_0) + y_0$), parabole ($y = k(x-x_0)^2 + y_0$), o qualsiasi altra curva.
* In $\mathbb{R}^2$, affinché il limite $\lim_{(x,y) \to P_0} f(x,y) = L$ esista, la funzione deve tendere a $L$ **lungo tutti gli infiniti cammini possibili**.
* Non è sufficiente verificare che il limite sia lo stesso lungo due direzioni (es. l'asse $x$ e l'asse $y$). Se si trovano anche solo due cammini che portano a limiti diversi, il limite generale non esiste.

---

## Continuità in un Intervallo Chiuso [a, b]

La definizione di continuità in un intervallo chiuso e limitato $[a, b]$ richiede di gestire la continuità anche agli estremi dell'intervallo, dove non è possibile calcolare il limite "completo" (poiché la funzione non è definita all'esterno dell'intervallo).

> **Definizione Formale (Continuità su $[a, b]$)**
> Una funzione $f: [a, b] \to \mathbb{R}$ si dice **continua** sull'intervallo chiuso $[a, b]$ se soddisfa simultaneamente queste tre condizioni:
>
> 1.  $f$ è continua in ogni punto $x_0$ dell'intervallo aperto $(a, b)$.
>     (Cioè, $\forall x_0 \in (a, b), \lim_{x \to x_0} f(x) = f(x_0)$)
>
> 2.  $f$ è **continua da destra** nell'estremo $a$.
>     (Cioè, $\lim_{x \to a^+} f(x) = f(a)$)
>
> 3.  $f$ è **continua da sinistra** nell'estremo $b$.
>     (Cioè, $\lim_{x \to b^-} f(x) = f(b)$)