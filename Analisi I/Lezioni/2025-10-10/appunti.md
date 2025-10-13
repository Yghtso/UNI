# Numeri Complessi: Definizioni e Operazioni Fondamentali

## Definizione dei Numeri Complessi

### L'Unità Immaginaria ($i$)

In campo reale, l'equazione $x^2 = -1$ non ammette soluzioni. Per superare questa limitazione, si introduce un nuovo oggetto matematico, l'**unità immaginaria**, denotata con il simbolo $i$.

**Definizione Formale**: L'unità immaginaria $i$ è definita come la soluzione dell'equazione $x^2+1=0$. La sua proprietà fondamentale è:
$$i^2 = -1$$

### L'Insieme dei Numeri Complessi ($\mathbb{C}$)

Un numero complesso è un numero che può essere espresso nella forma $a+ib$, dove $a$ and $b$ sono numeri reali e $i$ è l'unità immaginaria.

**Definizione Formale**: L'insieme dei numeri complessi, denotato con $\mathbb{C}$, è definito come:
$$\mathbb{C} = \{ z = a+ib \mid a, b \in \mathbb{R} \}$$
Dato un numero complesso $z = a+ib$:
* $a$ è chiamata **parte reale** di $z$, e si scrive $a = \text{Re}(z)$.
* $b$ è chiamata **parte immaginaria** di $z$, e si scrive $b = \text{Im}(z)$.

### Corrispondenza Biunivoca con $\mathbb{R}^2$

Esiste una naturale corrispondenza biunivoca tra l'insieme dei numeri complessi $\mathbb{C}$ e il piano cartesiano $\mathbb{R}^2$.
Un numero complesso $z = a+ib$ è univocamente determinato dalla coppia ordinata di numeri reali $(a,b)$.

**Definizione Formale**: Si può definire un'applicazione (un isomorfismo) $\phi: \mathbb{C} \to \mathbb{R}^2$ tale che:
$$\phi(a+ib) = (a, b)$$
Questa applicazione è:
* **Iniettiva**: due numeri complessi distinti sono mappati in due coppie distinte.
* **Suriettiva**: ogni coppia $(a,b) \in \mathbb{R}^2$ è l'immagine di un numero complesso, ovvero $a+ib$.

Essendo biunivoca, questa corrispondenza ci permette di rappresentare i numeri complessi come punti o vettori in un piano a due dimensioni, chiamato **Piano di Argand-Gauss**. L'asse orizzontale rappresenta la parte reale (asse reale) e l'asse verticale rappresenta la parte immaginaria (asse immaginario).

## Operazioni in $\mathbb{C}$ e Loro Interpretazione Geometrica

Siano dati due numeri complessi $z_1 = a+ib$ e $z_2 = c+id$.

### Somma tra Numeri Complessi

**Definizione Formale**: La somma di $z_1$ e $z_2$ è definita come:
$$z_1 + z_2 = (a+c) + i(b+d)$$

**Derivazione**: La formula si ottiene trattando i numeri complessi come binomi e raggruppando i termini reali e immaginari:
$$z_1 + z_2 = (a+ib) + (c+id) = a + ib + c + id = (a+c) + (ib+id) = (a+c) + i(b+d)$$

**Interpretazione Geometrica (Piano di Argand-Gauss)**:
La somma tra numeri complessi corrisponde geometricamente alla **somma tra vettori** nel piano. Se associamo a $z_1$ il vettore $v_1 = (a,b)$ e a $z_2$ il vettore $v_2 = (c,d)$, allora la loro somma $z_1+z_2$ corrisponde al vettore $v_s = (a+c, b+d)$.
Questo è esattamente il risultato che si ottiene applicando la **regola del parallelogramma**: il vettore somma è la diagonale del parallelogramma che ha per lati i due vettori addendi.
### Moltiplicazione tra Numeri Complessi

**Definizione Formale**: Il prodotto di $z_1$ e $z_2$ è definito come:
$$z_1 \cdot z_2 = (ac - bd) + i(ad + bc)$$

**Derivazione**: La formula si ottiene moltiplicando i due binomi e ricordando che $i^2 = -1$:
$$z_1 \cdot z_2 = (a+ib)(c+id) = a(c+id) + ib(c+id) = ac + iad + ibc + i^2bd$$
Sostituendo $i^2 = -1$:
$$= ac + i(ad+bc) - bd$$
Raggruppando i termini reali e immaginari:
$$= (ac - bd) + i(ad + bc)$$
# Struttura Algebrica dei Numeri Complessi

