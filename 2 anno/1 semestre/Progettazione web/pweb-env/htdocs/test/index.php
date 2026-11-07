<?php
// Environment check page: http://localhost/test/
header('Content-Type: text/plain; charset=UTF-8');

echo "Apache: ", $_SERVER['SERVER_SOFTWARE'], "\n";
echo "PHP:    ", PHP_VERSION, "\n\n";

// Same call as the course slides (12-PHP-databases)
$c = mysqli_connect("127.0.0.1", "root", "");
echo "mysqli 127.0.0.1: ", $c ? mysqli_get_server_info($c) : mysqli_connect_error(), "\n";

$c2 = mysqli_connect("localhost", "root", "");
echo "mysqli localhost: ", $c2 ? mysqli_get_server_info($c2) : mysqli_connect_error(), "\n";

$pdo = new PDO("mysql:host=localhost;charset=utf8mb4", "root", "");
echo "PDO localhost:    ", $pdo->query("SELECT VERSION()")->fetchColumn(), "\n";

$r = mysqli_query($c, "SELECT @@sql_mode, @@character_set_server, @@collation_server");
echo "DB settings:      ", implode(" | ", mysqli_fetch_row($r)), "\n";
