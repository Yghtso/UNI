# Analisi 1: Teoremi sulle Funzioni Continue

---

## Teorema dei Valori Intermedi (TVI)

Questo teorema, noto anche come *Teorema di Darboux*, stabilisce che una funzione continua su un intervallo assume necessariamente tutti i valori compresi tra il suo valore iniziale e il suo valore finale.

### Prerequisito: Teorema degli Zeri (o di Bolzano)

Per dimostrare il TVI, utilizziamo il Teorema degli Zeri, che è un suo caso particolare.

> **Teorema degli Zeri (Bolzano)**
> Sia $f: [a, b] \to \mathbb{R}$ una funzione continua.
> Se $f(a) \cdot f(b) < 0$ (cioè se $f(a)$ e $f(b)$ hanno segni discordi),
> allora esiste almeno un punto $c \in (a, b)$ tale che $f(c) = 0$.



---

### Enunciato Formale del Teorema dei Valori Intermedi

> **Teorema dei Valori Intermedi (TVI)**
> Sia $f: [a, b] \to \mathbb{R}$ una funzione continua nell'intervallo chiuso e limitato $[a, b]$.
> Sia $\lambda$ un qualsiasi valore compreso tra $f(a)$ e $f(b)$ (cioè $\lambda \in [\min(f(a), f(b)), \max(f(a), f(b))]$).
>
> Allora, esiste almeno un punto $c \in [a, b]$ tale che $f(c) = \lambda$.

### Dimostrazione (basata sul Teorema degli Zeri)

Vogliamo dimostrare che $\exists c \in [a, b]$ tale che $f(c) = \lambda$.

1.  **Casi banali**:
    Se $\lambda = f(a)$, basta scegliere $c=a$.
    Se $\lambda = f(b)$, basta scegliere $c=b$.

2.  **Caso non banale**:
    Assumiamo, senza perdita di generalità, che $f(a) < f(b)$ e che $\lambda$ sia *strettamente* compreso, cioè $f(a) < \lambda < f(b)$. (Il caso $f(b) < \lambda < f(a)$ è analogo).

3.  **Costruzione della funzione ausiliaria**:
    Come suggerito, definiamo una nuova funzione $g(x)$ in $[a, b]$ come:
    $$
    g(x) = f(x) - \lambda
    $$

4.  **Verifica delle ipotesi del Teorema degli Zeri per $g(x)$**:
    * **Continuità**: $f(x)$ è continua in $[a, b]$ per ipotesi. La funzione costante $\lambda$ è continua ovunque. La funzione $g(x)$, essendo la differenza di due funzioni continue, è anch'essa continua in $[a, b]$.
    * **Segni agli estremi**: Calcoliamo $g(x)$ nei punti $a$ e $b$:
        * $g(a) = f(a) - \lambda$. Poiché per ipotesi $f(a) < \lambda$, segue che $f(a) - \lambda < 0$, quindi $g(a) < 0$.
        * $g(b) = f(b) - \lambda$. Poiché per ipotesi $f(b) > \lambda$, segue che $f(b) - \lambda > 0$, quindi $g(b) > 0$.

5.  **Applicazione del Teorema degli Zeri**:
    Abbiamo dimostrato che $g(x)$ è continua in $[a, b]$ e che $g(a) < 0$ e $g(b) > 0$. Pertanto, $g(a) \cdot g(b) < 0$.
    Per il Teorema degli Zeri, deve esistere almeno un punto $c \in (a, b)$ tale che $g(c) = 0$.

6.  **Conclusione**:
    Se $g(c) = 0$, per definizione di $g(x)$ significa:
    $$
    f(c) - \lambda = 0 \implies f(c) = \lambda
    $$
    Abbiamo quindi trovato un $c$ nell'intervallo (strettamente al suo interno) tale che $f(c) = \lambda$

---

## Continuità, Invertibilità e Monotonia

Una funzione invertibile non è necessariamente monotona. Tuttavia, se aggiungiamo l'ipotesi di continuità su un intervallo, l'invertibilità *implica* la monotonia stretta.

> **Teorema (Monotonia delle Funzioni Continue e Invertibili)**
> Sia $f: [a, b] \to \mathbb{R}$ una funzione **continua** e **invertibile** (iniettiva) sull'intervallo $[a, b]$.
> Allora $f$ è **strettamente monotona** in $[a, b]$ (cioè strettamente crescente o strettamente decrescente).

### Dimostrazione per Assurdo

