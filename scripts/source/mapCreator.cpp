#include "mapCreator.h"
#include "render.h"
#include "global.h"
#include "font.h"
#include "titlebar.h"

bool MapCreator::enabled = false;

void MapCreator::start()
{
    Titlebar::Dropdown dd = Titlebar::addDropdown("FILE");
    Titlebar::addButton(dd, "NEW", 0);
    Titlebar::addButton(dd, "SAVE", 1);
    Titlebar::addButton(dd, "LOAD", 2);
    Titlebar::enabled = true;
}

void MapCreator::update()
{
    if (MapCreator::enabled)
    {
        
    }
}

void MapCreator::onMouseClick()
{
    if (MapCreator::enabled)
    {
        
    }
}