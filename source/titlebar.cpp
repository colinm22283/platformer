#include "titlebar.h"
#include "font.h"
#include "render.h"
#include "global.h"

bool Titlebar::enabled = true;

void Titlebar::update()
{
    if (Titlebar::enabled)
    {
        Render::fillRect(0, 0, Global::windowWidth, 25, { 0, 0, 0, 255 });
        Render::setColor({ 255, 255, 255, 255 });
        for (int i = 0; i < Titlebar::dropdowns.size(); i++)
        {

        }
    }
}