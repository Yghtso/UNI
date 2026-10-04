# https://rzippo.github.io/reti-logiche-esercitazioni/esercitazioni/Assembler/Esercitazioni/Esercitazione%201#esercizio-16

# Quello che segue è un tentativo di soluzione 
# dell'esercizio precedente. Contiene tuttavia uno o più bug. Trovarli e correggerli.

.include "./files/utility.s"

.data
array:      .word 1, 256, 256, 512, 42, 2048, 1024, 1, 0
array_len:  .long 9
numero:     .word 1

.text
.global _main # mancava questa riga

_main:
    nop
    mov $0, %cl
    mov numero, %ax
    mov $0, %esi

comp:
    cmp array_len, %esi
    je fine
    # cmpw array(%esi), %ax le celle dell' array sono word, l' indirizzo effettivo è esi * 2
    cmpw array(, %esi, 2), %ax
    jne poi
    inc %cl

poi:
    inc %esi 
    jmp comp

fine:
    mov %cl, %al
    call outdecimal_byte
    ret
