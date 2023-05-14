#include "Author.h"

Author::Author(float w, float h)
{
    if (!authorNameFont.loadFromFile("SFML-2.5.1\\examples\\shader\\resources\\Roboto-Light.ttf"))
        return;
    authorName.setFont(authorNameFont);
    authorName.setFillColor(sf::Color::Black);
    authorName.setCharacterSize(16);
    authorName.setString("Made by lib_09");
    authorName.setStyle(sf::Text::Italic);  
    authorName.setPosition(sf::Vector2f(0, 0));
}

Author::~Author()
{

}

void Author::draw(sf::RenderWindow &window)
{
    window.draw(authorName);
}
