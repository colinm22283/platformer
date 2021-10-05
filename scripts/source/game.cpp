#include "game.h"
#include "engine.h"
#include "render.h"
#include "console.h"
#include "font.h"
#include "global.h"
#include "map.h"
#include "mapCreator.h"

bool Game::debugMode = false;

void Game::start()
{
    MapCreator::enabled = true;
}

void Game::update()
{
    

    MapCreator::update();
}