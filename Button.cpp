#include "Button.h"
#include <SFML/Graphics.hpp>
#include <iostream>

Button::Button(std::string t, int charSize, sf::Vector2f s, sf::Color fillColor, sf::Color textColor)
{
    text.setString(t);
    text.setFillColor(textColor);
    text.setCharacterSize(charSize);

    button.setSize(s);
    button.setFillColor(fillColor);
}

Button::~Button()
{

}

void Button::setFont(sf::Font &font)
{
    text.setFont(font);
}

void Button::setPosition(sf::Vector2f &pos, float w, float h)
{
    button.setPosition(pos);

    float xPos = (pos.x + button.getGlobalBounds().width / w) - (text.getGlobalBounds().width / 2);
    float yPos = (pos.y + button.getGlobalBounds().height / h) - (text.getGlobalBounds().height / 2);
    text.setPosition({xPos, yPos});
}

void Button::setFillColor(sf::Color color)
{
    button.setFillColor(color);
}

void Button::setTextColor(sf::Color color)
{
    text.setFillColor(color);
}

void Button::draw(sf::RenderWindow &window)
{
    window.draw(button);
    window.draw(text);
}

bool Button::isMouseOver(sf::RenderWindow &window)
{
    float mousePosX = sf::Mouse::getPosition(window).x;
    float mousePosY = sf::Mouse::getPosition(window).y;

    float buttonPosX = button.getPosition().x;
    float buttonPosY = button.getPosition().y;

    float buttonPosWidth = buttonPosX + button.getGlobalBounds().width;
    float buttonPosHeight = buttonPosY + button.getGlobalBounds().height;

    if (mousePosX < buttonPosWidth && mousePosX > buttonPosX &&
        mousePosY < buttonPosHeight && mousePosY > buttonPosY)
        return true;

    return false;
}