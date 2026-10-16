# https://rzippo.github.io/reti-logiche-esercitazioni/esercitazioni/Assembler/Esercitazioni/Esercitazione%201#esercizio-12-istruzioni-stringa

# Scrivere dei programmi che si comportano come gli esercizi 1.1 e 1.2, tranne che per il fatto di convertire da maiuscolo in minuscolo anziché il contrario.

.include "./files/utility.s"

.global _main

.data
messaggio_in:
    .fill 80, 1, 0

messaggio_out:
    .fill 80, 1, 0


.text
_main:
    nop

punto_1:

    leal messaggio_in, %EBX
    movw $80, %CX
    call inline


punto_2:

    leal messaggio_in, %ESI      # sorgente
    leal messaggio_out, %EDI     # destinazione

    cld                          # DF = 0:
                                 # LODSB incrementa ESI
                                 # STOSB incrementa EDI


punto_2_loop:

    # AL = *ESI
    # ESI++
    lodsb


    ## if (AL < 'a')
    #     non modificare
    cmpb $'a', %AL
    jb punto_2_store

    ## if (AL > 'z')
    #     non modificare
    cmpb $'z', %AL
    ja punto_2_store


    # 'a'..'z' -> 'A'..'Z'
    addb $32, %AL


punto_2_store:

    # *EDI = AL
    # EDI++
    stosb

    # termina quando e' stato copiato anche CR
    cmpb $'\r', %AL
    jne punto_2_loop

punto_3:

    leal messaggio_out, %EBX
    call outline

    xorl %EAX, %EAX
    ret
