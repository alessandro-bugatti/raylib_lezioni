#include "raylib.h"

int main() {
    const int screenWidth = 512;
    const int screenHeight = 512;

    InitWindow(screenWidth, screenHeight, "Disegno di figure geometriche");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        // Cerchio
        DrawCircle(100, 100, 40, RED);

        // Ellisse
        DrawEllipse(250, 100, 60, 30, BLUE);

        // Rettangolo (solo contorno)
        DrawRectangleLines(50, 200, 120, 80, DARKGREEN);

        // Rettangolo con angoli arrotondati
        Rectangle roundedRect = {220, 180, 150, 100};
        DrawRectangleRounded(roundedRect, 0.3f, 2, ORANGE);

        // Triangolo
        Vector2 v1 = {80, 350};
        Vector2 v2 = {30, 430};
        Vector2 v3 = {130, 430};
        DrawTriangle(v1, v2, v3, PURPLE);

        // Poligono regolare (esagono)

        Vector2 center = {320, 380};
        DrawPoly(center, 6, 50, 0.0f, MAROON);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
