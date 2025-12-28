#include <iostream>

#include "raylib.h"

int main() {
    const int screenWidth = 512;
    const int screenHeight = 512;

    InitWindow(screenWidth, screenHeight, "Caricamento di immagini");

    Texture2D img = LoadTexture("assets/image.png");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawTexture(img, screenWidth/2 - img.width/2, (screenHeight - img.height) / 2, WHITE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
