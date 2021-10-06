#include <math.h>
#include <iostream>
#include "SDL/SDL.h"
#include "SDL/SDL_ttf.h"

#include "global.h"
#include "script.h"
#include "engine.h"
#include "console.h"
#include "render.h"
#include "input.h"
#include "consoleParser.h"
#include "font.h"
#include "game.h"
#include "mapCreator.h"
#include "menu.h"
#include "titlebar.h"

void Script::exit()
{
    Console::print("Exit");

    Engine::quit = true;
}

void Script::keyDown(SDL_Keysym keysym) { }

void Script::start()
{
    MapCreator::start();

    Game::start();
}
void Script::update()
{
    Render::clearScreen({ 255, 255, 255, 255 });

    MapCreator::update();

    Game::update();
}

void Script::mouseDown(int button)
{
    
}
void Script::mouseClick(int button)
{
    
}

bool Script::consoleSet(std::string variable, std::string value)
{
    if (variable == "debugmode") Game::debugMode = value == "true" ? true : false;
    else return false;

    return true;
}