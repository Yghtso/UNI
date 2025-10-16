# Analisi Asintotica e Infinitesimi

## Principio di Sostituzione degli Infinitesimi

Quando si lavora con una funzione polinomiale che è infinitesima per $x \to x_0$, il suo comportamento è dominato dal termine di grado più basso, che è quello che tende a zero più "lentamente".

**Definizione Formale (o-piccolo)**: Siano $f(x)$ e $g(x)$ due funzioni definite in un intorno di $x_0$ (con $x_0$ che può essere un valore finito o $\pm\infty$), e sia $g(x) \neq 0$ in tale intorno (escluso al più $x_0$). Si dice che $f$ è **o-piccolo** di $g$ per $x \to x_0$, e si scrive $f(x) = o(g(x))$, se il limite del loro rapporto è zero:
$$\lim_{x \to x_0} \frac{f(x)}{g(x)} = 0$$
Questo significa che $f(x)$ tende a zero "più velocemente" di $g(x)$.

**Teorema (Parte Principale di un Polinomio Infinitesimo)**:
Sia $P(x) = a_k x^k + a_{k+1} x^{k+1} + \dots + a_m x^m$ un polinomio con $a_k \neq 0$ e $k \ge 1$. Per $x \to 0$, $P(x)$ è un infinitesimo e il suo termine di grado più basso, $a_k x^k$, è detto **parte principale**. Vale la seguente relazione:
$$P(x) - a_k x^k = o(x^k)$$

**Dimostrazione**:
Vogliamo dimostrare che $P(x) - a_k x^k$ è un o-piccolo di $x^k$ per $x \to 0$. Applichiamo la definizione:
1.  **Costruiamo la differenza**:
    $$P(x) - a_k x^k = (a_k x^k + a_{k+1} x^{k+1} + \dots + a_m x^m) - a_k x^k = a_{k+1} x^{k+1} + \dots + a_m x^m$$
2.  **Calcoliamo il limite del rapporto**:
    $$\lim_{x \to 0} \frac{P(x) - a_k x^k}{x^k} = \lim_{x \to 0} \frac{a_{k+1} x^{k+1} + a_{k+2} x^{k+2} + \dots + a_m x^m}{x^k}$$
3.  **Semplifichiamo l'espressione**:
    $$= \lim_{x \to 0} \left( \frac{a_{k+1} x^{k+1}}{x^k} + \frac{a_{k+2} x^{k+2}}{x^k} + \dots + \frac{a_m x^m}{x^k} \right)$$
    $$= \lim_{x \to 0} (a_{k+1} x + a_{k+2} x^2 + \dots + a_m x^{m-k})$$
4.  **Conclusione**:
    Il risultato del limite è un polinomio in $x$ senza termine noto. Sostituendo $x=0$, ogni termine si annulla:
    $$a_{k+1}(0) + a_{k+2}(0)^2 + \dots = 0$$
Poiché il limite del rapporto è zero, abbiamo formalmente dimostrato che $P(x) - a_k x^k = o(x^k)$.
Questo giustifica il **Principio di Sostituzione degli Infinitesimi**: nel calcolo di limiti, un infinitesimo polinomiale può essere sostituito dalla sua parte principale.

## Equivalenza Asintotica

**Definizione Formale**: Siano $f(x)$ e $g(x)$ due funzioni definite in un intorno di $x_0$, entrambe non nulle in tale intorno (escluso al più $x_0$). Si dice che $f$ è **asintoticamente equivalente** a $g$ per $x \to x_0$, e si scrive $f(x) \sim g(x)$, se il limite del loro rapporto è 1:
$$\lim_{x \to x_0} \frac{f(x)}{g(x)} = 1$$

**Relazione con o-piccolo**: La definizione di equivalenza asintotica è formalmente equivalente all'espressione $f(x) = g(x) + o(g(x))$.

**Dimostrazione**:
* **($\Rightarrow$) Se $f \sim g$, allora $f = g + o(g)$**:
    Per ipotesi, $\lim_{x \to x_0} \frac{f(x)}{g(x)} = 1$. Vogliamo dimostrare che $f(x) - g(x) = o(g(x))$, ovvero che $\lim_{x \to x_0} \frac{f(x)-g(x)}{g(x)} = 0$.
    $$\lim_{x \to x_0} \frac{f(x)-g(x)}{g(x)} = \lim_{x \to x_0} \left( \frac{f(x)}{g(x)} - \frac{g(x)}{g(x)} \right) = \lim_{x \to x_0} \left( \frac{f(x)}{g(x)} - 1 \right)$$
    Poiché per ipotesi il rapporto tende a 1, il limite della differenza è $1-1=0$. Tesi dimostrata.
