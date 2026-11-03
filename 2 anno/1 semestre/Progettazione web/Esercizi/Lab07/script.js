"use strict";

class Veicolo {
    constructor(modello, tariffagiornaliera) {
        if (typeof modello !== "string" || modello.trim() === "") 
            throw new TypeError("modello deve essere una stringa non vuota");

        if (typeof tariffagiornaliera !== "number" || !Number.isFinite(tariffagiornaliera) || tariffagiornaliera <= 0)
            throw new TypeError("tariffagiornaliera deve essere un numero positivo, espresso in euro");

        this.modello = modello; // stringa non vuota;
        this.tariffagiornaliera = tariffagiornaliera;  // numero positivo, espresso in euro
    }

    descrizione() {
        return this.modello;
    }

    calcolaCosto(giorni) {
        return this.tariffagiornaliera * giorni;
    }
}

class Automobile extends Veicolo {
    constructor(modello, tariffagiornaliera, seggiolino) {
        super(modello, tariffagiornaliera);
        if (typeof seggiolino !== "boolean") {
            throw new TypeError("seggiolino deve essere un booleano");
        }
        this.seggiolino = seggiolino; // boolean
    }

    descrizione() {
        return `Auto ${super.descrizione()} seggiolino: ${this.seggiolino ? 'sì' : 'no'}`;
    }

    calcoloCosto(giorni) {
        return this.seggiolino ? this.tariffagiornaliera + 5 * giorni : super.calcolaCosto(giorni);
    }
}

class Furgone extends Veicolo {
    constructor(modello, tariffagiornaliera, capacitàCarico, servizioCarico) {
        super(modello, tariffagiornaliera);
        if (typeof capacitàCarico !== "number" || !Number.isFinite(capacitàCarico) || capacitàCarico <= 0)
            throw new TypeError("capacità di carico deve essere un numero positivo, espresso in kg");
        if (typeof servizioCarico !== "boolean")
            throw new TypeError("servizio di carico deve essere un booleano");  
        this.capacitàCarico = capacitàCarico; // numero positivo, espresso in kg
        this.servizioCarico = servizioCarico; // boolean
    }
    
    descrizione() {
        return `Furgone ${super.descrizione()} capacità di carico: ${this.capacitàCarico} kg, servizio di carico: ${this.servizioCarico ? 'sì' : 'no'}`;
    }

    calcoloCosto(giorni) {
        let costoBase = super.calcolaCosto(giorni);
        return this.servizioCarico ? costoBase + 30: costoBase;
    }
}

const form = document.getElementById("formPreventivo");
const table = document.getElementById("tabellaPreventivi");

form.addEventListener("submit", function(event) {
    event.preventDefault();

    const modello = form.elements.modello.value;
    const tariffagiornaliera = parseFloat(form.elements.tariffa.value);
    const giorni = parseInt(form.elements.giorni.value);
    const tipoVeicolo = form.elements.tipo.value;

    let veicolo;

    if (tipoVeicolo === "automobile") {

        const seggiolino = form.elements.seggiolino.checked;
        veicolo = new Automobile(modello, tariffagiornaliera, seggiolino);

    } else if (tipoVeicolo === "furgone") {

        const capacitàCarico = parseFloat(form.elements.capacitàCarico.value);
        const servizioCarico = form.elements.servizioCarico.checked;
        veicolo = new Furgone(modello, tariffagiornaliera, capacitàCarico, servizioCarico);
    
    }

    const costoTotale = veicolo.calcoloCosto(giorni);

    const newRow = table.insertRow();
    newRow.insertCell(0).textContent = veicolo.descrizione();
    newRow.insertCell(1).textContent = giorni;
    newRow.insertCell(2).textContent = costoTotale.toFixed(2) + " €";
});