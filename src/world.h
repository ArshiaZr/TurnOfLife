#ifndef WORLD_H
#define WORLD_H

#include <stdbool.h>

#define MAX_AGENTS 10
#define MAX_FOOD 10
typedef struct{
    int width;
    int height;
    bool game_over;


} World;

void init_world(World *world, int width, int height);

void write_to_console(World *world);

#endif