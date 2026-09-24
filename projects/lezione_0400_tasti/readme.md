# Movimento con la tastiera

La funzione `IsKeyDown` permette di controllare se un tasto è premuto in quel
momento, passando il "nome" del tasto come parametro. I nomi sono delle costanti
che possono essere trovati in `raylib.h`, in generale hanno la forma `KEY_` seguito dal nome del tasto, ad esempio:

```c++
KEY_APOSTROPHE  // l'apostrofo
KEY_COMMA       // la virgola
...
KEY_FOUR        // il tasto 4
...
KEY_F           // il tasto F
```

Chiamando `IsKeyDown` a ogni iterazione del *main loop*, il rettangolo si sposta
continuamente finché il tasto freccia resta premuto:

```c++
if (IsKeyDown(KEY_RIGHT)) {
    x += speed;
}
```

Ogni tasto viene controllato con un `if` indipendente dagli altri, quindi é possibile
tenere premuti contemporaneamente due tasti, per esempio `KEY_UP` e
`KEY_RIGHT`, e muovere il rettangolo in diagonale.

Il rettangolo parte dal centro della finestra e la sua posizione viene aggiornata
prima della fase di disegno, tra `BeginDrawing()` e `EndDrawing()`.