## Il Sottoinsieme dei Reali in C

All'interno dell'insieme dei numeri complessi $\mathbb{C}$, esiste un sottoinsieme che si comporta in modo identico all'insieme dei numeri reali $\mathbb{R}$.

**Definizione Formale**: Si definisce il sottoinsieme $\mathcal{R}$ di $\mathbb{C}$ come l'insieme di tutti i numeri complessi con parte immaginaria nulla:
$$ \mathcal{R} = \{ z \in \mathbb{C} \mid \text{Im}(z) = 0 \} = \{ a+i0 \mid a \in \mathbb{R} \} $$
Questo insieme è in corrispondenza biunivoca con l'insieme dei numeri reali $\mathbb{R}$. Le operazioni di somma e prodotto definite in $\mathbb{C}$, quando applicate a elementi di $\mathcal{R}$, danno risultati coerenti con le operazioni in $\mathbb{R}$:
* **Somma**: $(a+i0) + (c+i0) = (a+c) + i(0+0) = (a+c)+i0$
* **Prodotto**: $(a+i0) \cdot (c+i0) = (ac-0\cdot0) + i(a\cdot0+0\cdot c) = ac+i0$

Grazie a questo isomorfismo, possiamo identificare il numero complesso $a+i0$ con il numero reale $a$, considerando di fatto $\mathbb{R}$ come un sottoinsieme di $\mathbb{C}$.

## Il Modulo di un Numero Complesso

**Definizione Formale**: Dato un numero complesso $z = a+ib$, il suo **modulo**, denotato con $|z|$, è il numero reale non-negativo definito come la radice quadrata della somma dei quadrati della sua parte reale e immaginaria:
$$ |z| = \sqrt{a^2 + b^2} $$
Geometricamente, il modulo rappresenta la distanza del punto $(a,b)$ dall'origine nel piano di Argand-Gauss, ovvero la lunghezza del vettore che rappresenta $z$.

### Corrispondenza con il Valore Assoluto in R
**Teorema**: Per un numero $z$ appartenente al sottoinsieme "reale" $\mathcal{R}$, il suo modulo coincide con il valore assoluto della sua parte reale.

**Dimostrazione**:
Sia $z \in \mathcal{R}$. Per definizione, $z$ ha la forma $z = a+i0$ per qualche $a \in \mathbb{R}$.
Applichiamo la definizione di modulo a questo numero:
$$ |z| = |a+i0| = \sqrt{a^2 + 0^2} = \sqrt{a^2} $$
Per definizione di valore assoluto di un numero reale, $\sqrt{a^2} = |a|$.
Quindi, abbiamo dimostrato che:
$$ |z| = |a| = |\text{Re}(z)| $$

### Modulo del Prodotto per uno Scalare Reale
**Teorema**: Siano $\lambda \in \mathbb{R}$ e $z \in \mathbb{C}$. Allora $| \lambda \cdot z | = |\lambda| |z|$.

**Dimostrazione**:
Siano $\lambda \in \mathbb{R}$ e $z = a+ib$.
1.  Calcoliamo prima il prodotto $\lambda z$:
    $$ \lambda z = \lambda(a+ib) = (\lambda a) + i(\lambda b) $$
2.  Ora calcoliamo il modulo di questo nuovo numero complesso:
    $$ |\lambda z| = \sqrt{(\lambda a)^2 + (\lambda b)^2} = \sqrt{\lambda^2 a^2 + \lambda^2 b^2} $$
3.  Mettiamo in evidenza il termine $\lambda^2$ all'interno della radice:
    $$ |\lambda z| = \sqrt{\lambda^2 (a^2 + b^2)} $$
4.  Utilizzando le proprietà dei radicali ($\sqrt{xy} = \sqrt{x}\sqrt{y}$ per $x,y \ge 0$):
    $$ |\lambda z| = \sqrt{\lambda^2} \cdot \sqrt{a^2 + b^2} $$
5.  Riconosciamo i due termini: $\sqrt{\lambda^2}$ è il valore assoluto di $\lambda$ ($|\lambda|$), e $\sqrt{a^2+b^2}$ è il modulo di $z$ ($|z|$).
    $$ |\lambda z| = |\lambda| |z| $$

