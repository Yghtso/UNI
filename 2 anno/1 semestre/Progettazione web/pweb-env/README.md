# Progettazione Web – ambiente di sviluppo

Stesse versioni del pacchetto del corso (XAMPP 8.2.12 in `Esercizi/pweb`), in Docker:

| Componente | Versione | Dove |
|---|---|---|
| Apache (con mod_php) | 2.4.58 | http://localhost/ |
| PHP | 8.2.12 | stesso `php.ini` del corso |
| MariaDB | 10.4.32 | `127.0.0.1:3306`, utente `root`, **nessuna password** |
| phpMyAdmin | 5.2.1 | http://localhost:8080/ |
| Node + Express | 24.18.0 + 5.2.1 | http://localhost:3000/ (opzionale) |

Le impostazioni sono copiate da XAMPP: `php.ini` (errori visibili, 40M upload, `Europe/Berlin`…)
e `my.ini` (utf8mb4, `sql_mode` **non** strict).

## Avvio e arresto

Docker richiede `sudo`, lo script lo usa da solo. Da questa cartella:

```bash
./pweb start            # Apache+PHP, MariaDB, phpMyAdmin
./pweb start express    # + Express (cartella ./express)
./pweb stop             # ferma tutto, i database restano salvati
./pweb status
./pweb logs web         # log di Apache/PHP (errori PHP compresi)
```

Completamento con Tab (`./pweb <Tab>` mostra i comandi): aggiungi una volta questa riga in fondo a `~/.bashrc`
e apri un nuovo terminale:

```bash
source "/path/to/folder/pweb-env/completion.bash"
```

Il primo `start` compila PHP una volta (circa 5–10 minuti). Dopo parte in pochi secondi.
Dopo un riavvio del PC non riparte da solo: esegui di nuovo `./pweb start`.
Per riavviare tutto (es. dopo aver cambiato `php.ini`) usa `./pweb restart`, non `docker compose restart`.

## Dove mettere il codice

- **PHP/HTML/CSS/JS** → `htdocs/` (come `C:\xampp\htdocs`).
  `htdocs/progetto/index.php` → http://localhost/progetto/
