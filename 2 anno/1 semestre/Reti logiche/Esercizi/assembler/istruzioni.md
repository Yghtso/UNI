# Istruzioni semplici

1. Mettere in **questa** cartella (quella di questo file, e di `test-ambiente.s`) il file sorgente da assemblare
2. Aprire un terminale **Powershell** in **questa** cartella
3. Lanciare il comando `./assemble.ps1 sorgente.s`
4. Lanciare il programma assemblato `./sorgente`
5. Lanciare il debugger `./debug.ps1 ./sorgente`

```
PS /workspaces/assembler> ./assemble.ps1 ./test-ambiente.s
PS /workspaces/assembler> ./test-ambiente                 
Ok.
PS /workspaces/assembler> ./debug.ps1 ./test-ambiente
GNU gdb (Ubuntu 15.1-1ubuntu1~24.04.1) 15.1
[output di poca utilità]
Breakpoint 1, _main () at /workspaces/assembler/test-ambiente.s:7
7       _main:  nop
(gdb) qq
PS /workspaces/assembler> 
```

NB: la cartella `files` contiene file dell'ambiente utilizzati dagli script per assemblare e debuggare.
Non vanno modificati senza un motivo specifico.