Supponiamo, per assurdo (P.A.), che $f$ sia continua e invertibile in $[a, b]$, ma che $f$ **non** sia strettamente monotona.

1.  **Negazione della Tesi**:
    Se $f$ non è strettamente monotona, significa che non è né strettamente crescente né strettamente decrescente.
    Questo implica che devono esistere almeno tre punti $x_1, x_2, x_3 \in [a, b]$ con $x_1 < x_2 < x_3$ tali da violare la monotonia.
    Cioè, si verifica uno di questi due casi (un "picco" o una "valle"):
    * Caso A (Valle): $f(x_1) > f(x_2)$ e $f(x_2) < f(x_3)$
    * Caso B (Picco): $f(x_1) < f(x_2)$ e $f(x_2) > f(x_3)$

2.  **Analisi del Caso A (Valle)**: $f(x_1) > f(x_2)$ e $f(x_2) < f(x_3)$.
    * Poiché $f$ è invertibile (iniettiva) e $x_1 \neq x_3$, deve essere $f(x_1) \neq f(x_3)$.
    * Sia $\lambda$ un valore reale scelto *compreso* tra $f(x_2)$ (il minimo locale) e il più piccolo dei due estremi, $\min(f(x_1), f(x_3))$.
        $$
        f(x_2) < \lambda < \min(f(x_1), f(x_3))
        $$
        (Un tale $\lambda$ esiste perché $f(x_2)$ è strettamente minore di entrambi).
    * Consideriamo l'intervallo $[x_1, x_2]$. La funzione $f$ è continua.
        Abbiamo $f(x_2) < \lambda < f(x_1)$. Per il **Teorema dei Valori Intermedi (TVI)** applicato a $[x_1, x_2]$, $\exists c_1 \in (x_1, x_2)$ tale che $f(c_1) = \lambda$.
    * Consideriamo l'intervallo $[x_2, x_3]$. La funzione $f$ è continua.
        Abbiamo $f(x_2) < \lambda < f(x_3)$. Per il **TVI** applicato a $[x_2, x_3]$, $\exists c_2 \in (x_2, x_3)$ tale che $f(c_2) = \lambda$.
    * **Contraddizione**:
        Abbiamo trovato due punti $c_1 \in (x_1, x_2)$ e $c_2 \in (x_2, x_3)$. Poiché gli intervalli $(x_1, x_2)$ e $(x_2, x_3)$ sono disgiunti, $c_1 \neq c_2$.
        Tuttavia, $f(c_1) = \lambda$ e $f(c_2) = \lambda$.
        Questo significa $f(c_1) = f(c_2)$ con $c_1 \neq c_2$.
        Ciò **contraddice l'ipotesi che $f$ sia invertibile (iniettiva)**.

3.  **Analisi del Caso B (Picco)**: $f(x_1) < f(x_2)$ e $f(x_2) > f(x_3)$.
    * La logica è identica. Sia $\lambda$ un valore tale che:
        $$
        \max(f(x_1), f(x_3)) < \lambda < f(x_2)
        $$
    * Applichiamo il TVI all'intervallo $[x_1, x_2]$ (dove $f(x_1) < \lambda < f(x_2)$):
        $\exists c_1 \in (x_1, x_2)$ tale che $f(c_1) = \lambda$.
    * Applichiamo il TVI all'intervallo $[x_2, x_3]$ (dove $f(x_3) < \lambda < f(x_2)$):
        $\exists c_2 \in (x_2, x_3)$ tale che $f(c_2) = \lambda$.
    * **Contraddizione**:
        Di nuovo, abbiamo $c_1 \neq c_2$ ma $f(c_1) = f(c_2)$, il che contraddice l'iniettività.

4.  **Conclusione Finale**:
    In entrambi i casi possibili, l'ipotesi che $f$ non sia strettamente monotona ci ha portato a una contraddizione con l'ipotesi che $f$ sia invertibile (iniettiva).
    Pertanto, l'ipotesi per assurdo è falsa. Ne consegue che $f$ deve essere strettamente monotona.

# Teorema dei Valori Intermedi (Intervallo Aperto)

---

## Introduzione

Il Teorema dei Valori Intermedi (TVI) è valido anche per funzioni continue definite su intervalli aperti (o qualsiasi tipo di intervallo, anche illimitato).

La sua formulazione più generale afferma che **l'immagine di un intervallo tramite una funzione continua è ancora un intervallo**.

