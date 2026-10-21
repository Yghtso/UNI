const r = prompt("Quante righe ?");
const c = prompt("Quante colonne ?");

const table = document.getElementById("table");
let number = 0;

for (let i = 0; i < r; i++) {
    const row = document.createElement("tr");

    for (let j = 0; j < c; j++) {
        const cell = document.createElement("td");
        number++;
        if (isPrime(number)) cell.classList.add("prime");
        cell.textContent = number;
        row.appendChild(cell);
    }
    table.appendChild(row);
}

function isPrime(num) {
    if (num <= 1) return false;
    for (let i = 2; i <= Math.sqrt(num); i++) {
        if (num % i === 0) return false;
    }
    return true;
}