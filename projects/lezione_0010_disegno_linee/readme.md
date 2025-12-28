# Disegnare linee

Raylib può essere utilizzata per disegnare semplici forme geometriche,
come punti, linee e rettangoli.

La funzione utilizzata per disegnare una linea è `DrawLine()` e ha
i seguenti parametri:

```c++
DrawLine(int x1,
         int y1,
         int x2,
         int y2,
         Color color);
```
I primi quattro parametri rappresentano le coordinate x,y
dei due estremi della linea, mentre il quinto parametro rappresenta
il colore della linea.

## Colori

Normalmente le persone descrivono i colori usando nomi
(ad esempio rosso, verde, blu), ma i computer gestiscono i colori
in modo diverso.

In grafica, uno dei metodi più comuni per rappresentare un colore è
l’encoding RGB, che utilizza tre valori numerici: **R**ed (rosso),
**G**reen (verde) e **B**lue (blu).

Ogni valore è un numero intero compreso tra 0 e 255.
Combinando questi tre valori si ottengono oltre 16 milioni di colori.

Alcuni esempi:

    Rosso: (255, 0, 0)

    Verde: (0, 255, 0)

    Blu: (0, 0, 255)

    Bianco: (255, 255, 255)

    Nero: (0, 0, 0)

Raylib utilizza una struttura chiamata ```Color```, che include anche
un quarto canale chiamato *Alpha*.

Il canale *Alpha* rappresenta la trasparenza:

    255 → completamente opaco

    0 → completamente trasparente (invisibile)

Raylib fornisce anche alcuni colori già pronti, come RED, GREEN,
BLUE, WHITE e BLACK e altri.

## Disegnare una linea

In questo esempio viene disegnata una linea rossa
dall’angolo in alto a sinistra della finestra
all’angolo in basso a destra, utilizzando il codice seguente:
```c++
DrawLine(
    0,
    0,
    GetScreenWidth() - 1,
    GetScreenHeight() - 1,
    RED
);
```
## Coordinate dello schermo

Le coordinate dello schermo seguono il sistema mostrato
nell’immagine seguente:

![Coordinate in grafica 2D](coordinate.png)



L’origine (0,0) si trova nell’angolo in alto a sinistra.
Le coordinate aumentano verso destra (asse x) e verso il basso (asse y).

Le funzioni ```GetScreenWidth()``` e ```GetScreenHeight()``` restituiscono
le dimensioni della finestra, impostate durante la chiamata a
```InitWindow()```.

## Aggiornamento dello schermo

In Raylib, si ricorda che tutto ciò che viene disegnato deve trovarsi
tra le chiamate:
```c++
BeginDrawing();
...
EndDrawing();
```

Il contenuto disegnato viene mostrato sullo schermo solo
alla fine di ```EndDrawing()```.

Se queste funzioni non sono presenti o sono usate in modo scorretto,
non verrà visualizzato nulla nella finestra.