.INCLUDE "./files/utility.s" 

.DATA

X: .fill 8, 1, 0
Y: .fill 8, 1, 0
Z: .fill 8, 1, 0

.TEXT
.GLOBAL _main

_main:
    nop

// setup della lettura di 1 numero :
// parto dall inizio dell array (1^ operando)
// durante la lettura mi sposto in avanti
// leggo 1 byte per volta per un totale di 8 volte (64 bit in totale)
    lea X, %edi
    cld
    movl $8, %ecx

ciclo_lettura_x:

    call inbyte
    stosb
    loop ciclo_lettura_x 
    call newline

// stessa cosa per y
    lea Y, %edi
    movl $8, %ecx

ciclo_lettura_y:
    call inbyte
    stosb
    loop ciclo_lettura_y
    call newline


// controllo tutti e 2 != 0


// ciclo per 8 volte segnandomi volta volta il carry

    xor %eax, %eax
    ret
