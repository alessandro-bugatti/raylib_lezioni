#include "raylib.h"

void aggiorna(float &x, float &y, float vx, float vy) {
    x += vx;
    y += vy;
}

int main()
{
    const int screenWidth = 768;
    const int screenHeight = 768;

    InitWindow(screenWidth, screenHeight, "Movimento");

    float x = 0;
    float y = 0;
    float vx = 0.5;
    float vy = 0.7;

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        // Aggiornamento della posizione
        aggiorna(x, y, vx, vy);

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectangle(x, y, 20, 20, BLUE);

        EndDrawing();

    }

    CloseWindow();
    return 0;
}