## Elementi Neutri e Reciproco

### Elemento Neutro per la Somma
**Definizione**: L'elemento neutro per la somma, denotato con $e_+$, è quel numero complesso tale che, per ogni $z \in \mathbb{C}$, vale $z + e_+ = z$.

**Costruzione e Dimostrazione**:
Cerchiamo un numero $e_+ = x+iy$ che soddisfi la definizione. Sia $z = a+ib$ un generico numero complesso.
$$ (a+ib) + (x+iy) = a+ib $$
Applicando la regola della somma:
$$ (a+x) + i(b+y) = a+ib $$
Per il principio di identità dei numeri complessi, le parti reali e immaginarie devono essere uguali:
$$ \begin{cases} a+x = a \\ b+y = b \end{cases} \implies \begin{cases} x = 0 \\ y = 0 \end{cases} $$
L'elemento neutro per la somma è quindi $e_+ = 0+i0$, che si denota semplicemente con **0**.

### Elemento Neutro per la Moltiplicazione
**Definizione**: L'elemento neutro per la moltiplicazione, denotato con $e_\times$, è quel numero complesso tale che, per ogni $z \in \mathbb{C}$, vale $z \cdot e_\times = z$.

**Costruzione e Dimostrazione**:
Cerchiamo $e_\times = x+iy$. Sia $z = a+ib$.
$$ (a+ib)(x+iy) = a+ib $$
Applicando la regola della moltiplicazione:
$$ (ax-by) + i(ay+bx) = a+ib $$
Uguagliando le parti reali e immaginarie:
$$ \begin{cases} ax-by = a \\ ay+bx = b \end{cases} $$
Questo sistema deve valere per qualsiasi scelta di $a$ e $b$. Se scegliamo $z=1$ (cioè $a=1, b=0$), il sistema diventa:
$$ \begin{cases} 1 \cdot x - 0 \cdot y = 1 \\ 1 \cdot y + 0 \cdot x = 0 \end{cases} \implies \begin{cases} x = 1 \\ y = 0 \end{cases} $$
Verifichiamo che la soluzione $x=1, y=0$ funziona per ogni $a,b$:
$a(1)-b(0) = a$ (verificato) e $a(0)+b(1) = b$ (verificato).
L'elemento neutro per la moltiplicazione è quindi $e_\times = 1+i0$, che si denota semplicemente con **1**.

### Reciproco di un Numero Complesso
**Definizione**: Dato un numero complesso $z \in \mathbb{C}$ con $z \neq 0$, il suo **reciproco** (o inverso moltiplicativo), denotato con $z^{-1}$ o $1/z$, è quell'unico numero complesso tale che:
$$ z \cdot z^{-1} = 1 $$

**Costruzione e Dimostrazione**:
Sia $z = a+ib$ (con $a,b$ non entrambi nulli) e cerchiamo $z^{-1} = x+iy$.
$$ (a+ib)(x+iy) = 1+i0 $$
$$ (ax-by) + i(ay+bx) = 1+i0 $$
Otteniamo il sistema:
$$ \begin{cases} ax-by = 1 \\ ay+bx = 0 \end{cases} $$
Questo è un sistema lineare nelle incognite $x, y$. Risolvendolo (ad esempio con il metodo di Cramer o per sostituzione), si ottiene:
$$ x = \frac{a}{a^2+b^2} \quad \text{e} \quad y = \frac{-b}{a^2+b^2} $$
Notiamo che il denominatore $a^2+b^2 = |z|^2$ è non nullo perché $z \neq 0$.

**Definizione Formale del Reciproco**: Per ogni $z = a+ib \in \mathbb{C} \setminus \{0\}$, il suo reciproco è:
$$ z^{-1} = \frac{a}{a^2+b^2} - i\frac{b}{a^2+b^2} $$
Questa formula può essere espressa più elegantemente usando il **complesso coniugato** $\bar{z} = a-ib$:
$$ z^{-1} = \frac{a-ib}{a^2+b^2} = \frac{\bar{z}}{|z|^2} $$
# Coniugato, Formule e Distanza in Campo Complesso

## Il Complesso Coniugato

