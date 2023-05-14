#include <SFML/Graphics.hpp>
#include "ControlMenu.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1600, 1050), "Data Visualization");
    window.setKeyRepeatEnabled(true);
    runMainMenu(window);

    return 0;
}