* **($\Leftarrow$) Se $f = g + o(g)$, allora $f \sim g$**:
    Per ipotesi, $f(x) - g(x) = o(g(x))$, che per definizione significa $\lim_{x \to x_0} \frac{f(x)-g(x)}{g(x)} = 0$. Vogliamo dimostrare che $\lim_{x \to x_0} \frac{f(x)}{g(x)} = 1$.
    $$\lim_{x \to x_0} \frac{f(x)}{g(x)} = \lim_{x \to x_0} \frac{g(x) + (f(x)-g(x))}{g(x)} = \lim_{x \to x_0} \left( \frac{g(x)}{g(x)} + \frac{f(x)-g(x)}{g(x)} \right)$$
    $$= \lim_{x \to x_0} \left( 1 + \frac{f(x)-g(x)}{g(x)} \right) = 1 + 0 = 1$$
    Tesi dimostrata.

## Limite di Rapporti tra Polinomi Infinitesimi

Consideriamo il limite per una successione $x_n \to 0$ del rapporto di due polinomi infinitesimi $P(x_n)$ e $Q(x_n)$.
Sia $P(x) = a_{k_p} x^{k_p} + \dots$ (parte principale di ordine $k_p$) e $Q(x) = b_{k_q} x^{k_q} + \dots$ (parte principale di ordine $k_q$).
Per il principio di sostituzione degli infinitesimi, il limite del rapporto dei polinomi è uguale al limite del rapporto delle loro parti principali:
$$\lim_{n \to \infty} \frac{P(x_n)}{Q(x_n)} = \lim_{n \to \infty} \frac{a_{k_p} (x_n)^{k_p}}{b_{k_q} (x_n)^{k_q}} = \frac{a_{k_p}}{b_{k_q}} \lim_{n \to \infty} (x_n)^{k_p - k_q}$$

Analizziamo il limite in base alla relazione tra gli ordini di infinitesimo $k_p$ e $k_q$.

### Caso 1: Ordini Uguali ($k_p = k_q$)
Se gli ordini di infinitesimo coincidono, $k_p - k_q = 0$.
$$\lim_{n \to \infty} (x_n)^{0} = \lim_{n \to \infty} 1 = 1$$
Il limite complessivo è il rapporto tra i coefficienti delle parti principali.
$$\lim_{n \to \infty} \frac{P(x_n)}{Q(x_n)} = \frac{a_{k_p}}{b_{k_q}}$$

### Caso 2: Numeratore di Ordine Superiore ($k_p > k_q$)
Se il numeratore è un infinitesimo di ordine superiore, significa che tende a zero più velocemente del denominatore. L'esponente $k_p - k_q$ è un intero positivo.
Poiché $x_n \to 0$, il termine $(x_n)^{k_p - k_q}$ tenderà a 0.
$$\lim_{n \to \infty} \frac{P(x_n)}{Q(x_n)} = \frac{a_{k_p}}{b_{k_q}} \cdot 0 = 0$$

### Caso 3: Denominatore di Ordine Superiore ($k_p < k_q$)
Se il denominatore è un infinitesimo di ordine superiore, il numeratore tende a zero più lentamente. L'esponente $k_p - k_q$ è un intero negativo. Poniamo $k_q - k_p = d > 0$.
$$\lim_{n \to \infty} \frac{P(x_n)}{Q(x_n)} = \frac{a_{k_p}}{b_{k_q}} \lim_{n \to \infty} \frac{1}{(x_n)^d}$$
Poiché $x_n \to 0$, il denominatore $(x_n)^d$ tende a 0, e il suo reciproco diverge a $\infty$. Il segno del limite dipende dal segno del rapporto dei coefficienti e dal comportamento di $(x_n)^d$.

