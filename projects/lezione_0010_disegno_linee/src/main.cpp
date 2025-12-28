#include "raylib.h"

int main() {
    // Inizializza la finestra
    InitWindow(512, 512, "Raylib disegno di linee");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        // Disegna una linea dall'angolo in alto a sinistra
        // all'angolo in basso a destra della finestra
        DrawLine(
            0,                      // x iniziale
            0,                      // y iniziale
            GetScreenWidth() - 1,   // x finale
            GetScreenHeight() - 1,  // y finale
            RED                     // colore della linea
        );

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
