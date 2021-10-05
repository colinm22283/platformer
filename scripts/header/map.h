#pragma once

#include <string>

namespace Map
{
    enum Tile { AIR, DIRT };

    extern int width;
    extern int height;

    extern Tile** tiles;

    bool load(std::string path);
}