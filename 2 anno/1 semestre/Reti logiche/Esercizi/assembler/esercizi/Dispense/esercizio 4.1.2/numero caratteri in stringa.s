.include "./files/utility.s"

.GLOBAL _main

.DATA

string: .ASCIZ "esempio di come un elefante ebreo galleggia"
lettera: .BYTE 'e'
result: .BYTE 0x0

.TEXT

_main:
    NOP

    LEA string-1, %ESI

while:
    
    INCL %ESI
    CMPB $0x0, (%ESI)
    JE while_end
    MOVB lettera, %AL
    
    CMPB %AL, (%ESI)
    JNZ while

    INCB result
    JMP while

while_end:

    MOVZBL result, %EAX
    CALL outdecimal_long
    CALL newline

    XOR %EAX, %EAX
    RET
    