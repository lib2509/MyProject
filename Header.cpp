#include "Header.h"
#include <string>
Header::Header(float w, float h, std::string s, float ws, float hs)
{
    if (!headerFont.loadFromFile("SFML-2.5.1\\examples\\shader\\resources\\KaushanScript-Regular.otf"))
        return;
    headerText.setFont(headerFont);
    headerText.setFillColor(sf::Color(8, 151, 234, 255));
    headerText.setCharacterSize(100);
    headerText.setString(s);
    headerText.setPosition(sf::Vector2f(w / ws, h / hs));

}

Header::~Header()
{

}

void Header::draw(sf::RenderWindow &window)
{
    window.draw(headerText);
}
