# Somma di Sottospazi e Formula di Grassmann

## Somma di Sottospazi e Spazio Generato

Siano $A$ e $B$ due sottospazi di un medesimo spazio vettoriale $V$.

### Definizione Formale di A+B
La **somma** dei due sottospazi, denotata con $A+B$, è l'insieme di tutti i vettori di $V$ che possono essere scritti come la somma di un vettore di $A$ e un vettore di $B$.
$$A+B = \{ v \in V \mid \exists a \in A, \exists b \in B \text{ t.c. } v = a+b \}$$
Si è già dimostrato che $A+B$ è anch'esso un sottospazio di $V$. Di fatto, è il più piccolo sottospazio vettoriale di $V$ che contiene l'unione $A \cup B$.

### Relazione tra Somma di Sottospazi e Span
**Teorema**: Siano $\mathcal{B}_A = \{v_1, \dots, v_k\}$ una base per il sottospazio $A$ e $\mathcal{B}_B = \{w_1, \dots, w_m\}$ una base per il sottospazio $B$. Allora lo spazio somma $A+B$ è generato dall'unione delle loro basi.
$$A+B = \text{Span}(\mathcal{B}_A \cup \mathcal{B}_B) = \text{Span}(v_1, \dots, v_k, w_1, \dots, w_m)$$

**Dimostrazione**:
Per dimostrare l'uguaglianza tra i due insiemi, dobbiamo provare una doppia inclusione.

1.  **Dimostrazione che $A+B \subseteq \text{Span}(\mathcal{B}_A \cup \mathcal{B}_B)$**:
    * Sia $u$ un generico vettore di $A+B$. Per definizione, $u = a+b$ con $a \in A$ e $b \in B$.
    * Poiché $\mathcal{B}_A$ è una base di $A$, il vettore $a$ può essere scritto come combinazione lineare dei suoi elementi: $a = \beta_1 v_1 + \dots + \beta_k v_k$.
    * Analogamente, poiché $\mathcal{B}_B$ è una base di $B$, il vettore $b$ può essere scritto come combinazione lineare dei suoi elementi: $b = \gamma_1 w_1 + \dots + \gamma_m w_m$.
    * Sostituendo queste espressioni in $u = a+b$, otteniamo:
        $$u = (\beta_1 v_1 + \dots + \beta_k v_k) + (\gamma_1 w_1 + \dots + \gamma_m w_m)$$
    * Questa è, per definizione, una combinazione lineare di vettori appartenenti a $\mathcal{B}_A \cup \mathcal{B}_B$. Pertanto, ogni vettore $u \in A+B$ appartiene anche a $\text{Span}(\mathcal{B}_A \cup \mathcal{B}_B)$.

2.  **Dimostrazione che $\text{Span}(\mathcal{B}_A \cup \mathcal{B}_B) \subseteq A+B$**:
    * Sia $u$ un generico vettore di $\text{Span}(\mathcal{B}_A \cup \mathcal{B}_B)$. Per definizione, $u$ è una combinazione lineare dei vettori dell'unione delle basi:
        $$u = (\beta_1 v_1 + \dots + \beta_k v_k) + (\gamma_1 w_1 + \dots + \gamma_m w_m)$$
    * Definiamo $a = \beta_1 v_1 + \dots + \beta_k v_k$. Poiché $a$ è combinazione lineare di elementi della base di $A$, allora $a \in A$.
    * Definiamo $b = \gamma_1 w_1 + \dots + \gamma_m w_m$. Poiché $b$ è combinazione lineare di elementi della base di $B$, allora $b \in B$.
    * Il vettore $u$ può quindi essere scritto come $u=a+b$, con $a \in A$ e $b \in B$. Per la definizione di spazio somma, questo implica che $u \in A+B$.

Poiché entrambe le inclusioni sono verificate, i due insiemi coincidono.
## Definizione Formale di Pivot

**Definizione**: Sia $S$ una matrice ridotta a **forma a scala per righe** (Row Echelon Form). Un **pivot** è il primo elemento non nullo di ogni riga non nulla della matrice $S$.

**Proprietà e Conseguenze**:
* Ogni pivot si trova in una colonna a destra dei pivot delle righe precedenti.
* Tutti gli elementi nella colonna di un pivot che si trovano sotto il pivot stesso sono uguali a zero.
* Il numero di pivot di una matrice ridotta a scala è univocamente determinato e non dipende dalla sequenza di operazioni di riga utilizzate.
* Una colonna che contiene un pivot è detta **colonna pivot**.

## Teorema e Formula di Grassmann

### Enunciato del Teorema
Siano $A$ e $B$ due sottospazi di uno spazio vettoriale $V$ a dimensione finita. Allora anche i sottospazi $A+B$ e $A \cap B$ hanno dimensione finita, e vale la seguente relazione:
$$\dim(A+B) = \dim(A) + \dim(B) - \dim(A \cap B)$$

### Dimostrazione
La dimostrazione si basa sulla costruzione di una base per $A+B$ a partire da una base dell'intersezione $A \cap B$.