* **Se $x_n \ge 0$ per $n$ sufficientemente grande ($x_n \to 0^+$)**:
    Il termine $(x_n)^d$ tende a $0$ mantenendosi positivo. Il limite del reciproco è $+\infty$.
    $$\lim_{n \to \infty} \frac{P(x_n)}{Q(x_n)} = \frac{a_{k_p}}{b_{k_q}} \cdot (+\infty) = \text{sgn}\left(\frac{a_{k_p}}{b_{k_q}}\right) \cdot \infty$$

* **Se $x_n \le 0$ per $n$ sufficientemente grande ($x_n \to 0^-$)**:
    Il segno di $(x_n)^d$ dipende dalla parità di $d = k_q - k_p$:
    * Se $d$ è **pari**, $(x_n)^d$ è positivo e tende a $0^+$. Il limite è $\text{sgn}(\frac{a_{k_p}}{b_{k_q}}) \cdot \infty$.
    * Se $d$ è **dispari**, $(x_n)^d$ è negativo e tende a $0^-$. Il limite del reciproco è $-\infty$. Il limite totale è $\text{sgn}(\frac{a_{k_p}}{b_{k_q}}) \cdot (-\infty) = -\text{sgn}(\frac{a_{k_p}}{b_{k_q}}) \cdot \infty$.

# Analisi Asintotica e Continuità di Funzioni

## Principio di Sostituzione degli Infiniti

In modo analogo agli infinitesimi, quando si lavora con una funzione polinomiale che è un infinito per $x \to \infty$, il suo comportamento è dominato dal termine di grado più alto.

**Teorema (Parte Principale di un Polinomio Infinito)**:
Sia $P(x) = a_m x^m + a_{m-1} x^{m-1} + \dots + a_k x^k$ un polinomio con $a_m \neq 0$. Per $x \to \infty$, $P(x)$ è un infinito e il suo termine di grado più alto, $a_m x^m$, è detto **parte principale**. Vale la seguente relazione:
$$P(x) \sim a_m x^m$$
O, in modo equivalente usando la notazione o-piccolo:
$$P(x) - a_m x^m = o(x^m)$$

**Dimostrazione**:
Vogliamo dimostrare che la differenza tra il polinomio e la sua parte principale è un o-piccolo della parte principale stessa per $x \to \infty$.
1.  **Costruiamo la differenza**:
    $$P(x) - a_m x^m = a_{m-1} x^{m-1} + \dots + a_k x^k$$
2.  **Calcoliamo il limite del rapporto**:
    $$\lim_{x \to \infty} \frac{P(x) - a_m x^m}{x^m} = \lim_{x \to \infty} \frac{a_{m-1} x^{m-1} + a_{m-2} x^{m-2} + \dots + a_k x^k}{x^m}$$
3.  **Semplifichiamo l'espressione**:
    $$= \lim_{x \to \infty} \left( \frac{a_{m-1}}{x} + \frac{a_{m-2}}{x^2} + \dots + \frac{a_k}{x^{m-k}} \right)$$
4.  **Conclusione**:
    Per $x \to \infty$, ogni termine della forma $c/x^p$ (con $p>0$) tende a zero. La somma di termini che tendono a zero è zero.
    $$= 0 + 0 + \dots + 0 = 0$$
Poiché il limite del rapporto è zero, abbiamo dimostrato l'assunto. Questo giustifica il **Principio di Sostituzione degli Infiniti**: nel calcolo di limiti di rapporti, un infinito polinomiale può essere sostituito dalla sua parte principale.

### Limite di Rapporti tra Polinomi Infiniti
Consideriamo il limite per $x \to \infty$ del rapporto di due polinomi infiniti, $P(x)$ di grado $m_p$ e $Q(x)$ di grado $m_q$.
$$\lim_{x \to \infty} \frac{P(x)}{Q(x)} = \lim_{x \to \infty} \frac{a_{m_p} x^{m_p}}{b_{m_q} x^{m_q}} = \frac{a_{m_p}}{b_{m_q}} \lim_{x \to \infty} x^{m_p - m_q}$$

* **Caso 1: Gradi Uguali ($m_p = m_q$)**
    L'esponente è zero, $x^0=1$. Il limite è il rapporto tra i coefficienti di grado massimo.
    $$\lim_{x \to \infty} \frac{P(x)}{Q(x)} = \frac{a_{m_p}}{b_{m_q}}$$

