<!DOCTYPE hmtl>
<html>
    <h1>Calcola la somma di due numeri<h1>
    <form action="index.php" method="GET">
        <input name="numero1" type="number">
        <input name="numero2" type="number">
        <input type="submit">
    </form>
</html>

<?php
    $num1 = $_GET["numero1"];
    $num2 = $_GET["numero2"];

    echo "il risultato è $num1 + $num2 = " . $num1 + $num2
?>