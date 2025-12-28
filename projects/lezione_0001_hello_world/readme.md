# Creazione della finestra

Il primo passo per realizzare un programma grafico è inizializzare il sistema
grafico e creare una finestra.

In RayLib questo avviene chiamando la funzione:

```c
InitWindow(int width, int height, const char *title);
```

Questa funzione:

- inizializza il contesto grafico

- crea una finestra con le dimensioni desiderate

- imposta il titolo della finestra

Nel nostro esempio la finestra viene creata con dimensioni 512×512 pixel:

```c++
InitWindow(512, 512, "Raylib intro");
```


## Il ciclo principale

Una volta creata la finestra, un programma grafico non termina subito,
ma entra in un ciclo principale (detto **main loop**).

In Raylib questo ciclo ha tipicamente questa forma:
```c++
while (!WindowShouldClose())
{
    BeginDrawing();
    ClearBackground(RAYWHITE);
    EndDrawing();
}
```


Il ciclo continua a essere eseguito finché:

- l’utente non chiude la finestra

- oppure preme il tasto ESC

## Disegno sullo schermo

All’interno del ciclo principale:

- ```BeginDrawing()``` indica l’inizio della fase di disegno

- ```ClearBackground()``` pulisce la finestra con un colore uniforme, in questo esempio il bianco

- ```EndDrawing()``` aggiorna lo schermo mostrando il risultato

In questa prima lezione non viene disegnato nulla,
quindi la finestra appare semplicemente vuota.

## Chiusura del programma

Quando il ciclo principale termina, è necessario chiudere correttamente
la finestra e liberare le risorse, utilizzando:

```c++
CloseWindow();
```



Questo garantisce una terminazione corretta del programma.

## Obiettivo della lezione

Al termine di questa lezione dovresti aver capito come:

- creare una finestra grafica con Raylib

- mantenere aperta la finestra usando un ciclo principale

- chiudere correttamente un programma grafico