Per dimostrarlo in un intervallo aperto $I = (a, b)$, non potendo usare $f(a)$ e $f(b)$, dimostriamo che per *qualsiasi* coppia di valori $y_1, y_2$ assunti dalla funzione, $f$ assume anche tutti i valori intermedi $\lambda$.

---

## Enunciato Formale (TVI su Intervallo Aperto)

> **Teorema dei Valori Intermedi (Formulazione Generale)**
> Sia $I \subseteq \mathbb{R}$ un intervallo (es. $I = (a, b)$) e sia $f: I \to \mathbb{R}$ una funzione **continua** su $I$.
> Allora l'immagine $J = f(I)$ è un intervallo.

**Cosa significa formalmente "J è un intervallo"?**
Un insieme $J \subseteq \mathbb{R}$ è un intervallo se e solo se, per ogni coppia di punti $y_1, y_2 \in J$ con $y_1 < y_2$, si ha che $[y_1, y_2] \subseteq J$.
Ovvero, $\forall \lambda \in \mathbb{R}$ tale che $y_1 < \lambda < y_2$, allora $\lambda \in J$.

---

## Verifica Formale (Dimostrazione)

Vogliamo dimostrare che $J = f(I)$ è un intervallo.

1.  **Obiettivo**: Dobbiamo prendere due punti qualsiasi $y_1, y_2$ nell'immagine $J$ e un valore $\lambda$ strettamente compreso tra loro ($y_1 < \lambda < y_2$), e dimostrare che anche $\lambda$ appartiene all'immagine $J$.

2.  **Definizione dell'Immagine**:
    * Sia $y_1 \in J$ e $y_2 \in J$, con $y_1 < y_2$.
    * Per definizione di immagine, esistono $x_1 \in I$ e $x_2 \in I$ tali che:
        * $f(x_1) = y_1$
        * $f(x_2) = y_2$
    * Poiché $y_1 \neq y_2$, segue che $x_1 \neq x_2$.

3.  **Costruzione di un Sottointervallo Chiuso**:
    * Sia $I = (a, b)$ il nostro intervallo aperto. I due punti $x_1$ e $x_2$ appartengono a $(a, b)$.
    * Consideriamo il sottointervallo **chiuso e limitato** $K$ i cui estremi sono $x_1$ e $x_2$.
        * Se $x_1 < x_2$, poniamo $K = [x_1, x_2]$.
        * Se $x_2 < x_1$, poniamo $K = [x_2, x_1]$.
    * In entrambi i casi, poiché $x_1, x_2 \in (a, b)$, l'intero intervallo chiuso $K$ è contenuto nell'intervallo aperto $(a, b)$.
        $$
        K \subset I = (a, b)
        $$

4.  **Applicazione del TVI Standard (su Intervallo Chiuso)**:
    * Per ipotesi, la funzione $f$ è continua su tutto $I = (a, b)$.
    * Di conseguenza, $f$ è continua anche sulla restrizione al sottointervallo chiuso $K$.
    * Prendiamo il caso $x_1 < x_2$, quindi $K = [x_1, x_2]$.
        * Abbiamo $f(x_1) = y_1$ e $f(x_2) = y_2$.
        * Abbiamo scelto $\lambda$ tale che $y_1 < \lambda < y_2$.
    * Possiamo ora applicare il **Teorema dei Valori Intermedi standard** alla funzione continua $f$ sull'intervallo **chiuso** $K = [x_1, x_2]$.
    * Il teorema garantisce che esiste almeno un punto $c \in (x_1, x_2)$ tale che $f(c) = \lambda$.
    * (Se $x_2 < x_1$, applichiamo il TVI a $K=[x_2, x_1]$: $f(x_2)=y_2 < \lambda < y_1=f(x_1)$, quindi $\exists c \in (x_2, x_1)$ t.c. $f(c) = \lambda$).

5.  **Conclusione**:
    * In entrambi i casi, abbiamo trovato un $c$ appartenente all'intervallo $K$.
    * Ma sapevamo che $K \subset I = (a, b)$.
    * Quindi, $c \in I = (a, b)$.
    * Abbiamo dimostrato che esiste un $c$ nel dominio *originale* $(a, b)$ tale che $f(c) = \lambda$.
    * Questo significa, per definizione di immagine, che $\lambda \in f(I) = J$.

Avendo dimostrato che per ogni $y_1, y_2 \in J$ e ogni $\lambda$ compreso tra loro, $\lambda \in J$, abbiamo formalmente verificato che $J = f(I)$ è un intervallo.