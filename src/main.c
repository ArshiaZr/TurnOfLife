#include "raylib.h"
#include "renderer.h"

#define WINDOW_WIDTH 400
#define WINDOW_HEIGHT 400
#define WORLD_WIDTH 400
#define WORLD_HEIGHT 400
#define TITLE "Turn of Life"

int main (int argc, const char * argv[])
{
    init_renderer(WINDOW_WIDTH, WINDOW_HEIGHT, TITLE, WORLD_WIDTH, WORLD_HEIGHT, 60);

    while (!WindowShouldClose()) {
        draw_renderer();
    }
    close_renderer();
    return 0;
}