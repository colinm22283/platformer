#pragma once

#include <string>
#include <vector>

namespace Titlebar
{
    struct Button
    {
        std::string text;
        int callId;
    };
    struct Dropdown
    {
        bool open;
        std::string name;
        Button* buttons;
    };

    extern bool enabled;

    extern std::vector<Dropdown> dropdowns;

    void update();
}