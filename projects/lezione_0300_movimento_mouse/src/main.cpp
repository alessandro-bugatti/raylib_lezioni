#include "raylib.h"
#include <cstdio>
#include <string>

int main()
{
    const int screenWidth = 768;
    const int screenHeight = 768;

    InitWindow(screenWidth, screenHeight, "Movimenti del mouse");

    SetTargetFPS(60);

    std::string coordinate;

    while (!WindowShouldClose())
    {
        int mouseX = GetMouseX();
        int mouseY = GetMouseY();

        coordinate = "(" + std::to_string(mouseX) + ", " +
                        std::to_string(mouseY) + ")";
        BeginDrawing();

        ClearBackground(RAYWHITE);

        int l = MeasureText(coordinate.c_str(), 20);

        DrawText(
            coordinate.c_str(),
            mouseX - l / 2,
            mouseY - 30,
            20,
            BLACK
        );
        DrawCircleLines(mouseX, mouseY, 5, RED);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
