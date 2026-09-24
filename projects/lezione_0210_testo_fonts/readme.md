# Visualizzare del testo con font TrueType

Raylib può caricare font da file TrueType (`.ttf`) con la funzione `LoadFont`.
Una volta caricato un font, `DrawTextEx` permette di visualizzare il testo
utilizzandolo:

```c++
Font roboto = LoadFont("assets/Roboto-Regular.ttf");
DrawTextEx(roboto, "Un font senza grazie", {40, 65}, 32, 1, DARKBLUE);
```

`DrawTextEx` riceve il font, il testo, la posizione, la dimensione del
carattere, la spaziatura tra i caratteri e il colore. Nell'esempio vengono
confrontati Roboto e Roboto Slab, ciascuno visualizzato a due dimensioni
diverse.

## Come scaricare i font

I font dell'esempio sono disponibili gratuitamente su
[Google Fonts](https://fonts.google.com/): cerca **Roboto** e **Roboto Slab** e
scarica il file `.ttf` della variante Regular. Copia i file nella cartella
`assets` della lezione, mantenendo questi nomi:

- `Roboto-Regular.ttf`
- `RobotoSlab-Regular.ttf`

I font TrueType descrivono i caratteri in forma vettoriale e possono quindi
essere renderizzati a dimensioni diverse, a differenza di un'immagine con il
testo già disegnato. Raylib crea una texture dei caratteri quando carica il
font; `LoadFontEx` permette di specificare la dimensione di rasterizzazione
iniziale quando serve una resa ottimale a dimensioni particolari.

I font caricati occupano risorse che vanno liberate con `UnloadFont` quando
non servono più.
