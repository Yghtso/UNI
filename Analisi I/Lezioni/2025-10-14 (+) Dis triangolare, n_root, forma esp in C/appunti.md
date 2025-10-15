# Conversioni di Forma e Radici n-esime

## Conversione dalla Forma Algebrica alla Trigonometrica

Il passaggio dalla forma algebrica $z=a+ib$ alla forma trigonometrica $z=\rho(\cos\theta+i\sin\theta)$ richiede il calcolo del modulo $\rho$ e dell'argomento $\theta$.

**1. Calcolo del Modulo $\rho$**
Il modulo è calcolato direttamente dalla definizione:
$$\rho = |z| = \sqrt{a^2+b^2}$$

**2. Calcolo dell'Argomento $\theta$**
L'argomento $\theta$ è l'angolo che soddisfa simultaneamente il sistema:
$$\begin{cases} \cos\theta = \frac{a}{\rho} \\ \sin\theta = \frac{b}{\rho} \end{cases}$$
Per trovare un valore numerico di $\theta$, si utilizza la funzione arcotangente ($\arctan$), che però ha come codominio $(-\pi/2, \pi/2)$ e quindi restituisce l'angolo corretto solo per i numeri complessi nel I e IV quadrante (cioè con parte reale positiva). Per gli altri casi, è necessario un aggiustamento basato sul quadrante in cui si trova il numero $z$.

### Definizione Formale di $\theta$ per Casistiche
Sia $z=a+ib$.

