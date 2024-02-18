# Relazione sul Codice

## Descrizione del Codice
Il codice fornito è scritto in C e ha lo scopo di generare due diagrammi a torta (pie charts) in formato HTML basati sui dati inseriti dall'utente riguardo agli impegni e ai progetti. Il programma chiede all'utente di inserire il numero e i nomi degli impegni e dei progetti, quindi genera i diagrammi a torta corrispondenti utilizzando SVG e li stampa in un file HTML.

Il programma è strutturato in diverse funzioni:
- `inputItems`: questa funzione prende in input un array bidimensionale di caratteri rappresentante gli item (impegni o progetti), il numero di item, e una stringa che descrive il tipo di item (es. "impegni"). Chiede all'utente di inserire il numero di item e i loro nomi.
- `printHTMLHeader`: questa funzione stampa l'intestazione HTML del file.
- `printHTMLFooter`: questa funzione stampa il footer HTML del file.
- `printPieChart`: questa funzione stampa un diagramma a torta in formato SVG basato sugli item forniti.

Il `main` funge da punto di ingresso al programma. Dichiara due array bidimensionali di caratteri per gli impegni e i progetti, e due variabili per memorizzare il numero di impegni e progetti. Chiama la funzione `inputItems` due volte per ottenere i dati dall'utente, quindi chiama `printHTMLHeader`, `printPieChart` per ciascun tipo di item e infine `printHTMLFooter`.

## GitHub Repository
Il codice può essere facilmente condiviso su GitHub per la collaborazione e la gestione delle versioni. Per caricare questo codice su GitHub, seguire questi passaggi:

1. Creare un account su GitHub se non si ne possiede già uno.
2. Creare un nuovo repository su GitHub.
3. Usare Git per inizializzare il repository locale e collegarlo al repository su GitHub.
4. Aggiungere il codice al repository locale, fare il commit e poi il push sul repository su GitHub.

Ecco una sequenza di comandi per eseguire queste operazioni:

```bash
# Clonare il repository su GitHub sul proprio computer
git clone <url_del_repository_github>

# Navigare nella directory del repository
cd <nome_del_repository>

# Aggiungere i file al repository locale
git add .

# Effettuare il commit dei file aggiunti con un messaggio
git commit -m "Aggiunto codice C per generare diagrammi a torta"

# Collegare il repository locale al repository su GitHub
git remote add origin <url_del_repository_github>

# Fare il push dei file nel repository su GitHub
git push -u origin master
