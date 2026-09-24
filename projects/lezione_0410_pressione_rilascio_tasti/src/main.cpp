#include "raylib.h"

int main()
{
    const int screenWidth = 768;
    const int screenHeight = 420;

    InitWindow(screenWidth, screenHeight, "Pressione e rilascio dei tasti");
    SetTargetFPS(60);

    bool primoAttivo = false;
    bool secondoAttivo = false;
    bool terzoAttivo = false;
    const char *ultimoRilasciato = "Nessuno";

    while (!WindowShouldClose())
    {
        if (IsKeyPressed(KEY_A)) primoAttivo = !primoAttivo;
        if (IsKeyPressed(KEY_S)) secondoAttivo = !secondoAttivo;
        if (IsKeyPressed(KEY_D)) terzoAttivo = !terzoAttivo;

        if (IsKeyReleased(KEY_A)) ultimoRilasciato = "A";
        if (IsKeyReleased(KEY_S)) ultimoRilasciato = "S";
        if (IsKeyReleased(KEY_D)) ultimoRilasciato = "D";

        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Premi A, S o D per attivare o disattivare un riquadro", 24, 24, 20, DARKGRAY);

        DrawRectangle(40, 90, 210, 190, primoAttivo ? GREEN : LIGHTGRAY);
        DrawText("Tasto A", 60, 110, 24, DARKGRAY);
        DrawText(primoAttivo ? "ON" : "OFF", 100, 170, 40, primoAttivo ? WHITE : DARKGRAY);

        DrawRectangle(279, 90, 210, 190, secondoAttivo ? GREEN : LIGHTGRAY);
        DrawText("Tasto S", 299, 110, 24, DARKGRAY);
        DrawText(secondoAttivo ? "ON" : "OFF", 339, 170, 40, secondoAttivo ? WHITE : DARKGRAY);

        DrawRectangle(518, 90, 210, 190, terzoAttivo ? GREEN : LIGHTGRAY);
        DrawText("Tasto D", 538, 110, 24, DARKGRAY);
        DrawText(terzoAttivo ? "ON" : "OFF", 578, 170, 40, terzoAttivo ? WHITE : DARKGRAY);

        DrawText("Ultimo tasto rilasciato:", 24, 330, 20, DARKGRAY);
        DrawText(ultimoRilasciato, 270, 330, 20, MAROON);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
