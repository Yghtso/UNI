let margins = {height: 500, width: 500};
let pos = {top: 0, left: 0};

let box = document.getElementById("square");
box.style.top = pos.top + "px";
box.style.left = pos.left + "px";

let container = document.getElementById("content");
container.style.height = margins.height + "px";
container.style.width = margins.width + "px";

window.addEventListener("keydown", (e) => {
    console.log(e.key);
    switch (e.key) {
        case "w":
            pos.top = Math.max(0, pos.top - 10);
            break;
        case "s":
            pos.top = Math.min(margins.height - box.offsetHeight, pos.top + 10);
            break;
        case "a":
            pos.left = Math.max(0, pos.left - 10);
            break;
        case "d":
            pos.left = Math.min(margins.width - box.offsetWidth, pos.left + 10);
            break;
    }

    updatePosition();
});

function updatePosition() {
    box.style.top = pos.top + "px";
    box.style.left = pos.left + "px";
}