### Definizione Formale
Dato un numero complesso $z = a+ib$, il suo **complesso coniugato**, denotato con $\bar{z}$, è il numero complesso ottenuto cambiando il segno della parte immaginaria:
$$ \bar{z} = a - ib $$
Geometricamente, nel piano di Argand-Gauss, il coniugato $\bar{z}$ è il punto simmetrico a $z$ rispetto all'asse reale.

### Prodotto di un Numero per il suo Coniugato
**Teorema**: Il prodotto di un numero complesso $z$ per il suo coniugato $\bar{z}$ è un numero reale non-negativo pari al quadrato del modulo di $z$.
$$ z \cdot \bar{z} = |z|^2 $$

**Dimostrazione**:
Sia $z = a+ib$, e quindi $\bar{z} = a-ib$. Calcoliamo il loro prodotto:
$$ z \cdot \bar{z} = (a+ib)(a-ib) $$
Questo prodotto ha la forma di una "somma per differenza", il cui risultato è la differenza dei quadrati:
$$ z \cdot \bar{z} = a^2 - (ib)^2 = a^2 - (i^2 b^2) $$
Poiché per definizione $i^2 = -1$, otteniamo:
$$ z \cdot \bar{z} = a^2 - (-1)b^2 = a^2 + b^2 $$
Per la definizione di modulo, sappiamo che $|z| = \sqrt{a^2+b^2}$, e quindi $|z|^2 = a^2+b^2$.
Sostituendo questo risultato, concludiamo:
$$ z \cdot \bar{z} = a^2+b^2 = |z|^2 $$
Il motivo per cui questa operazione è fondamentale è che permette di trasformare un'espressione complessa in una puramente reale, il che è essenziale per definire operazioni come la divisione e il reciproco.

## Formule per la Parte Reale e Immaginaria

È possibile esprimere la parte reale e la parte immaginaria di un numero complesso $z$ utilizzando $z$ stesso e il suo coniugato $\bar{z}$.

**Formule**:
$$ \text{Re}(z) = \frac{z + \bar{z}}{2} $$
$$ \text{Im}(z) = \frac{z - \bar{z}}{2i} $$

**Dimostrazione**:
Sia $z = a+ib$ e $\bar{z} = a-ib$.

1.  **Dimostrazione per la Parte Reale**:
    Calcoliamo la somma $z + \bar{z}$:
    $$ z + \bar{z} = (a+ib) + (a-ib) = a+ib+a-ib = 2a $$
    Poiché $a = \text{Re}(z)$, abbiamo:
    $$ z + \bar{z} = 2\text{Re}(z) $$
    Dividendo entrambi i membri per 2, otteniamo la formula desiderata:
    $$ \text{Re}(z) = \frac{z + \bar{z}}{2} $$

2.  **Dimostrazione per la Parte Immaginaria**:
    Calcoliamo la differenza $z - \bar{z}$:
    $$ z - \bar{z} = (a+ib) - (a-ib) = a+ib-a+ib = 2ib $$
    Poiché $b = \text{Im}(z)$, abbiamo:
    $$ z - \bar{z} = 2i\text{Im}(z) $$
    Dividendo entrambi i membri per $2i$, otteniamo la formula desiderata:
    $$ \text{Im}(z) = \frac{z - \bar{z}}{2i} $$
## Distanza tra Numeri Complessi

### Definizione Formale
La funzione distanza nel piano complesso è una funzione $d: \mathbb{C} \times \mathbb{C} \to \mathbb{R}$ che associa a due numeri complessi $z$ e $z_0$ la distanza euclidea tra i punti corrispondenti nel piano di Argand-Gauss.

Siano $z = x+iy$ e $z_0 = x_0+iy_0$. La distanza $d(z, z_0)$ è formalmente definita come:
$$ d(z, z_0) = \sqrt{(x-x_0)^2 + (y-y_0)^2} $$

### Corrispondenza tra Distanza e Modulo
**Teorema**: La distanza tra due numeri complessi $z$ e $z_0$ è uguale al modulo della loro differenza.
$$ d(z, z_0) = |z - z_0| $$

**Dimostrazione**:
Siano $z = x+iy$ e $z_0 = x_0+iy_0$.

1.  **Calcoliamo la differenza $z - z_0$**:
    $$ z - z_0 = (x+iy) - (x_0+iy_0) $$
    Raggruppando le parti reali e immaginarie, otteniamo un nuovo numero complesso:
    $$ z - z_0 = (x-x_0) + i(y-y_0) $$

