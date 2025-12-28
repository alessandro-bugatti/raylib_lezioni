# Esempio di utilizzo di colori

Nella grafica i colori sono rappresentati attraverso dei tipi di dato
che vengono "creati" per contenere le informazioni necessarie a definire
un colore e che sono specifici per ogni libreria, seppure equivalenti
tra di loro.

La libreria Raylib utilizza il tipo di dato `Color`, come visto nella lezione sulle linee, che è pensato per
contenere i tre canali di colore rosso, verde e blu (RGB), i cui valori
devono essere compresi tra 0 e 255, e il canale *alpha* che indica il
grado di trasparenza, anch'esso compreso tra 0 e 255 (0 = completamente
trasparente, 255 = completamente opaco).

## Definizione dei colori

Per rappresentare un colore è necessario valorizzare tutti e quattro i
campi della struttura `Color` in base all'effetto desiderato.

Ad esempio, il rosso puro completamente opaco è definito così:

``` c
Color rosso = {255, 0, 0, 255};
```

Un verde chiaro potrebbe essere:

``` c
Color verde_chiaro = {0, 200, 0, 255};
```

Altri due esempi, in cui il colore risultante potrebbe non essere
immediatamente intuitivo, sono i seguenti:

``` c
Color giallo_acido = {221, 234, 6, 255};
Color azzurro_trasparente = {12, 231, 190, 128};
```

Nel caso dell'ultimo colore è presente anche una trasparenza, perché il
valore del canale *alpha* è intermedio tra completamente opaco e
completamente trasparente.

Il bianco e il nero sono invece rappresentati così:

``` c
Color bianco = {255, 255, 255, 255};
Color nero = {0, 0, 0, 255};
```

## Disegnare rettangoli

Una volta definita una variabile di tipo `Color`, è possibile
utilizzarla per disegnare forme geometriche.

Per disegnare un rettangolo in Raylib si utilizza la funzione
`DrawRectangle()`, che ha la seguente forma:

``` c
DrawRectangle(int x,
              int y,
              int width,
              int height,
              Color color);
```

I parametri rappresentano:

-   `x`, `y`: coordinate dell'angolo **in alto a sinistra** del
    rettangolo
-   `width`: larghezza del rettangolo
-   `height`: altezza del rettangolo
-   `color`: colore del rettangolo

Ad esempio, per disegnare un rettangolo rosso che occupa la metà
superiore sinistra della finestra si può scrivere:

``` c
DrawRectangle(0, 0, screenWidth/2, screenHeight/2, rosso);
```

Per rendere più evidente dove si trovano i rettangoli colorati

## Trasparenza e sovrapposizione

Quando si utilizza un colore con un valore di *alpha* inferiore a 255,
il rettangolo risulta parzialmente trasparente.

Questo permette di vedere gli oggetti disegnati precedentemente sotto di
esso.

L'ordine con cui vengono disegnati i rettangoli è importante: gli
oggetti disegnati dopo vengono visualizzati sopra quelli disegnati
prima.
