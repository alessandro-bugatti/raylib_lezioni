# Visualizzare del testo

Raylib mette a disposizione la funzione `DrawText` per scrivere del testo
direttamente nella finestra. Per gli esempi semplici non serve caricare un font
da file: la libreria utilizza automaticamente il suo font standard.

La funzione riceve il testo da disegnare, le coordinate del punto in alto a
sinistra, la dimensione del carattere e il colore:

```c++
DrawText("Ciao, Raylib!", 40, 40, 40, DARKBLUE);
```

In questo esempio vengono mostrati testi con dimensioni e colori diversi.
Le coordinate indicano la posizione nella finestra, mentre il parametro
`dimensione` determina la grandezza del testo.

Le chiamate di disegno devono essere eseguite tra `BeginDrawing()` e
`EndDrawing()`, come per le altre funzioni grafiche di Raylib.