* **Caso 2: Grado del Numeratore Maggiore ($m_p > m_q$)**
    L'esponente $m_p - m_q$ è positivo. Il termine $x^{m_p - m_q}$ diverge a $+\infty$.
    $$\lim_{x \to \infty} \frac{P(x)}{Q(x)} = \frac{a_{m_p}}{b_{m_q}} \cdot (+\infty) = \text{sgn}\left(\frac{a_{m_p}}{b_{m_q}}\right) \cdot \infty$$

* **Caso 3: Grado del Denominatore Maggiore ($m_p < m_q$)**
    L'esponente $m_p - m_q$ è negativo. Il termine $x^{m_p - m_q} = 1/x^{m_q - m_p}$ tende a 0.
    $$\lim_{x \to \infty} \frac{P(x)}{Q(x)} = \frac{a_{m_p}}{b_{m_q}} \cdot 0 = 0$$

## Definizioni di Continuità di una Funzione

### Definizione "Topologica" (basata sui limiti)
Sia $f: D \to \mathbb{R}$ una funzione e sia $x_0$ un punto di accumulazione per il dominio $D$ e tale che $x_0 \in D$. La funzione $f$ si dice **continua** nel punto $x_0$ se soddisfa le seguenti tre condizioni:
1.  **Esiste il limite**: Esiste $\lim_{x \to x_0} f(x)$.
2.  **Il limite è finito**: $\lim_{x \to x_0} f(x) = L \in \mathbb{R}$.
3.  **Il limite coincide con il valore della funzione**: $L = f(x_0)$.

Mettendo insieme le condizioni, la definizione si compatta in un'unica espressione:
$$\lim_{x \to x_0} f(x) = f(x_0)$$
Questa proprietà è talvolta descritta come la possibilità di "scambiare" l'operatore di limite con la valutazione della funzione:
$$\lim_{x \to x_0} f(x) = f\left(\lim_{x \to x_0} x\right)$$

### Definizione "Metrica" (o $\varepsilon-\delta$)
Questa è la definizione più formale e rigorosa, che non si basa sul concetto pre-esistente di limite.
Sia $f: D \to \mathbb{R}$ una funzione e $x_0 \in D$. La funzione $f$ è **continua** in $x_0$ se:
$$\forall \varepsilon > 0, \exists \delta > 0 \text{ tale che } \forall x \in D, \text{ se } |x - x_0| < \delta \text{ allora } |f(x) - f(x_0)| < \varepsilon$$
* $\varepsilon$ (epsilon) rappresenta una **tolleranza sull'output**: un arbitrario piccolo "margine di errore" sull'asse y attorno a $f(x_0)$.
* $\delta$ (delta) rappresenta una **tolleranza sull'input**: un corrispondente "margine di errore" sull'asse x attorno a $x_0$.
La definizione afferma che per quanto piccola si scelga la tolleranza $\varepsilon$ in uscita, è sempre possibile trovare una tolleranza $\delta$ in ingresso tale che tutti i punti $x$ all'interno dell'intorno di $x_0$ definito da $\delta$ vengano mappati all'interno dell'intorno di $f(x_0)$ definito da $\varepsilon$.

## Equivalenza delle Definizioni e Continuità per Successioni

**Teorema di Caratterizzazione (o Teorema Ponte)**: Le definizioni di continuità (topologica e metrica) sono equivalenti. Inoltre, esse sono equivalenti alla seguente definizione "per successioni".

**Definizione per Successioni**: Una funzione $f$ è continua in $x_0$ se e solo se per ogni successione $\{x_n\}_{n \in \mathbb{N}}$ di punti del dominio tale che $\lim_{n \to \infty} x_n = x_0$, risulta che la successione delle immagini converge al valore della funzione nel punto:
$$\lim_{n \to \infty} f(x_n) = f(x_0)$$

**Dimostrazione dell'Equivalenza**

