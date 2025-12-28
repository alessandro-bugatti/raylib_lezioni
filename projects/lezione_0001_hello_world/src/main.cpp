#include "raylib.h"

int main(){
    // Inizializza la finestra e il contesto grafico
    InitWindow(512, 512, "Raylib hello world");

    // Imposta il frame rate (opzionale ma consigliato)
    SetTargetFPS(60);

    // Ciclo principale: la finestra rimane aperta
    // finché l'utente non la chiude o preme ESC
    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(WHITE);
        EndDrawing();
    }

    // Chiude la finestra e libera le risorse
    CloseWindow();

    return 0;
}
