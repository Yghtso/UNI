# Derivata come Approssimazione Lineare e Derivate Notevoli

---

## Definizione Rigorosa di Derivata (Approssimazione Lineare)

Sia $f: (a, b) \to \mathbb{R}$ e $x_0 \in (a, b)$.
Abbiamo definito $f$ **derivabile** in $x_0$ se esiste finito il limite:
$$
f'(x_0) = \lim_{x \to x_0} \frac{f(x) - f(x_0)}{x - x_0}
$$
Questa definizione può essere riformulata in un modo più profondo e potente, che definisce la derivata in termini di "migliore approssimazione lineare".

### Definizione Formale (con "o-piccolo")

La funzione $f$ è **derivabile** in $x_0$ se esiste un numero reale $m \in \mathbb{R}$ tale che la retta $t(x) = f(x_0) + m(x-x_0)$ (passante per $(x_0, f(x_0))$) approssima $f(x)$ in un intorno di $x_0$ con un errore che è "o-piccolo" di $(x-x_0)$.

Formalmente, $f$ è derivabile in $x_0$ se $\exists m \in \mathbb{R}$ tale che:
$$
f(x) - t(x) = o(x-x_0) \quad \text{per } x \to x_0
$$
Sostituendo $t(x)$:
$$
f(x) - [f(x_0) + m(x - x_0)] = o(x-x_0)
$$
Ricordando la **definizione di o-piccolo**: $g(x) = o(h(x))$ se $\lim_{x \to x_0} \frac{g(x)}{h(x)} = 0$.
Applichiamo questa definizione alla nostra condizione:
$$
\lim_{x \to x_0} \frac{f(x) - f(x_0) - m(x - x_0)}{x - x_0} = 0
$$
Utilizzando l'algebra dei limiti, spezziamo la frazione:
$$
\lim_{x \to x_0} \left( \frac{f(x) - f(x_0)}{x - x_0} - \frac{m(x - x_0)}{x - x_0} \right) = 0
$$
$$
\lim_{x \to x_0} \left( \frac{f(x) - f(x_0)}{x - x_0} - m \right) = 0
$$
Questo è vero se e solo se:
$$
\lim_{x \to x_0} \frac{f(x) - f(x_0)}{x - x_0} = m
$$
**Conclusione:**
Esiste un $m$ che soddisfa la condizione $o$-piccolo se e solo se $f$ è derivabile nel senso standard, e quel numero $m$ deve essere **esattamente la derivata** $f'(x_0)$.

### Caratterizzazione $\Delta f = o(\Delta x)$

Introduciamo le notazioni di incremento:
* Incremento della variabile (passo): $\Delta x = x - x_0$
* Incremento della funzione (variazione reale): $\Delta f = f(x) - f(x_0) = f(x_0 + \Delta x) - f(x_0)$
* Incremento lineare (variazione sulla tangente, **differenziale**): $df = f'(x_0) \cdot (x - x_0) = f'(x_0) \Delta x$

La condizione $f(x) - [f(x_0) + f'(x_0)(x - x_0)] = o(x-x_0)$ può essere riscritta:
$$
(f(x) - f(x_0)) - f'(x_0)(x - x_0) = o(x-x_0)
$$
Sostituendo le notazioni $\Delta$:
$$
\Delta f - f'(x_0) \Delta x = o(\Delta x)
$$
Che viene quasi sempre scritta come:
$$
\Delta f = f'(x_0) \Delta x + o(\Delta x)
$$

**Cosa implica questo (l'aspetto rigoroso):**
Questa equazione è la **caratterizzazione della derivabilità**. Significa che:

> Se una funzione è derivabile in $x_0$, la variazione reale $\Delta f$ può essere decomposta in due parti:
> 1.  Una parte **lineare** $f'(x_0) \Delta x$ (il differenziale).
> 2.  Una parte **non lineare** $o(\Delta x)$ (l'errore di approssimazione).
>
> La caratteristica fondamentale è che l'errore $o(\Delta x)$ è un **infinitesimo di ordine superiore** rispetto a $\Delta x$.
>
> Questo significa che l'errore non solo va a zero quando $\Delta x \to 0$, ma va a zero **molto più velocemente** di $\Delta x$.
>
> $\lim_{\Delta x \to 0} \frac{o(\Delta x)}{\Delta x} = 0$
>
> La retta tangente $t(x)$ è quindi l'**unica** retta che approssima $f(x)$ con un errore trascurabile rispetto a $\Delta x$. Qualsiasi altra retta (con $m \neq f'(x_0)$) produrrebbe un errore che è un $O(\Delta x)$ (O-grande), cioè un errore dello stesso ordine di $\Delta x$, non migliore.

---

## Tabella delle Derivate e Inverse

*Nota: Le funzioni trigonometriche e $x^\alpha$ sono invertibili solo restringendo opportunamente il loro dominio. La derivata dell'inversa è calcolata usando la variabile $x$ (es. $D[\arcsin(x)]$).*

| Funzione $f(x)$ | Derivata $f'(x)$ | Inversa $f^{-1}(x)$ | Derivata dell'Inversa $D[f^{-1}(x)]$ |
| :--- | :--- | :--- | :--- |
| $x^\alpha$ | $\alpha x^{\alpha-1}$ | $x^{1/\alpha}$ | $\frac{1}{\alpha} x^{\frac{1}{\alpha}-1}$ |
| $\sin(x)$ | $\cos(x)$ | $\arcsin(x)$ | $\frac{1}{\sqrt{1-x^2}}$ |
| $\cos(x)$ | $-\sin(x)$ | $\arccos(x)$ | $\frac{-1}{\sqrt{1-x^2}}$ |
| $\tan(x)$ | $1 + \tan^2(x)$ | $\arctan(x)$ | $\frac{1}{1+x^2}$ |
| $e^x$ | $e^x$ | $\ln(x)$ | $\frac{1}{x}$ |
| $a^x$ | $a^x \ln(a)$ | $\log_a(x)$ | $\frac{1}{x \ln(a)}$ |