2.  **Calcoliamo il modulo di questo nuovo numero complesso**:
    La parte reale di $(z-z_0)$ è $(x-x_0)$ e la parte immaginaria è $(y-y_0)$. Applichiamo la definizione di modulo:
    $$ |z - z_0| = \sqrt{(\text{Re}(z-z_0))^2 + (\text{Im}(z-z_0))^2} $$
    $$ |z - z_0| = \sqrt{(x-x_0)^2 + (y-y_0)^2} $$

3.  **Confronto**: Osserviamo che l'espressione ottenuta per il modulo di $|z - z_0|$ è identica alla definizione formale della distanza $d(z, z_0)$.
    $$ d(z, z_0) = |z - z_0| $$
    # Rappresentazioni dei Numeri Complessi

Un numero complesso può essere rappresentato in diverse forme, ognuna utile in contesti differenti. Le tre rappresentazioni principali sono quella algebrica, quella trigonometrica (o polare) e quella esponenziale.

## Le Tre Forme di Rappresentazione

### 1. Forma Algebrica (o Cartesiana)
È la forma fondamentale vista finora, che definisce un numero complesso in termini della sua parte reale e immaginaria.
$$ z = a+ib $$
Questa forma è legata direttamente alle coordinate cartesiane $(a,b)$ nel piano di Argand-Gauss. È particolarmente comoda per le operazioni di somma e sottrazione.

### 2. Forma Trigonometrica (o Polare)
Questa forma descrive un numero complesso non tramite le sue coordinate cartesiane, ma tramite le sue **coordinate polari** nel piano: la sua distanza dall'origine e l'angolo che forma con l'asse reale positivo.

**Definizioni Formali**:
Sia $z=a+ib$ un numero complesso non nullo.
* **Modulo**: Il modulo $\rho$ (rho) è la distanza di $z$ dall'origine.
    $$ \rho = |z| = \sqrt{a^2+b^2} $$
* **Argomento**: L'argomento $\theta$ (theta) è l'angolo, misurato in radianti in senso antiorario, che il vettore che congiunge l'origine a $z$ forma con il semiasse positivo delle reali. È definito da:
    $$ \cos\theta = \frac{a}{\rho} \quad \text{e} \quad \sin\theta = \frac{b}{\rho} $$

Dalle definizioni di seno e coseno, possiamo esprimere le coordinate cartesiane $a$ e $b$ in funzione di $\rho$ e $\theta$:
$$ a = \rho\cos\theta \quad \text{e} \quad b = \rho\sin\theta $$
Sostituendo queste espressioni nella forma algebrica $z = a+ib$, otteniamo la **forma trigonometrica**:
$$ z = \rho\cos\theta + i(\rho\sin\theta) = \rho(\cos\theta + i\sin\theta) $$
Questa forma è estremamente potente per analizzare le operazioni di moltiplicazione, divisione, potenza e radice.

### 3. Forma Esponenziale
Questa è la forma più compatta e deriva direttamente da quella trigonometrica attraverso la **Formula di Eulero**.

**Formula di Eulero**: Per ogni angolo reale $\theta$, vale la seguente identità:
$$ e^{i\theta} = \cos\theta + i\sin\theta $$
Questa formula collega la funzione esponenziale con le funzioni trigonometriche nel campo complesso. Sostituendo questa identità nella forma trigonometrica, si ottiene la **forma esponenziale**:
$$ z = \rho e^{i\theta} $$

## Moltiplicazione in Forma Trigonometrica

La vera eleganza della forma trigonometrica emerge nell'operazione di moltiplicazione, dove l'algebra si traduce in una semplice operazione geometrica.

**Teorema**: Il prodotto di due numeri complessi ha per modulo il prodotto dei moduli e per argomento la somma degli argomenti.

**Dimostrazione**:
Siano dati due numeri complessi in forma trigonometrica:
$$ z_1 = \rho_1(\cos\theta_1 + i\sin\theta_1) $$
$$ z_2 = \rho_2(\cos\theta_2 + i\sin\theta_2) $$
Calcoliamo il loro prodotto $z_1 \cdot z_2$ passo dopo passo.
1.  **Impostazione del prodotto**:
    $$ z_1 \cdot z_2 = \left[ \rho_1(\cos\theta_1 + i\sin\theta_1) \right] \cdot \left[ \rho_2(\cos\theta_2 + i\sin\theta_2) \right] $$