* **($\Rightarrow$) La continuità ($\varepsilon-\delta$) implica la continuità per successioni.**
    * **Ipotesi**: $f$ è continua in $x_0$ secondo la definizione $\varepsilon-\delta$. Sia $\{x_n\}$ una qualunque successione in $D$ tale che $x_n \to x_0$.
    * **Tesi**: Dobbiamo dimostrare che $f(x_n) \to f(x_0)$.
    * **Dimostrazione**: Fissiamo un $\varepsilon > 0$ arbitrario. Per l'ipotesi di continuità, sappiamo che esiste un $\delta > 0$ tale che $|x - x_0| < \delta \implies |f(x) - f(x_0)| < \varepsilon$.
    Poiché $x_n \to x_0$, in corrispondenza di questo $\delta$ esiste un indice $N \in \mathbb{N}$ tale che per ogni $n > N$ si ha $|x_n - x_0| < \delta$.
    Combinando le due implicazioni, per ogni $n > N$ si ha che $|x_n - x_0| < \delta$, il che a sua volta implica $|f(x_n) - f(x_0)| < \varepsilon$.
    Abbiamo quindi dimostrato che $\forall \varepsilon > 0, \exists N \in \mathbb{N}$ tale che $\forall n > N, |f(x_n) - f(x_0)| < \varepsilon$. Questa è la definizione di $\lim_{n \to \infty} f(x_n) = f(x_0)$.

* **($\Leftarrow$) La continuità per successioni implica la continuità ($\varepsilon-\delta$) (per assurdo).**
    * **Ipotesi**: Per ogni successione $x_n \to x_0$, si ha $f(x_n) \to f(x_0)$.
    * **Tesi**: $f$ è continua in $x_0$ secondo la definizione $\varepsilon-\delta$.
    * **Dimostrazione per assurdo**: Supponiamo per assurdo che $f$ *non* sia continua in $x_0$. Questo significa negare la definizione $\varepsilon-\delta$:
        $$\exists \varepsilon_0 > 0 \text{ tale che } \forall \delta > 0, \exists x \in D \text{ con } |x - x_0| < \delta \text{ ma } |f(x) - f(x_0)| \ge \varepsilon_0$$
    * Usiamo questa negazione per costruire una successione "patologica". Scegliamo una sequenza di $\delta$ che tende a zero, ad esempio $\delta_n = 1/n$ per $n=1, 2, 3, \dots$.
    * Per ogni $\delta_n$, la negazione ci garantisce che esiste un punto $x_n \in D$ tale che:
        $$|x_n - x_0| < \delta_n = \frac{1}{n} \quad \text{e} \quad |f(x_n) - f(x_0)| \ge \varepsilon_0$$
    * Consideriamo la successione $\{x_n\}$ che abbiamo costruito. Dalla prima condizione, $|x_n - x_0| < 1/n$, per il Teorema del Confronto si ha che $\lim_{n \to \infty} x_n = x_0$.
    * Per la nostra ipotesi di partenza (continuità per successioni), se $x_n \to x_0$, allora deve valere $\lim_{n \to \infty} f(x_n) = f(x_0)$.
    * Ma la seconda condizione della nostra costruzione, $|f(x_n) - f(x_0)| \ge \varepsilon_0$ per ogni $n$, contraddice palesemente il fatto che $f(x_n)$ stia convergendo a $f(x_0)$, perché la loro distanza non diventa mai più piccola di $\varepsilon_0$.
    * L'aver raggiunto una contraddizione implica che l'assunzione "f non è continua" deve essere falsa. Pertanto, $f$ deve essere continua.
# Algebra delle Funzioni Continue

Un teorema fondamentale dell'analisi matematica stabilisce che le proprietà di continuità si preservano attraverso le operazioni algebriche di base: somma, prodotto e quoziente.

**Teorema**: Siano $f: D \to \mathbb{R}$ and $g: D \to \mathbb{R}$ due funzioni continue in un punto $x_0 \in D$. Allora anche le seguenti funzioni sono continue in $x_0$:
1.  La funzione **somma**: $f+g$
2.  La funzione **prodotto**: $f \cdot g$
3.  La funzione **quoziente**: $f/g$, a condizione che $g(x_0) \neq 0$.

Dimostreremo ciascun punto formalmente, utilizzando la definizione $\varepsilon-\delta$ di continuità.

## 1. Continuità della Funzione Somma

**Ipotesi**:
* $f$ è continua in $x_0$: $\forall \varepsilon_f > 0, \exists \delta_f > 0$ t.c. $|x-x_0|<\delta_f \implies |f(x)-f(x_0)|<\varepsilon_f$.
* $g$ è continua in $x_0$: $\forall \varepsilon_g > 0, \exists \delta_g > 0$ t.c. $|x-x_0|<\delta_g \implies |g(x)-g(x_0)|<\varepsilon_g$.

