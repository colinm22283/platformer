#include "mapCreator.h"
#include "render.h"
#include "global.h"
#include "font.h"
#include "titlebar.h"
#include "console.h"

bool MapCreator::enabled = false;

void MapCreator::start()
{
    Titlebar::reset();

    Titlebar::Dropdown dd = Titlebar::addDropdown("FILE");
    Titlebar::addButton(dd, "NEW", 0);
    Titlebar::addButton(dd, "SAVE", 1);
    Titlebar::addButton(dd, "LOAD", 2);

    MapCreator::enabled = true;
    Titlebar::enabled = true;
}

void MapCreator::stop()
{
    MapCreator::enabled = false;
    Titlebar::enabled = false;
    Titlebar::reset();
}

void MapCreator::update()
{
    if (MapCreator::enabled)
    {
        int event = Titlebar::pollEvent();
        if (event != -1)
        {
            Console::print("test");
        }
    }
}

void MapCreator::onMouseClick()
{
    if (MapCreator::enabled)
    {
        
    }
}