2.  **Raggruppamento dei moduli**:
    $$ z_1 \cdot z_2 = (\rho_1 \rho_2) \left[ (\cos\theta_1 + i\sin\theta_1) (\cos\theta_2 + i\sin\theta_2) \right] $$
3.  **Sviluppo del prodotto tra i binomi**:
    $$ (\cos\theta_1\cos\theta_2) + (i\cos\theta_1\sin\theta_2) + (i\sin\theta_1\cos\theta_2) + (i^2\sin\theta_1\sin\theta_2) $$
4.  **Sostituzione di $i^2 = -1$**:
    $$ \cos\theta_1\cos\theta_2 + i\cos\theta_1\sin\theta_2 + i\sin\theta_1\cos\theta_2 - \sin\theta_1\sin\theta_2 $$
5.  **Raggruppamento della parte reale e della parte immaginaria**:
    * Parte Reale: $(\cos\theta_1\cos\theta_2 - \sin\theta_1\sin\theta_2)$
    * Parte Immaginaria: $i(\sin\theta_1\cos\theta_2 + \cos\theta_1\sin\theta_2)$
6.  **Riconoscimento delle formule di addizione degli angoli**:
    Le espressioni ottenute sono esattamente le formule goniometriche per il coseno e il seno della somma di due angoli:
    * $\cos(\theta_1 + \theta_2) = \cos\theta_1\cos\theta_2 - \sin\theta_1\sin\theta_2$
    * $\sin(\theta_1 + \theta_2) = \sin\theta_1\cos\theta_2 + \cos\theta_1\sin\theta_2$
7.  **Sostituzione e Conclusione**: Sostituendo queste identità nell'espressione del prodotto, otteniamo il risultato finale:
    $$ z_1 \cdot z_2 = (\rho_1 \rho_2) \left[ \cos(\theta_1 + \theta_2) + i\sin(\theta_1 + \theta_2) \right] $$

## Reciproco in Forma Trigonometrica

Utilizzando la regola della moltiplicazione appena dimostrata, possiamo trovare elegantemente il reciproco $z^{-1}$ di un numero $z$.

**Teorema**: Il reciproco di un numero complesso $z$ ha per modulo il reciproco del modulo di $z$ e per argomento l'opposto dell'argomento di $z$.

**Dimostrazione**:
Sia $z = \rho(\cos\theta + i\sin\theta)$, con $z \neq 0$ (e quindi $\rho \neq 0$).
Cerchiamo il suo reciproco $z^{-1} = \rho'(\cos\theta' + i\sin\theta')$ tale che $z \cdot z^{-1} = 1$.
L'elemento neutro della moltiplicazione, $1$, ha modulo 1 e argomento 0. In forma trigonometrica:
$$ 1 = 1(\cos(0) + i\sin(0)) $$
Impostiamo l'equazione $z \cdot z^{-1} = 1$:
$$ \left[ \rho(\cos\theta + i\sin\theta) \right] \cdot \left[ \rho'(\cos\theta' + i\sin\theta') \right] = 1(\cos(0) + i\sin(0)) $$
Applicando la regola del prodotto:
$$ (\rho\rho') \left[ \cos(\theta+\theta') + i\sin(\theta+\theta') \right] = 1(\cos(0) + i\sin(0)) $$
Per il principio di identità dei numeri complessi in forma polare, i moduli devono essere uguali e gli argomenti devono essere uguali (a meno di multipli di $2\pi$):
$$ \begin{cases} \rho\rho' = 1 \\ \theta+\theta' = 0 + 2k\pi \quad (k \in \mathbb{Z}) \end{cases} $$
Risolviamo il sistema per $\rho'$ e $\theta'$:
$$ \begin{cases} \rho' = \frac{1}{\rho} \\ \theta' = -\theta \end{cases} $$
(Scegliamo $k=0$ per l'argomento principale).
Sostituendo questi valori nella forma di $z^{-1}$:
$$ z^{-1} = \frac{1}{\rho}(\cos(-\theta) + i\sin(-\theta)) $$
Infine, sfruttiamo le proprietà di parità delle funzioni trigonometriche ($\cos(-x)=\cos(x)$ e $\sin(-x)=-\sin(x)$) per ottenere la forma finale:
$$ z^{-1} = \frac{1}{\rho}(\cos\theta - i\sin\theta) $$