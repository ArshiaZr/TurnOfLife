#include "renderer.h"
#include "raylib.h"

static Camera2D camera;

void init_renderer(int width, int height, const char *title, int worldWidth, int worldHeight, const int fps) {
    InitWindow(width, height, title);

    camera.target = (Vector2){worldWidth/2.0f, worldHeight/2.0f};
    camera.offset = (Vector2){width/2.0f, height/2.0f};
    camera.rotation = 0.0f;
    camera.zoom = 1;

    SetTargetFPS(fps);
}

void draw_renderer() {
    BeginDrawing();
    ClearBackground(RAYWHITE);

    // Rescale
    BeginMode2D(camera);

    // stuff

    EndMode2D();
    EndDrawing();
}

void close_renderer() {
    CloseWindow();
}