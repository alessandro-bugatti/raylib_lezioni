# Pressione e rilascio dei tasti

In questa lezione si vedranno altre funzioni per leggere la tastiera, che hanno un
comportamento differente rispetto a `IsKeyDown`, che è stato mostrato nella
lezione `lezione_0400_tasti`: queste funzioni sono `IsKeyPressed` e `IsKeyReleased`.

`IsKeyDown` restituisce `true` per tutti i frame in cui il tasto rimane premuto.
È quindi adatta ad azioni continue, come spostare un oggetto mentre si tiene
premuta una freccia.

`IsKeyPressed`, invece, restituisce `true` solo nel frame in cui il tasto viene
premuto. È utile per le azioni da eseguire una sola volta per pressione, come
attivare o disattivare un interruttore. In questo esempio i tasti A, S e D
fanno il toggle dei rispettivi riquadri:

```c++
if (IsKeyPressed(KEY_A)) {
    primoAttivo = !primoAttivo;
}
```

`IsKeyReleased` restituisce `true` solo nel frame in cui il tasto viene
rilasciato. L'esempio registra l'ultimo tasto rilasciato e lo mostra sotto i
riquadri. Questa funzione è utile quando un'azione deve avvenire al termine
della pressione, ad esempio per confermare un input dopo che l'utente ha
lasciato il tasto.

Tenere premuto un tasto non ripete il toggle: per cambiare nuovamente lo stato
bisogna rilasciarlo e premerlo di nuovo.
