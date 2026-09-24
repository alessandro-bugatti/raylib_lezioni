#include "raylib.h"

int main()
{
    const int screenWidth = 768;
    const int screenHeight = 512;

    InitWindow(screenWidth, screenHeight, "Testo");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Ciao, Raylib!", 40, 40, 40, DARKBLUE);
        DrawText("Questo testo usa il font standard della libreria.", 40, 110, 20, DARKGRAY);
        DrawText("DrawText(testo, x, y, dimensione, colore)", 40, 160, 20, MAROON);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