* **Caso 1: $a > 0$ (I e IV quadrante)**
    Il punto si trova nel semipiano destro. L'arcotangente fornisce direttamente l'angolo corretto (l'argomento principale, compreso tra $-\pi/2$ e $\pi/2$).
    $$\theta = \arctan\left(\frac{b}{a}\right)$$

* **Caso 2: $a < 0$ e $b \ge 0$ (II quadrante e semiasse reale negativo)**
    Il punto si trova nel semipiano sinistro, in alto. L'arcotangente di $b/a$ (che è un numero negativo) darebbe un angolo nel IV quadrante. Per ottenere l'angolo corretto nel II quadrante, è necessario aggiungere $\pi$.
    $$\theta = \arctan\left(\frac{b}{a}\right) + \pi$$

* **Caso 3: $a < 0$ e $b < 0$ (III quadrante)**
    Il punto si trova nel semipiano sinistro, in basso. L'arcotangente di $b/a$ (che è un numero positivo) darebbe un angolo nel I quadrante. Per ottenere l'angolo corretto nel III quadrante, è necessario sottrarre $\pi$.
    $$\theta = \arctan\left(\frac{b}{a}\right) - \pi$$

* **Caso 4: Casi sugli Assi (quando $a=0$ o $b=0$)**
    * Se $a=0, b>0$ (semiasse immaginario positivo): $\theta = \frac{\pi}{2}$
    * Se $a=0, b<0$ (semiasse immaginario negativo): $\theta = -\frac{\pi}{2}$
    * Se $a>0, b=0$ (semiasse reale positivo): $\theta = 0$
    * Se $a<0, b=0$ (semiasse reale negativo): $\theta = \pi$

## Radice n-esima di un Numero Complesso

La potenza di un numero complesso in forma trigonometrica si calcola con la **Formula di De Moivre**:
$$[ \rho(\cos\theta + i\sin\theta) ]^n = \rho^n(\cos(n\theta) + i\sin(n\theta))$$
L'operazione di radice $n$-esima è l'inversa della potenza. Vogliamo trovare tutti i numeri complessi $z$ tali che $z^n = w$, dove $w$ è un numero complesso dato.

### Definizione Formale e Derivazione
Sia $w = \rho(\cos\theta + i\sin\theta)$ il numero complesso di cui vogliamo calcolare le radici $n$-esime.
Cerchiamo le soluzioni $z = r(\cos\phi + i\sin\phi)$ dell'equazione $z^n = w$.

1.  **Impostazione dell'equazione**:
    Usando la formula di De Moivre per $z^n$, l'equazione diventa:
    $$r^n(\cos(n\phi) + i\sin(n\phi)) = \rho(\cos\theta + i\sin\theta)$$

2.  **Uguaglianza tra numeri complessi in forma polare**:
    Due numeri complessi in forma polare sono uguali se e solo se i loro moduli sono uguali e i loro argomenti sono uguali a meno di multipli interi di $2\pi$.
    * **Uguaglianza dei moduli**:
        $$r^n = \rho \implies r = \sqrt[n]{\rho}$$
        Poiché $r$ e $\rho$ sono reali e non negativi, la radice $n$-esima reale è unica.
    * **Uguaglianza degli argomenti**:
        Qui sorge l'aspetto cruciale della periodicità. L'argomento di $w$ non è solo $\theta$, ma qualsiasi angolo della forma $\theta + 2k\pi$ con $k \in \mathbb{Z}$ (un intero qualsiasi). Pertanto, l'uguaglianza corretta è:
        $$n\phi = \theta + 2k\pi$$

3.  **Risoluzione per l'argomento $\phi$**:
    Isolando $\phi$, otteniamo:
    $$\phi = \frac{\theta + 2k\pi}{n}$$

4.  **Analisi della periodicità di $k$**:
    Sembrerebbe che ci siano infinite soluzioni, una per ogni intero $k$. Tuttavia, le funzioni seno e coseno sono periodiche di $2\pi$. Troviamo quanti valori distinti di $\phi$ esistono prima che inizino a ripetersi.
    Consideriamo i valori di $k$ da $0$ a $n-1$:
    * $k=0 \implies \phi_0 = \frac{\theta}{n}$
    * $k=1 \implies \phi_1 = \frac{\theta}{n} + \frac{2\pi}{n}$
    * $k=2 \implies \phi_2 = \frac{\theta}{n} + \frac{4\pi}{n}$
    * ...
    * $k=n-1 \implies \phi_{n-1} = \frac{\theta}{n} + \frac{2(n-1)\pi}{n}$
    Tutti questi angoli sono distinti e compresi in un intervallo di ampiezza $2\pi$.
    Se ora prendiamo $k=n$:
    $$\phi_n = \frac{\theta + 2n\pi}{n} = \frac{\theta}{n} + \frac{2n\pi}{n} = \frac{\theta}{n} + 2\pi$$
    L'angolo $\phi_n$ è coterminale a $\phi_0$ (differisce di un angolo giro), quindi $\cos(\phi_n)=\cos(\phi_0)$ e $\sin(\phi_n)=\sin(\phi_0)$. La radice per $k=n$ è identica a quella per $k=0$. Lo stesso vale per $k=n+1$ (identica a $k=1$) e così via.
    Concludiamo che esistono esattamente **$n$ radici distinte**, ottenute per $k = 0, 1, 2, \dots, n-1$.

### Formula Generale per la Radice n-esima
Le $n$ radici $n$-esime di un numero complesso $w = \rho(\cos\theta + i\sin\theta)$ sono date dalla formula:
$$z_k = \sqrt[n]{\rho} \left[ \cos\left(\frac{\theta + 2k\pi}{n}\right) + i\sin\left(\frac{\theta + 2k\pi}{n}\right) \right]$$
per $k = 0, 1, 2, \dots, n-1$.

Geometricamente, le $n$ radici si trovano tutte su una circonferenza di raggio $\sqrt[n]{\rho}$ centrata nell'origine e sono i vertici di un poligono regolare di $n$ lati.

# Ordinamento e Disuguaglianza Triangolare in C

## L'Impossibilità di Ordinare i Numeri Complessi

A differenza dei numeri reali, l'insieme dei numeri complessi $\mathbb{C}$ non può essere dotato di una relazione d'ordine totale che sia compatibile con le sue operazioni di campo (somma e prodotto).

### Enunciato Formale
Non esiste alcuna relazione d'ordine "$\ge$" in $\mathbb{C}$ che soddisfi simultaneamente le seguenti proprietà di un **campo ordinato**:
1.  **Tricotomia**: Per ogni $z \in \mathbb{C}$, vale una e una sola delle seguenti: $z > 0$, $z < 0$, oppure $z=0$.
2.  **Compatibilità con la somma**: Se $z_1 > 0$ e $z_2 > 0$, allora $z_1 + z_2 > 0$.
3.  **Compatibilità con il prodotto**: Se $z_1 > 0$ e $z_2 > 0$, allora $z_1 \cdot z_2 > 0$.

### Dimostrazione (per assurdo)

1.  **Ipotesi per assurdo**: Assumiamo che $\mathbb{C}$ sia un campo ordinato. Questo implica che per ogni numero complesso non nullo, esso deve essere o "positivo" ($>0$) o "negativo" ($<0$).

2.  **Analisi dell'unità immaginaria $i$**: Consideriamo l'unità immaginaria $i$. Poiché $i \neq 0$, per la proprietà di tricotomia deve essere necessariamente $i > 0$ oppure $i < 0$. Analizziamo entrambi i casi.

    * **Caso A: Ipotizziamo che $i > 0$**.
        Se $i > 0$, allora per la proprietà di compatibilità con il prodotto (usando $z_1 = i$ e $z_2 = i$), il loro prodotto deve essere positivo:
        $$i \cdot i > 0$$
        Ma sappiamo che $i \cdot i = i^2 = -1$. Questo implicherebbe:
        $$-1 > 0$$
        In ogni campo ordinato, se $-1 > 0$, allora anche $1 > 0$ (poiché $1 = (-1)(-1)$ e il prodotto di due negativi è positivo, oppure $1 = 1^2$ e il quadrato di ogni elemento non nullo è positivo).
        Se sia $1 > 0$ che $-1 > 0$, allora per la compatibilità con la somma:
        $$1 + (-1) > 0 \implies 0 > 0$$
        Questa è una palese violazione della proprietà di tricotomia. Pertanto, l'ipotesi $i>0$ porta a una contraddizione.

    * **Caso B: Ipotizziamo che $i < 0$**.
        Se $i < 0$, allora il suo opposto, $-i$, deve essere positivo: $-i > 0$.
        Usando di nuovo la compatibilità con il prodotto, il prodotto di $-i$ con sé stesso deve essere positivo:
        $$(-i) \cdot (-i) > 0$$
        Ma $(-i) \cdot (-i) = (-1)^2 \cdot i^2 = 1 \cdot (-1) = -1$. Anche in questo caso, l'ipotesi porta a:
        $$-1 > 0$$
        Come abbiamo visto nel Caso A, questa conclusione porta alla contraddizione $0>0$.

3.  **Conclusione**: Entrambi i possibili casi ($i > 0$ e $i < 0$) portano a una contraddizione. Poiché $i \neq 0$, l'unica possibilità è che l'ipotesi iniziale sia falsa. Non è possibile definire una relazione d'ordine in $\mathbb{C}$ che sia coerente con la sua struttura di campo.

Di conseguenza, espressioni come $z_1 < z_2$ (per $z_1, z_2$ non reali) e disequazioni complesse non hanno significato.

## Disuguaglianza Triangolare in Campo Complesso

Anche se non è possibile confrontare due numeri complessi, è possibile confrontare i loro moduli, che sono numeri reali.

### Enunciato Formale
Per ogni coppia di numeri complessi $z_1, z_2 \in \mathbb{C}$, vale la seguente disuguaglianza:
$$|z_1 + z_2| \le |z_1| + |z_2|$$
Geometricamente, questo significa che la lunghezza del lato di un triangolo è sempre minore o uguale alla somma delle lunghezze degli altri due lati.

### Dimostrazione
La dimostrazione sfrutta la proprietà fondamentale che lega un numero complesso al suo coniugato: $|z|^2 = z \cdot \bar{z}$.

1.  **Elevamento al quadrato**: Poiché il modulo è una quantità non negativa, la disuguaglianza $|z_1+z_2| \le |z_1|+|z_2|$ è equivalente a $|z_1+z_2|^2 \le (|z_1|+|z_2|)^2$. Lavorare con i quadrati dei moduli semplifica i calcoli.

2.  **Sviluppo del membro di sinistra**:
    $$|z_1+z_2|^2 = (z_1+z_2) \cdot \overline{(z_1+z_2)}$$
    Usando la proprietà $\overline{a+b} = \bar{a}+\bar{b}$:
    $$= (z_1+z_2)(\bar{z_1}+\bar{z_2})$$
    Sviluppando il prodotto:
    $$= z_1\bar{z_1} + z_1\bar{z_2} + z_2\bar{z_1} + z_2\bar{z_2}$$
    Sostituendo $z\bar{z} = |z|^2$:
    $$= |z_1|^2 + |z_2|^2 + z_1\bar{z_2} + z_2\bar{z_1}$$

3.  **Passaggio fondamentale con la Parte Reale**:
    Consideriamo il termine $z_1\bar{z_2} + z_2\bar{z_1}$. Notiamo che $z_2\bar{z_1}$ è il coniugato di $z_1\bar{z_2}$ (infatti $\overline{z_1\bar{z_2}} = \bar{z_1}\overline{\bar{z_2}} = \bar{z_1}z_2$).
    Ricordando la formula per la parte reale di un numero $w$: $\text{Re}(w) = \frac{w+\bar{w}}{2}$.
    Se poniamo $w = z_1\bar{z_2}$, allora $w+\bar{w} = 2\text{Re}(w)$.
    Quindi, possiamo sostituire:
    $$z_1\bar{z_2} + z_2\bar{z_1} = 2\text{Re}(z_1\bar{z_2})$$
    Il membro di sinistra diventa:
    $$|z_1|^2 + |z_2|^2 + 2\text{Re}(z_1\bar{z_2})$$

4.  **Sviluppo del membro di destra:
    Questo è un semplice quadrato di binomio con numeri reali:
    $$(|z_1|+|z_2|)^2 = |z_1|^2 + |z_2|^2 + 2|z_1||z_2|$$

5.  **Confronto e conclusione**:
    La disuguaglianza $|z_1+z_2|^2 \le (|z_1|+|z_2|)^2$ è ora diventata:
    $$|z_1|^2 + |z_2|^2 + 2\text{Re}(z_1\bar{z_2}) \le |z_1|^2 + |z_2|^2 + 2|z_1||z_2|$$
    Semplificando i termini comuni, la disuguaglianza da dimostrare si riduce a:
    $$\text{Re}(z_1\bar{z_2}) \le |z_1||z_2|$$
    Ora, ricordiamo due proprietà fondamentali:
    * Per qualsiasi numero complesso $w$, la sua parte reale è sempre minore o uguale al suo modulo: $\text{Re}(w) \le |w|$.
    * Il modulo di un prodotto è il prodotto dei moduli: $|ab|=|a||b|$, e il modulo del coniugato è uguale al modulo originale: $|\bar{a}|=|a|$.
    Applichiamo queste proprietà:
    $$\text{Re}(z_1\bar{z_2}) \le |z_1\bar{z_2}| = |z_1||\bar{z_2}| = |z_1||z_2|$$
    Abbiamo quindi dimostrato che $\text{Re}(z_1\bar{z_2}) \le |z_1||z_2|$ è sempre vera. Poiché tutti i passaggi sono equivalenze o disuguaglianze vere, la tesi iniziale è dimostrata.