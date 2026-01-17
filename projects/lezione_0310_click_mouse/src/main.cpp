#include <string>

#include "raylib.h"

int main()
{
    const int screenWidth = 768;
    const int screenHeight = 768;

    InitWindow(screenWidth, screenHeight, "Click del mouse");
    SetTargetFPS(60);

    bool on = false;
    Color colore_cerchio1 = LIGHTGRAY;
    Color colore_cerchio2 = BLUE;

    while (!WindowShouldClose()){
        // Click sinistro: azione UNA SOLA VOLTA
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            if (on == false) {
                colore_cerchio1 = YELLOW;
                on = true;
            } else {
                colore_cerchio1 = LIGHTGRAY;
                on = false;
            }
        }

        // Click destro: azione CONTINUA finché premuto
        if (IsMouseButtonDown(MOUSE_BUTTON_RIGHT)){
            colore_cerchio2 = RED;
        } else {
            colore_cerchio2 = BLUE;
        }

        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawCircle(200, 200, 60, colore_cerchio1);
        DrawCircle(550, 200, 60, colore_cerchio2);

        DrawText("Click sinistro\n(OnMousePressed)", 100, 300, 32, DARKGRAY);
        DrawText("Click destro\n(OnMouseDown)", 450, 300, 32, DARKGRAY);

        if (IsMouseButtonUp(MOUSE_BUTTON_LEFT)) {
            DrawRectangle(300, 400, 100, 100, LIGHTGRAY);
        } else {
            DrawRectangle(300, 400, 100, 100, YELLOW);
        }
        if (IsMouseButtonUp(MOUSE_BUTTON_RIGHT)) {
            DrawRectangle(400, 400, 100, 100, LIGHTGRAY);
        } else {
            DrawRectangle(400, 400, 100, 100, YELLOW);
        }

        DrawRectangle(395, 400, 10, 100, BLACK);
        DrawRectangleLines(300, 400, 200, 300, BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