- I laboratori (`../Esercizi/Lab`) sono montati dentro htdocs: http://localhost/Lab/Lab08/ (modificabili dal PC, anche PHP).
- Gli esercizi del corso (`../Esercizi`) sono visibili in sola lettura su http://localhost/esercizi/
- **Express** → `express/` (c'è `server.js` del corso). Per un'altra cartella:
  `./pweb start express ../Esercizi/Lab08`. Si riavvia da solo quando salvi.

## Database

Nel codice PHP usa la connessione delle slide, funziona così com'è:

```php
$conn = mysqli_connect("127.0.0.1", "root", "", "nome_db");   // va bene anche "localhost"
$pdo  = new PDO("mysql:host=localhost;dbname=nome_db;charset=utf8mb4", "root", "");
```

- **phpMyAdmin**: http://localhost:8080/ (già loggato come root). Come in XAMPP sono attive anche le
  funzioni avanzate (Designer, relazioni, query salvate, cronologia): usano il database `phpmyadmin`
  e l'utente `pma`, creati da `db-init/00-phpmyadmin.sql`.
- **DBeaver**: nuova connessione MariaDB, host `127.0.0.1`, porta `3306`, utente `root`, password vuota.
- **Console**: `./pweb mysql`
- **Esporta** (come `EsportaDB.bat`): `./pweb export nome_db` → crea `nome_db.sql` nella cartella in cui sei.
- **Importa**: `./pweb import file.sql`
- I file `.sql` in `db-init/` vengono importati automaticamente solo alla prima creazione del DB.
- Ripartire da zero: `./pweb reset-db` (cancella tutti i database).

## Browser del corso

Il pacchetto del corso contiene Firefox e Chrome portable in versioni precise. Per provare HTML/CSS/JS
sugli stessi motori dell'esame ci sono le stesse versioni per Linux, separate dai tuoi browser di sistema:

| Browser | Versione | Fonte |
|---|---|---|
| Firefox | 152.0.6 (en-US) | archive.mozilla.org, verificato con SHA256SUMS |
| Chrome | 150.0.7871.129 | Chrome for Testing (Google), verificato con l'MD5 dello storage |

```bash
./pweb install-browsers                     # una volta sola (~250 MB)
./pweb browser firefox                      # apre http://localhost/
./pweb browser chrome http://localhost/esercizi/
```

- Hanno la stessa barra dei preferiti dei browser del corso (`bookmarks.json`): HTML_Validator,
  CSS_Validator, Server root e **HTML Extractor** (apre in una nuova scheda l'HTML attuale della pagina,
  dopo le modifiche fatte da JavaScript).
- Hanno profili propri in `browsers/profiles/`: non toccano i tuoi Firefox e Chrome normali né i loro dati.
- Firefox parte con `--no-remote` (non si aggancia al Firefox di sistema) e ha gli aggiornamenti disattivati.
  Chrome for Testing non si aggiorna mai e parte senza estensioni (`--disable-extensions`).
- Più avanti: un controllo finale con i browser portable del corso nella VM Windows rileva
  le differenze di font e di rendering di Windows.

## Differenze rispetto a XAMPP su Windows

Versioni e impostazioni sono le stesse del corso, quindi il codice si comporta allo stesso modo.
Cambia il modo di usare gli strumenti, più alcune cose di Linux a cui fare attenzione.

### Come si usa

| Su Windows (pacchetto del corso) | Qui |
|---|---|
| XAMPP Control Panel, `apache_start.bat`, `mysql_start.bat` | `./pweb start` / `./pweb stop` (chiede la password di `sudo`) |
| `C:\pweb\xampp\htdocs\` | `pweb-env/htdocs/` (stesso indirizzo: http://localhost/) |
| http://localhost/phpmyadmin/ | http://localhost:8080/ |
| http://localhost/dashboard/ (pagina di benvenuto XAMPP) | non c'è: http://localhost/ mostra l'elenco dei file, http://localhost/test/ la verifica |
| modificare `xampp\php\php.ini` | modificare `web/php.ini`, poi `./pweb restart` |
| modificare `xampp\mysql\bin\my.ini` | modificare `db/course.cnf`, poi `./pweb restart` |
| modificare `httpd.conf` | modificare `web/pweb.conf`, poi `./pweb restart` |
| log in `xampp\apache\logs\` e `xampp\php\logs\` | `./pweb logs web` (gli errori PHP restano visibili anche nella pagina) |
| dati del DB in `xampp\mysql\data\` | in un volume Docker: per copiarli usa `./pweb export` / `./pweb import` |
| `EsportaDB.bat` | `./pweb export nome_db` (stesso formato del file) |
| `node.exe server.js` nella cartella | `./pweb start express [cartella]`: fa `npm install` e si riavvia da solo a ogni salvataggio |
| VS Code e DBeaver portable | versioni da installare nel sistema (più recenti, si usano allo stesso modo) |

### Attenzione nel codice

- **Maiuscole nei nomi di file e cartelle**: su Linux `Foto.jpg` ≠ `foto.jpg`, anche negli URL,
  in `src`/`href` e in `include`/`require`. Su Windows funzionerebbe lo stesso, qui no:
  scrivi sempre i nomi esatti (all'esame, su Windows, funzionerà comunque).
- **Percorsi**: usa `/`, non `\` (`include "lib/db.php"`), e niente percorsi assoluti tipo
  `C:\pweb\...`: usa percorsi relativi o `__DIR__ . "/file.php"`.
- **Nomi di tabelle e database**: come su Windows non distinguono maiuscole e minuscole
  (`lower_case_table_names=1`) e vengono salvati in minuscolo. `Studenti` e `studenti` sono la stessa tabella.
- **`mail()`**: XAMPP salva le email come file in `xampp\mailoutput` (mailToDisk). Qui non c'è,
  `mail()` restituisce `false`.
- **Sessioni PHP**: si perdono quando fai `./pweb stop` o `restart` (su Windows restano in `xampp\tmp`).
  Dopo un riavvio devi rifare il login nel tuo sito.
- **Estensioni PHP**: sono le stesse del corso, ma compilate dentro PHP. Una guida che dice
  "togli il `;` da `extension=...` nel `php.ini`" qui non serve (o non funziona per estensioni che il corso non ha).
- **Express**: è raggiungibile solo la porta **3000** (quella di `server.js`). Se un esercizio usa
  un'altra porta, cambiala in 3000 oppure aggiungila in `compose.yaml`.
  Non copiare `node_modules` da Windows: viene ricreata da `npm install`.
- **Accesso da altri dispositivi**: tutto ascolta solo su questo PC (`127.0.0.1`), quindi da un
  telefono sulla stessa rete il sito non si apre. Con XAMPP su Windows, firewall permettendo, sì.
- **Font nei browser**: su Linux mancano i font di Windows (Arial, Times New Roman, Segoe UI…),
  il browser usa font simili, quindi testo e misure possono variare di poco. Per questo serve il
  controllo finale nella VM Windows.

### Non incluso (il corso non lo usa)

Tomcat, Perl/CGI, PEAR, Mercury Mail, FileZilla FTP, Webalizer, HTTPS sulla porta 443,
XAMPP Control Panel e dashboard.

Differenze tecniche invisibili al codice: PHP gira come modulo di Apache come in XAMPP,
ma nella variante Linux (NTS + `mpm_prefork` invece di TS + `mpm_winnt`).

## Verifica

http://localhost/test/ mostra versioni di Apache, PHP, MariaDB e il test di connessione.

## File

- `compose.yaml` – i servizi e le versioni (tag fissati)
- `web/Dockerfile` – Apache 2.4.58 ufficiale + PHP 8.2.12 compilato dal sorgente php.net
- `web/php.ini`, `web/pweb.conf` – configurazione PHP e Apache come XAMPP
- `db/course.cnf` – configurazione MariaDB come XAMPP
- `pweb` – script di comodo
- `browsers/` – Firefox e Chrome del corso (scaricati da `./pweb install-browsers`, non inclusi)
