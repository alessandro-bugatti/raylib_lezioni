#include "raylib.h"

int main()
{
    const int screenWidth = 768;
    const int screenHeight = 512;

    InitWindow(screenWidth, screenHeight, "Testo con font personalizzati");
    SetTargetFPS(60);

    Font roboto = LoadFont("assets/Roboto-Regular.ttf");
    Font robotoSlab = LoadFont("assets/RobotoSlab-Regular.ttf");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Roboto", 40, 35, 20, GRAY);
        DrawTextEx(roboto, "Un font senza grazie", {40, 65}, 32, 1, DARKBLUE);
        DrawTextEx(roboto, "Lo stesso font a dimensione piu piccola", {40, 105}, 20, 1, DARKGRAY);

        DrawText("Roboto Slab", 40, 190, 20, GRAY);
        DrawTextEx(robotoSlab, "Un font con grazie", {40, 220}, 32, 1, MAROON);
        DrawTextEx(robotoSlab, "Lo stesso font a dimensione piu piccola", {40, 260}, 20, 1, DARKGRAY);

        EndDrawing();
    }

    UnloadFont(roboto);
    UnloadFont(robotoSlab);
    CloseWindow();
    return 0;
}