**Tesi**: La funzione $(f+g)(x) = f(x)+g(x)$ è continua in $x_0$. Dobbiamo dimostrare che:
$$\forall \varepsilon > 0, \exists \delta > 0 \text{ t.c. } |x-x_0|<\delta \implies |(f(x)+g(x))-(f(x_0)+g(x_0))|<\varepsilon$$

**Dimostrazione**:
1.  Fissiamo un $\varepsilon > 0$ arbitrario. Il nostro obiettivo è trovare un $\delta$ appropriato.
2.  Consideriamo la quantità che vogliamo maggiorare e applichiamo la **disuguaglianza triangolare**:
    $$|(f(x)+g(x))-(f(x_0)+g(x_0))| = |(f(x)-f(x_0)) + (g(x)-g(x_0))| \le |f(x)-f(x_0)| + |g(x)-g(x_0)|$$
3.  Vogliamo che la somma a destra sia minore di $\varepsilon$. Una strategia comune è richiedere che ciascun addendo sia minore di $\varepsilon/2$.
4.  Per l'ipotesi di continuità di $f$, scegliamo $\varepsilon_f = \varepsilon/2$. Sappiamo che esiste un $\delta_f > 0$ tale che:
    $$|x-x_0|<\delta_f \implies |f(x)-f(x_0)| < \varepsilon/2$$
5.  Analogamente, per la continuità di $g$, scegliamo $\varepsilon_g = \varepsilon/2$. Sappiamo che esiste un $\delta_g > 0$ tale che:
    $$|x-x_0|<\delta_g \implies |g(x)-g(x_0)| < \varepsilon/2$$
6.  Ora dobbiamo scegliere un $\delta$ che garantisca che entrambe le condizioni siano verificate simultaneamente. La scelta appropriata è prendere il più piccolo tra i due delta trovati:
    $$\delta = \min(\delta_f, \delta_g)$$
7.  Se $|x-x_0| < \delta$, allora la disuguaglianza è vera sia per $\delta_f$ che per $\delta_g$. Pertanto, per tali $x$, valgono entrambe le maggiorazioni:
    $$|f(x)-f(x_0)| < \varepsilon/2 \quad \text{e} \quad |g(x)-g(x_0)| < \varepsilon/2$$
8.  Sostituendo nella disuguaglianza triangolare:
    $$|(f(x)+g(x))-(f(x_0)+g(x_0))| \le |f(x)-f(x_0)| + |g(x)-g(x_0)| < \frac{\varepsilon}{2} + \frac{\varepsilon}{2} = \varepsilon$$
Abbiamo quindi dimostrato che per ogni $\varepsilon>0$ esiste un $\delta$ che soddisfa la definizione.
## 2. Continuità della Funzione Prodotto

**Tesi**: La funzione $(f \cdot g)(x) = f(x)g(x)$ è continua in $x_0$.

**Dimostrazione**:
1.  Fissiamo $\varepsilon > 0$. Consideriamo la quantità da maggiorare:
    $$|f(x)g(x) - f(x_0)g(x_0)|$$
2.  Utilizziamo un trucco algebrico: aggiungiamo e sottraiamo il termine "misto" $f(x)g(x_0)$:
    $$|f(x)g(x) - f(x)g(x_0) + f(x)g(x_0) - f(x_0)g(x_0)|$$
3.  Raccogliamo e applichiamo la disuguaglianza triangolare:
    $$|f(x)(g(x)-g(x_0)) + g(x_0)(f(x)-f(x_0))| \le |f(x)(g(x)-g(x_0))| + |g(x_0)(f(x)-f(x_0))|$$
    $$= |f(x)| |g(x)-g(x_0)| + |g(x_0)| |f(x)-f(x_0)|$$
4.  Ora dobbiamo controllare i termini.
    * Poiché $f$ è continua in $x_0$, essa è anche **localmente limitata**. Ciò significa che esiste un intorno di $x_0$ (diciamo per $|x-x_0|<\delta_1$) in cui $|f(x)|$ è limitato da una costante $M$. Ad esempio, $|f(x)| \le |f(x_0)|+1 = M$.
    * $|g(x_0)|$ è una costante.
5.  Per la continuità di $g$, possiamo rendere $|g(x)-g(x_0)|$ piccolo a piacere. Scegliamo di renderlo più piccolo di $\frac{\varepsilon}{2M}$. Esiste un $\delta_g$ tale che:
    $$|x-x_0|<\delta_g \implies |g(x)-g(x_0)| < \frac{\varepsilon}{2M}$$
