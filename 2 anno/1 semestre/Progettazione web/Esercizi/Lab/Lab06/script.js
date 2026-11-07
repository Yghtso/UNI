const canvas = document.getElementById("canvas");
const ctx = canvas.getContext("2d");

let snowflakes = [];

const SPAWN_RATE = 30;        
let spawnAccumulator = 0;
let lastTime = null;

function createSnowflake() {
    const size = 2 + Math.random() * 4;
    snowflakes.push({
        x: Math.random() * canvas.width,
        y: -size,
        rotation: Math.random() * Math.PI,
        size: size,
        vy: 40 + size * 15,                    
        vx: (Math.random() - 0.5) * 20,
        spin: (Math.random() - 0.5) * 2,       
    });
}

function drawSnowflake(sf) {
    ctx.save();
    ctx.translate(sf.x, sf.y);
    ctx.rotate(sf.rotation);

    ctx.beginPath();
    ctx.moveTo(-sf.size, 0);
    ctx.lineTo(sf.size, 0);
    ctx.moveTo(0, -sf.size);
    ctx.lineTo(0, sf.size);

    const d = sf.size * Math.SQRT1_2;
    ctx.moveTo(-d, -d);
    ctx.lineTo(d, d);
    ctx.moveTo(-d, d);
    ctx.lineTo(d, -d);

    ctx.strokeStyle = "white";
    ctx.stroke();
    ctx.restore();
}

function updatePositions(dt) {
    for (const sf of snowflakes) {
        sf.x += sf.vx * dt;
        sf.y += sf.vy * dt;
        sf.rotation += sf.spin * dt;
    }    
    snowflakes = snowflakes.filter(sf => sf.y - sf.size <= canvas.height);
}

function spawn(dt) {
    spawnAccumulator += SPAWN_RATE * dt;
    while (spawnAccumulator >= 1) {
        createSnowflake();
        spawnAccumulator--;
    }
}

function draw(now) {
    if (lastTime === null) lastTime = now;
    const dt = Math.min((now - lastTime) / 1000, 0.1);
    lastTime = now;

    spawn(dt);
    updatePositions(dt);

    ctx.fillStyle = "lightblue";
    ctx.fillRect(0, 0, canvas.width, canvas.height);
    for (const sf of snowflakes) drawSnowflake(sf);

    window.requestAnimationFrame(draw);
}

window.requestAnimationFrame(draw);