1.  **Base dell'intersezione**:
    Sia $\dim(A \cap B) = r$. Essendo $A \cap B$ un sottospazio, esso ammette una base. Sia questa base:
    $$\mathcal{B}_{A \cap B} = \{ z_1, z_2, \dots, z_r \}$$

2.  **Completamento a base di A**:
    Poiché $A \cap B$ è un sottospazio di $A$, per il Teorema del Completamento a Base possiamo estendere la base $\mathcal{B}_{A \cap B}$ per ottenere una base di $A$. Siano $\dim(A)=k$. Avremo bisogno di $k-r$ vettori aggiuntivi.
    $$\mathcal{B}_A = \{ \underbrace{z_1, \dots, z_r}_{\text{base di } A \cap B}, \underbrace{v_1, \dots, v_{k-r}}_{\text{completamento}} \}$$

3.  **Completamento a base di B**:
    Analogamente, poiché $A \cap B$ è un sottospazio di $B$, completiamo la sua base per ottenere una base di $B$. Siano $\dim(B)=m$. Avremo bisogno di $m-r$ vettori aggiuntivi.
    $$\mathcal{B}_B = \{ \underbrace{z_1, \dots, z_r}_{\text{base di } A \cap B}, \underbrace{w_1, \dots, w_{m-r}}_{\text{completamento}} \}$$

4.  **Costruzione di una base per A+B**:
    Sappiamo che $A+B = \text{Span}(\mathcal{B}_A \cup \mathcal{B}_B)$. Proponiamo come candidata base per $A+B$ l'insieme:
    $$\mathcal{S} = \{ z_1, \dots, z_r, v_1, \dots, v_{k-r}, w_1, \dots, w_{m-r} \}$$
    Per dimostrare che $\mathcal{S}$ è una base, dobbiamo provare che è un insieme di generatori linearmente indipendenti. Che sia un insieme di generatori è già stato provato. Dobbiamo dimostrarne l'**indipendenza lineare**.

5.  **Prova di indipendenza lineare**:
    Impostiamo una combinazione lineare dei vettori di $\mathcal{S}$ uguale al vettore nullo:
    $$(\alpha_1 z_1 + \dots + \alpha_r z_r) + (\beta_1 v_1 + \dots + \beta_{k-r} v_{k-r}) + (\gamma_1 w_1 + \dots + \gamma_{m-r} w_{m-r}) = 0$$
    Riorganizziamo l'equazione:
    $$\sum_{j=1}^{m-r} \gamma_j w_j = - \left( \sum_{i=1}^r \alpha_i z_i + \sum_{i=1}^{k-r} \beta_i v_i \right)$$
    * Il vettore a sinistra (chiamiamolo $u = \sum \gamma_j w_j$) è una combinazione lineare di vettori di $\mathcal{B}_B$, quindi $u \in B$.
    * Il vettore a destra è una combinazione lineare di vettori di $\mathcal{B}_A$, quindi appartiene ad $A$.
    * Dato che $u$ appartiene sia ad $A$ che a $B$, allora $u \in A \cap B$.
    * Se $u \in A \cap B$, può essere scritto come combinazione lineare della base di $A \cap B$:
        $$u = \sum_{j=1}^{m-r} \gamma_j w_j = \sum_{i=1}^r \delta_i z_i$$
    * Questo porta all'equazione: $\sum \delta_i z_i - \sum \gamma_j w_j = 0$. Ma i vettori $\{z_1, \dots, z_r, w_1, \dots, w_{m-r}\}$ sono per costruzione la base di $B$ e quindi sono linearmente indipendenti. L'unica combinazione lineare nulla è quella con coefficienti nulli. In particolare, tutti i $\gamma_j$ devono essere zero.
    * Tornando all'equazione iniziale, se tutti i $\gamma_j=0$, essa si riduce a:
        $$\sum \alpha_i z_i + \sum \beta_i v_i = 0$$
    * Ma i vettori $\{z_1, \dots, z_r, v_1, \dots, v_{k-r}\}$ sono la base di $A$ e quindi sono linearmente indipendenti. Ciò implica che anche tutti i coefficienti $\alpha_i$ e $\beta_i$ devono essere zero.
    * Poiché tutti i coefficienti $(\alpha, \beta, \gamma)$ sono necessariamente nulli, l'insieme $\mathcal{S}$ è linearmente indipendente.

6.  **Conclusione**:
    L'insieme $\mathcal{S}$ è una base per $A+B$. La sua dimensione è il numero dei suoi elementi:
    $$\dim(A+B) = |\mathcal{S}| = r + (k-r) + (m-r) = k+m-r$$
    Sostituendo le dimensioni originali:
    $$\dim(A+B) = \dim(A) + \dim(B) - \dim(A \cap B)$$
# Mancata Generalizzazione della Formula di Grassmann

Mentre la relazione tra le dimensioni di somma e intersezione di due sottospazi è ben definita dalla Formula di Grassmann, questa formula non si estende in modo diretto a tre o più sottospazi, a differenza di quanto accade per la cardinalità degli insiemi con il Principio di Inclusione-Esclusione.

