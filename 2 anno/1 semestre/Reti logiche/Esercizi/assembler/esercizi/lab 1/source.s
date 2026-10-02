# 1. leggere messaggio da termiale
# 2. convertire le lettere minuscole in maiuscolo
# 3. stampare messaggio modifica

.include "../../files/utility.s"

.data
messaggio_in: .fill 00, 1, 0
messaggio_in: .fill 00, 1, 0

.text
_main:
    nop

    lea messaggio_in, %EBX
    mov $80, %CX
    call inline

    lea messaggio_in, %EBX
    call outline

    ret
    