6.  Per la continuità di $f$, possiamo rendere $|f(x)-f(x_0)|$ piccolo a piacere. Scegliamo di renderlo più piccolo di $\frac{\varepsilon}{2(|g(x_0)|+1)}$ (usiamo $+1$ per evitare problemi se $g(x_0)=0$). Esiste un $\delta_f$ tale che:
    $$|x-x_0|<\delta_f \implies |f(x)-f(x_0)| < \frac{\varepsilon}{2(|g(x_0)|+1)}$$
7.  Scegliamo $\delta = \min(\delta_1, \delta_f, \delta_g)$. Per $|x-x_0|<\delta$, tutte le condizioni precedenti sono verificate. Sostituiamo nella disuguaglianza:
    $$|f(x)g(x) - f(x_0)g(x_0)| \le M \cdot \frac{\varepsilon}{2M} + |g(x_0)| \cdot \frac{\varepsilon}{2(|g(x_0)|+1)}$$
    $$< \frac{\varepsilon}{2} + \frac{\varepsilon}{2} \cdot \frac{|g(x_0)|}{|g(x_0)|+1} \le \frac{\varepsilon}{2} + \frac{\varepsilon}{2} = \varepsilon$$
(poiché la frazione è minore di 1).
## 3. Continuità della Funzione Quoziente

La dimostrazione si ottiene provando prima la continuità della funzione reciproco $1/g$ e poi usando il risultato del prodotto.

### Lemma: Continuità del Reciproco
**Tesi**: Se $g$ è continua in $x_0$ e $g(x_0) \neq 0$, allora la funzione $1/g$ è continua in $x_0$.

**Dimostrazione**:
1.  Vogliamo maggiorare $|\frac{1}{g(x)} - \frac{1}{g(x_0)}| = \left|\frac{g(x_0)-g(x)}{g(x)g(x_0)}\right| = \frac{|g(x)-g(x_0)|}{|g(x)||g(x_0)|}$.
2.  **Passo chiave**: Dobbiamo assicurarci che il denominatore $|g(x)|$ non diventi troppo piccolo. Poiché $g$ è continua e $g(x_0) \neq 0$, per la **permanenza del segno**, esiste un intorno di $x_0$ in cui $g(x)$ è "lontano" da zero.
3.  Scegliamo $\varepsilon' = \frac{|g(x_0)|}{2} > 0$. Per la continuità di $g$, esiste un $\delta_1 > 0$ tale che $|x-x_0|<\delta_1 \implies |g(x)-g(x_0)| < \frac{|g(x_0)|}{2}$.
4.  Usando la disuguaglianza triangolare inversa, $|g(x)| \ge ||g(x_0)|-|g(x)-g(x_0)|| > ||g(x_0)|-\frac{|g(x_0)|}{2}| = \frac{|g(x_0)|}{2}$.
    In questo intorno, il denominatore $|g(x)||g(x_0)|$ è maggiore di $\frac{|g(x_0)|^2}{2}$.
5.  Ora fissiamo un $\varepsilon > 0$. Per la continuità di $g$, possiamo trovare un $\delta_2 > 0$ tale che $|x-x_0|<\delta_2 \implies |g(x)-g(x_0)| < \varepsilon \frac{|g(x_0)|^2}{2}$.
6.  Scegliamo $\delta = \min(\delta_1, \delta_2)$. Per $|x-x_0|<\delta$:
    $$\left|\frac{1}{g(x)} - \frac{1}{g(x_0)}\right| = \frac{|g(x)-g(x_0)|}{|g(x)||g(x_0)|} < \frac{\varepsilon \frac{|g(x_0)|^2}{2}}{\frac{|g(x_0)|^2}{2}} = \varepsilon$$
Il lemma è dimostrato.

### Dimostrazione della Continuità del Quoziente
La funzione quoziente $\frac{f(x)}{g(x)}$ può essere scritta come il prodotto:
$$\frac{f(x)}{g(x)} = f(x) \cdot \frac{1}{g(x)}$$
Poiché $f$ è continua in $x_0$ e, per il lemma, anche $1/g$ è continua in $x_0$ (sotto l'ipotesi $g(x_0) \neq 0$), allora il loro prodotto è continuo per il teorema sulla continuità del prodotto.