## Il Principio di Inclusione-Esclusione per gli Insiemi

Per la teoria degli insiemi, la cardinalità dell'unione di un numero finito di insiemi segue una formula generale. Per tre insiemi $A, B, C$, questa è:
$$|A \cup B \cup C| = |A|+|B|+|C| - (|A \cap B|+|A \cap C|+|B \cap C|) + |A \cap B \cap C|$$
Questa formula si generalizza per un numero qualsiasi di insiemi.

## L'Analogo per gli Spazi Vettoriali e la sua Falsità

Se la Formula di Grassmann seguisse lo stesso schema, per tre sottospazi $A, B, C$ di uno spazio vettoriale $V$, ci aspetteremmo che valga la seguente relazione:
$$\dim(A+B+C) \stackrel{?}{=} \dim(A)+\dim(B)+\dim(C) - (\dim(A \cap B)+\dim(A \cap C)+\dim(B \cap C)) + \dim(A \cap B \cap C)$$

**Teorema**: Questa formula generalizzata, in generale, è **falsa**.

**Dimostrazione (mediante controesempio)**:
Per dimostrare la falsità della formula, è sufficiente fornire un singolo controesempio in cui essa non è verificata.

1.  **Definizione dell'ambiente**:
    Consideriamo lo spazio vettoriale $V = \mathbb{R}^2$.

2.  **Definizione dei sottospazi**:
    Scegliamo tre sottospazi distinti di dimensione 1, ovvero tre rette passanti per l'origine.
    * Sia $A = \text{Span}((1,0))$, l'asse x.
    * Sia $B = \text{Span}((0,1))$, l'asse y.
    * Sia $C = \text{Span}((1,1))$, la bisettrice del I e III quadrante.

3.  **Calcolo delle dimensioni dei sottospazi e delle loro intersezioni**:
    * **Dimensioni individuali**: Ciascun sottospazio è generato da un singolo vettore non nullo, quindi la loro dimensione è 1.
        $$\dim(A) = 1, \quad \dim(B) = 1, \quad \dim(C) = 1$$
    * **Intersezioni a due a due**: Poiché le tre rette sono distinte, la loro unica intersezione è il punto di origine, che corrisponde al sottospazio banale $\{0\}$.
        $$A \cap B = \{0\} \implies \dim(A \cap B) = 0$$
        $$A \cap C = \{0\} \implies \dim(A \cap C) = 0$$
        $$B \cap C = \{0\} \implies \dim(B \cap C) = 0$$
    * **Intersezione a tre**: L'intersezione dei tre sottospazi è anch'essa il solo vettore nullo.
        $$A \cap B \cap C = \{0\} \implies \dim(A \cap B \cap C) = 0$$

4.  **Calcolo della dimensione della somma totale**:
    Lo spazio somma $A+B+C$ è il più piccolo sottospazio che contiene tutte e tre le rette. Calcoliamo lo spazio generato dall'unione delle loro basi:
    $$A+B+C = \text{Span}((1,0), (0,1), (1,1))$$
    I primi due vettori, $(1,0)$ e $(0,1)$, formano già la base canonica di $\mathbb{R}^2$ e sono linearmente indipendenti. Il terzo vettore è una loro combinazione lineare ($(1,1) = 1 \cdot (1,0) + 1 \cdot (0,1)$) e quindi non aggiunge dimensione allo span.
    Pertanto, lo spazio generato è l'intero $\mathbb{R}^2$.
    $$\dim(A+B+C) = \dim(\mathbb{R}^2) = 2$$

5.  **Verifica della formula**:
    Sostituiamo ora i valori calcolati nella formula generalizzata che stiamo testando.
    * **Membro di sinistra**:
        $$\dim(A+B+C) = 2$$
    * **Membro di destra**:
        $$\dim(A)+\dim(B)+\dim(C) - (\dim(A \cap B)+...) + \dim(A \cap B \cap C)$$
        $$= (1+1+1) - (0+0+0) + 0 = 3$$

6.  **Conclusione**:
    Otteniamo il risultato:
    $$2 \neq 3$$
    Poiché abbiamo trovato un caso in cui il membro di sinistra e il membro di destra non sono uguali, la formula non è valida in generale per gli spazi vettoriali.

### Perché la generalizzazione fallisce?
La ragione profonda del fallimento risiede nella struttura degli spazi vettoriali. Mentre il Principio di Inclusione-Esclusione per gli insiemi "conta" gli elementi e corregge i conteggi doppi, tripli, ecc., la dimensione di uno spazio vettoriale misura il numero di "direzioni indipendenti". Quando si sommano sottospazi, le dipendenze lineari che emergono tra i vettori delle diverse basi non seguono lo schema semplice di "inclusione ed esclusione". L'informazione sulla dimensione dell'intersezione a tre (o più) sottospazi non è sufficiente a descrivere tutte le complesse relazioni di dipendenza lineare che possono nascere tra i vari sottospazi.