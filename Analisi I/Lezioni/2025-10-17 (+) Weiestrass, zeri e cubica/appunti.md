# Continuità in un Intervallo e Definizioni Formali

## Continuità in un Intervallo

Mentre la continuità definita in precedenza ($\varepsilon-\delta$ o tramite i limiti) è una proprietà *puntuale* (valida in un singolo punto $x_0$), la continuità su un intervallo è una proprietà *globale*, che estende tale concetto a un intero insieme di punti.

**Definizione Formale**: Sia $f: D \to \mathbb{R}$ una funzione e sia $A \subseteq D$ un intervallo.
La funzione $f$ si dice **continua sull'intervallo** $A$ se è continua in **ogni punto** $x_0 \in A$.

**Nota sugli intervalli chiusi**: Se l'intervallo $A$ è chiuso e limitato, $A = [a, b]$, la definizione richiede:
1.  $f$ sia continua in ogni punto $x_0 \in (a, b)$ (l'intervallo aperto).
2.  $f$ sia **continua da destra** nell'estremo $a$, ovvero:
    $$\lim_{x \to a^+} f(x) = f(a)$$
3.  $f$ sia **continua da sinistra** nell'estremo $b$, ovvero:
    $$\lim_{x \to b^-} f(x) = f(b)$$

### La Notazione $C(A)$ (Spazio delle Funzioni Continue)

La notazione $C(A)$ (o talvolta $C^0(A)$) è usata per descrivere l'insieme di tutte le funzioni che soddisfano la proprietà di continuità su un dato intervallo $A$.

**Definizione Formale**: Si definisce $C(A)$ lo **spazio vettoriale delle funzioni continue** sull'intervallo $A$.
$$C(A) = \{ f: A \to \mathbb{R} \mid f \text{ è continua in ogni } x \in A \}$$
Pertanto, la scrittura:
$$f \in C(A)$$
è un modo formale e compatto per affermare che la funzione $f$ è continua su tutto l'intervallo $A$.

---

## Definizione di Continuità $\varepsilon-\delta$ (puntuale)

Questa è la definizione metrica fondamentale della continuità in un singolo punto $x_0$.

**Definizione Formale**: Sia $f: D \to \mathbb{R}$ una funzione e $x_0 \in D$. La funzione $f$ è **continua** in $x_0$ se:
$$\forall \varepsilon > 0, \exists \delta > 0 \text{ tale che } \forall x \in D, \text{ se } |x - x_0| < \delta \text{ allora } |f(x) - f(x_0)| < \varepsilon$$

**Interpretazione**:
* $\forall \varepsilon > 0$ ("Per ogni $\varepsilon$ positivo"): Per quanto piccolo si scelga un arbitrario intervallo di tolleranza $\varepsilon$ sull'asse Y attorno al valore $f(x_0)$...
* $\exists \delta > 0$ ("...esiste un $\delta$ positivo..."): ...è sempre possibile trovare un corrispondente intervallo di tolleranza $\delta$ sull'asse X attorno a $x_0$...
* $\text{ tale che } \dots$ ("...tale che..."): ...se si prende un qualsiasi punto $x$ del dominio che si trova all'interno di questo intervallo $\delta$ di $x_0$ ($|x-x_0|<\delta$), allora il valore della funzione $f(x)$ sarà garantito cadere all'interno dell'intervallo $\varepsilon$ di $f(x_0)$ ($|f(x)-f(x_0)|<\varepsilon$).

In sintesi, la continuità $\varepsilon-\delta$ formalizza l'idea che "input vicini producono output vicini": possiamo controllare l'errore in uscita ($\varepsilon$) controllando l'errore in ingresso ($\delta$).

# Teorema di Weierstrass e Teorema della Permanenza del Segno

## Teorema di Weierstrass (Teorema dei Valori Estremi)

**Enunciato Formale**: Sia $f: [a, b] \to \mathbb{R}$ una funzione. Se $f$ è **continua** sull'intervallo **chiuso e limitato** $[a, b]$, allora $f$ ammette (almeno) un punto di massimo assoluto e un punto di minimo assoluto nell'intervallo.
Cioè, esistono $x_m, x_M \in [a, b]$ tali che:
$$f(x_m) \le f(x) \le f(x_M) \quad \forall x \in [a, b]$$

Le ipotesi del teorema (continuità e dominio chiuso e limitato) sono entrambe necessarie. Se anche solo una di esse viene a mancare, la tesi non è più garantita.

### Controesempio (Mancanza di Continuità)

L'ipotesi di continuità è fondamentale. Basta un singolo punto di discontinuità nell'intervallo per far fallire il teorema.

Consideriamo l'intervallo $I = [1, 3]$, che è chiuso e limitato.
Sia $f: [1, 3] \to \mathbb{R}$ la funzione definita a tratti:
$$
f(x) = \begin{cases}
-x + 1 & \text{se } 1 \le x < 2 \\
0 & \text{se } x = 2 \\
-x + 3 & \text{se } 2 < x \le 3
\end{cases}
$$

1.  **Analisi delle Ipotesi**:
    * Il dominio $[1, 3]$ è chiuso e limitato.
    * La funzione $f$ **non è continua** in $x_0 = 2$. Verifichiamo:
        * Limite sinistro: $\lim_{x \to 2^-} f(x) = \lim_{x \to 2^-} (-x+1) = -1$
        * Limite destro: $\lim_{x \to 2^+} f(x) = \lim_{x \to 2^+} (-x+3) = 1$
        * Valore nel punto: $f(2) = 0$
    Poiché i limiti destro e sinistro sono diversi (e diversi dal valore $f(2)$), la funzione ha una discontinuità di salto in $x=2$. L'ipotesi di continuità del Teorema di Weierstrass è violata.

2.  **Analisi della Tesi (Ricerca di Max/Min)**:
    Analizziamo l'immagine (il codominio) della funzione $f$ sull'intervallo $[1, 3]$.
    * Per $x \in [1, 2)$: $f(1) = 0$. Il ramo $-x+1$ è decrescente. Avvicinandosi a 2 da sinistra, $f(x)$ tende a -1. L'immagine di questo tratto è $\text{Im}_1 = (-1, 0]$.
    * Per $x \in (2, 3]$: $f(3) = 0$. Il ramo $-x+3$ è decrescente. Avvicinandosi a 2 da destra, $f(x)$ tende a 1. L'immagine di questo tratto è $\text{Im}_2 = [0, 1)$.
    * Per $x=2$: $f(2)=0$.
    * L'immagine totale della funzione è $\text{Im}(f) = \text{Im}_1 \cup \text{Im}_2 \cup \{0\} = (-1, 0] \cup [0, 1) = (-1, 1)$.

    Cerchiamo i valori estremi dell'immagine $\text{Im}(f) = (-1, 1)$:
    * **Estremo Superiore**: $\sup(f) = 1$. Questo valore, però, **non è un massimo**, poiché non esiste nessun $x \in [1, 3]$ tale che $f(x) = 1$. (Il valore 1 è "avvicinato" per $x \to 2^+$ ma mai raggiunto).
    * **Estremo Inferiore**: $\inf(f) = -1$. Questo valore, però, **non è un minimo**, poiché non esiste nessun $x \in [1, 3]$ tale che $f(x) = -1$. (Il valore -1 è "avvicinato" per $x \to 2^-$ ma mai raggiunto).

    **Conclusione**: La funzione $f(x)$, pur essendo definita su un intervallo chiuso e limitato, non ammette né massimo né minimo assoluto. Ciò è dovuto alla violazione dell'ipotesi di continuità.

---

### Controesempio (Dominio non Chiuso o non Limitato)

L'ipotesi che il dominio sia un intervallo *singolo*, *chiuso* e *limitato* (ovvero un **compatto** in $\mathbb{R}$) è essenziale. Se il dominio è un'unione di intervalli, la tesi può fallire.

Consideriamo un dominio $A$ definito come un'unione infinita di intervalli chiusi e limitati:
$$A = \bigcup_{k=0}^{\infty} A_k = \bigcup_{k=0}^{\infty} [2k, 2k+1]$$
Il dominio $A = [0, 1] \cup [2, 3] \cup [4, 5] \cup \dots$ è un'unione di compatti, ma **non è un insieme limitato**.

Consideriamo la funzione $f: A \to \mathbb{R}$ definita come:
$$f(x) = x$$
1.  **Analisi delle Ipotesi**:
    * La funzione $f(x)=x$ è continua su tutto $\mathbb{R}$, quindi è banalmente continua su $A$.
    * Il dominio $A$ è chiuso, ma non è limitato. L'ipotesi del Teorema di Weierstrass è violata.

2.  **Analisi della Tesi**:
    * L'immagine della funzione è $f(A) = A = [0, 1] \cup [2, 3] \cup \dots$
    * L'estremo superiore dell'immagine è $\sup(f(A)) = +\infty$. Poiché il massimo deve essere un valore finito, **la funzione non ammette massimo**.
    * (In questo caso ammette minimo, $f(0)=0$, ma il teorema deve garantirli entrambi).

Se avessimo scelto $f(x) = -x$, la funzione sarebbe stata continua su $A$ ma non avrebbe ammesso minimo ($\inf(f) = -\infty$). Se avessimo scelto $A = \bigcup_{k \in \mathbb{Z}} [2k, 2k+1]$, $f(x)=x$ non avrebbe ammesso né massimo né minimo.

**Conclusione**: L'ipotesi di un dominio *compatto* (singolo, chiuso e limitato) è necessaria per garantire l'esistenza degli estremi.

---

## Teorema della Permanenza del Segno

Questo teorema stabilisce che se una funzione è continua in un punto e assume un valore non nullo, allora manterrà quel segno in un intero intorno di quel punto.

**Enunciato Formale**: Sia $f: D \to \mathbb{R}$ una funzione continua in $x_0 \in D$.
* Se $f(x_0) > 0$, allora esiste $\delta > 0$ tale che $\forall x \in D \cap (x_0-\delta, x_0+\delta)$ si ha $f(x) > 0$.
* Se $f(x_0) < 0$, allora esiste $\delta > 0$ tale che $\forall x \in D \cap (x_0-\delta, x_0+\delta)$ si ha $f(x) < 0$.

### Dimostrazione (Caso $f(x_0) > 0$)

1.  **Ipotesi (Continuità $\varepsilon-\delta$)**: $f$ è continua in $x_0$, quindi vale:
    $$\forall \varepsilon > 0, \exists \delta > 0 \text{ t.c. } \forall x \in D, \text{ se } |x - x_0| < \delta \text{ allora } |f(x) - f(x_0)| < \varepsilon$$

2.  **Ipotesi (Valore positivo)**: Sappiamo che $f(x_0) > 0$.

3.  **Tesi**: Vogliamo dimostrare che esiste un $\delta$ che "isola" $f(x)$ sopra l'asse x.
    $$\exists \delta > 0 \text{ t.c. } \forall x \in D \cap (x_0-\delta, x_0+\delta) \implies f(x) > 0$$

4.  **Dimostrazione**:
    * Dobbiamo scegliere un $\varepsilon$ "strategico". Vogliamo un $\varepsilon$ sufficientemente piccolo da garantire che l'intervallo $(f(x_0)-\varepsilon, f(x_0)+\varepsilon)$ sia tutto composto da valori positivi.
    * Come da suggerimento, scegliamo $\varepsilon = \frac{f(x_0)}{2}$. Poiché $f(x_0) > 0$, questa è una scelta valida ($\varepsilon > 0$).
    * Applichiamo la definizione di continuità usando questo specifico $\varepsilon$. Sappiamo che in corrispondenza di $\varepsilon = f(x_0)/2$ **esiste** un $\delta > 0$ tale che per tutti gli $x \in D$ che soddisfano $|x - x_0| < \delta$, vale la seguente disuguaglianza:
        $$|f(x) - f(x_0)| < \frac{f(x_0)}{2}$$
    * Risolviamo la disuguaglianza (proprietà del valore assoluto):
        $$-\frac{f(x_0)}{2} < f(x) - f(x_0) < \frac{f(x_0)}{2}$$
    * Isoliamo $f(x)$ aggiungendo $f(x_0)$ a tutti i membri:
        $$f(x_0) - \frac{f(x_0)}{2} < f(x) < f(x_0) + \frac{f(x_0)}{2}$$
    * Semplifichiamo i membri esterni:
        $$\frac{f(x_0)}{2} < f(x) < \frac{3f(x_0)}{2}$$
    * Ci concentriamo sulla disuguaglianza di sinistra: $f(x) > \frac{f(x_0)}{2}$.
    * Poiché per ipotesi $f(x_0) > 0$, allora anche $\frac{f(x_0)}{2} > 0$.
    * Per la proprietà transitiva della disuguaglianza, se $f(x) > \frac{f(x_0)}{2}$ e $\frac{f(x_0)}{2} > 0$, ne consegue che $f(x) > 0$.

    Abbiamo quindi dimostrato che esiste un $\delta > 0$ (quello corrispondente alla nostra scelta di $\varepsilon$) tale che per tutti gli $x$ nell'intorno $(x_0-\delta, x_0+\delta)$ appartenenti al dominio, la funzione $f(x)$ è strettamente positiva.
# Continuità da Destra e Teorema degli Zeri

## Continuità da Destra

Una funzione può essere continua in un punto in modo "parziale", solo da una direzione.

**Definizione Formale (con Limiti)**: Sia $f: D \to \mathbb{R}$ una funzione e $x_0 \in D$ un punto di accumulazione da destra per $D$. La funzione $f$ si dice **continua da destra** nel punto $x_0$ se il limite destro della funzione in $x_0$ esiste, è finito e coincide con il valore della funzione nel punto:
$$\lim_{x \to x_0^+} f(x) = f(x_0)$$

**Definizione Formale ($\varepsilon-\delta$)**: La funzione $f$ è continua da destra in $x_0$ se:
$$\forall \varepsilon > 0, \exists \delta > 0 \text{ tale che } \forall x \in D, \text{ se } x_0 \le x < x_0 + \delta \text{ allora } |f(x) - f(x_0)| < \varepsilon$$

---

## Teorema di Esistenza degli Zeri (o Teorema di Bolzano)

Questo teorema garantisce l'esistenza di almeno una soluzione (uno "zero") per un'equazione in un dato intervallo, sotto precise ipotesi.

**Enunciato Formale**: Sia $f: [a, b] \to \mathbb{R}$ una funzione. Se:
1.  $f$ è **continua** sull'intervallo chiuso e limitato $[a, b]$.
2.  La funzione assume valori di segno opposto agli estremi dell'intervallo, ovvero $f(a) \cdot f(b) < 0$.

Allora **esiste almeno un punto** $c \in (a, b)$ (un punto interno all'intervallo) tale che $f(c) = 0$.

### Controesempio (Mancanza di Continuità)
L'ipotesi di continuità è fondamentale. Se viene a mancare, la tesi non è più garantita, anche se le altre condizioni sono rispettate.

Consideriamo l'intervallo $I = [-2, 2]$, che è chiuso e limitato.
Sia $f: [-2, 2] \to \mathbb{R}$ la funzione a gradino (step function):
$$
f(x) = \begin{cases}
-1 & \text{se } -2 \le x < 0 \\
1 & \text{se } 0 \le x \le 2
\end{cases}
$$

1.  **Analisi delle Ipotesi**:
    * Il dominio $[-2, 2]$ è chiuso e limitato.
    * La funzione assume valori di segno opposto agli estremi:
        * $f(-2) = -1$
        * $f(2) = 1$
        * $f(-2) \cdot f(2) = (-1)(1) = -1 < 0$.
    * La funzione $f$ **non è continua** in $x_0 = 0$. Ha una discontinuità di salto, poiché $\lim_{x \to 0^-} f(x) = -1$ mentre $f(0) = 1$. L'ipotesi fondamentale di continuità su *tutto* l'intervallo è violata.

2.  **Analisi della Tesi**:
    L'immagine (il codominio) della funzione $f$ sull'intervallo $[-2, 2]$ è l'insieme $\text{Im}(f) = \{-1, 1\}$.
    Non esiste alcun punto $x \in [-2, 2]$ per cui $f(x) = 0$.

    **Conclusione**: Nonostante il prodotto agli estremi sia negativo, la mancanza di continuità impedisce l'applicazione del teorema e, in questo caso, la tesi fallisce: non esiste alcuno zero nell'intervallo.

---

## Algoritmo di Bisezione

Il metodo di bisezione è un algoritmo costruttivo che implementa la logica del Teorema degli Zeri per approssimare uno zero con la precisione desiderata.

**Obiettivo**: Trovare uno zero $c$ della funzione $f$.
**Ipotesi**: $f \in C([a, b])$ e $f(a) \cdot f(b) < 0$.

**Algoritmo Generalizzato**:
Si costruisce una successione di intervalli $[a_n, b_n]$ con $n=0, 1, 2, \dots$

1.  **Inizializzazione (Passo $n=0$)**:
    Si pone $[a_0, b_0] = [a, b]$. Per ipotesi, $f$ è continua su questo intervallo e $f(a_0) \cdot f(b_0) < 0$.

2.  **Passo Induttivo (da $n$ a $n+1$)**:
    Assumiamo di aver definito l'intervallo $[a_n, b_n]$ tale che $f \in C([a_n, b_n])$ e $f(a_n) \cdot f(b_n) \le 0$.
    a. Si calcola il punto medio: $m_n = \frac{a_n + b_n}{2}$.
    b. Poiché $f$ è continua su $[a_n, b_n]$ (essendo un sotto-intervallo di $[a, b]$), $f$ è definita e continua in $m_n$. Si calcola $f(m_n)$.
    c. **Casi**:
        i. Se $f(m_n) = 0$: lo zero è stato trovato ($c=m_n$) e l'algoritmo termina.
        ii. Se $f(a_n) \cdot f(m_n) < 0$: il segno cambia nel sotto-intervallo sinistro. Si definisce il nuovo intervallo:
            $$[a_{n+1}, b_{n+1}] = [a_n, m_n]$$
        iii. Se $f(m_n) \cdot f(b_n) < 0$: il segno cambia nel sotto-intervallo destro. Si definisce il nuovo intervallo:
            $$[a_{n+1}, b_{n+1}] = [m_n, b_n]$$

3.  **Conclusione**: L'algoritmo genera due successioni $\{a_n\}$ e $\{b_n\}$ che definiscono una successione di intervalli "incapsulati" $[a_n, b_n]$ la cui ampiezza $b_n - a_n = \frac{b-a}{2^n}$ tende a 0.

---

## Dimostrazione Formale del Teorema degli Zeri

La convergenza dell'algoritmo di bisezione costituisce la dimostrazione formale del Teorema degli Zeri.

Siano $f(a) < 0$ e $f(b) > 0$. L'algoritmo di bisezione (assumendo che non termini mai al passo c.i) costruisce due successioni:
* $\{a_n\}$: successione **monotona crescente** (o non decrescente).
* $\{b_n\}$: successione **monotona decrescente** (o non crescente).

**1. Convergenza delle successioni**:
* La successione $\{a_n\}$ è crescente e **limitata superiormente** (ad esempio da $b_0$). Per il teorema delle successioni monotone, essa ammette limite finito:
    $$\lim_{n \to \infty} a_n = \alpha$$
* La successione $\{b_n\}$ è decrescente e **limitata inferiormente** (ad esempio da $a_0$). Anch'essa ammette limite finito:
    $$\lim_{n \to \infty} b_n = \beta$$

**2. Dimostrazione che i limiti coincidono ($\alpha = \beta$)**:
L'ampiezza dell'intervallo al passo $n$ è $b_n - a_n = \frac{b_0 - a_0}{2^n}$.
Calcoliamo il limite dell'ampiezza per $n \to \infty$:
$$\lim_{n \to \infty} (b_n - a_n) = \lim_{n \to \infty} \frac{b_0 - a_0}{2^n} = (b_0 - a_0) \cdot \lim_{n \to \infty} \frac{1}{2^n} = (b_0 - a_0) \cdot 0 = 0$$
Per l'algebra dei limiti, possiamo anche scrivere:
$$\lim_{n \to \infty} (b_n - a_n) = \lim_{n \to \infty} b_n - \lim_{n \to \infty} a_n = \beta - \alpha$$
Uguagliando i risultati, otteniamo $\beta - \alpha = 0$, da cui $\alpha = \beta$.
Chiamiamo $c$ questo limite comune: $c = \alpha = \beta$.

**3. Dimostrazione che $f(c) = 0$**:
* Sappiamo che $a_n \to c$ e $b_n \to c$.
* Per l'ipotesi fondamentale, $f$ è **continua** su $[a, b]$, e quindi è continua anche nel punto $c \in [a, b]$.
* Utilizzando la definizione di continuità per successioni (Teorema Ponte), possiamo affermare che:
    * $\lim_{n \to \infty} f(a_n) = f(c)$
    * $\lim_{n \to \infty} f(b_n) = f(c)$
* Per costruzione (passo c.ii e c.iii), l'algoritmo mantiene il segno opposto agli estremi ad ogni passo. Avendo ipotizzato $f(a) < 0$ e $f(b) > 0$, avremo sempre:
    * $f(a_n) < 0$ (o $f(a_n) \le 0$ se si include il caso c.i)
    * $f(b_n) > 0$ (o $f(b_n) \ge 0$)
* Consideriamo i limiti di queste successioni di immagini. Per il Teorema della permanenza del segno (applicato ai limiti di successioni), una successione di valori negativi non può convergere a un limite positivo, e viceversa.
    * Da $f(a_n) \le 0$, segue che $\lim_{n \to \infty} f(a_n) = f(c) \le 0$.
    * Da $f(b_n) \ge 0$, segue che $\lim_{n \to \infty} f(b_n) = f(c) \ge 0$.
* L'unico numero reale $f(c)$ che soddisfa contemporaneamente le due condizioni $f(c) \le 0$ e $f(c) \ge 0$ è $f(c) = 0$.

**C.V.D.**