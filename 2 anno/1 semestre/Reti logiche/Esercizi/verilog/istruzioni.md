# Istruzioni semplici

1. Mettere in **questa** cartella (quella di questo file, e di `test-ambiente.v`) i file sorgenti
2. Aprire un terminale in **questa** cartella
3. Lanciare il comando `iverilog -o sim [lista di file .v]` per compilare la simulazione `sim`
4. Lanciare il comando `vvp ./sim` per lanciare la simulazione
5. Lanciare il comando `gtkwave waveform.vcd` per lanciare GTKWave

```
PS /workspaces/verilog> iverilog -o sim ./test-ambiente.v 
PS /workspaces/verilog> vvp ./sim  
VCD info: dumpfile waveform.vcd opened for output.
Ok.
./test-ambiente.v:10: $finish called at 20 (1s)
PS /workspaces/verilog> gtkwave ./waveform.vcd  
[output di poca utilità]
PS /workspaces/verilog>
```
