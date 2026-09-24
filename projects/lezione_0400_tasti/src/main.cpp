#include "raylib.h"

int main()
{
    const int screenWidth = 768;
    const int screenHeight = 768;
    const int rectangleSize = 40;
    const int speed = 5;

    InitWindow(screenWidth, screenHeight, "Movimento con la tastiera");
    SetTargetFPS(60);

    int x = (screenWidth - rectangleSize) / 2;
    int y = (screenHeight - rectangleSize) / 2;

    while (!WindowShouldClose())
    {
        if (IsKeyDown(KEY_UP)) y -= speed;
        if (IsKeyDown(KEY_DOWN)) y += speed;
        if (IsKeyDown(KEY_LEFT)) x -= speed;
        if (IsKeyDown(KEY_RIGHT)) x += speed;

        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Usa i tasti freccia per muovere il rettangolo", 20, 20, 20, DARKGRAY);
        DrawRectangle(x, y, rectangleSize, rectangleSize, BLUE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
