#include <SFML/Graphics.hpp>
#include <iostream>

#ifndef _Button_h_
#define _Button_h_

class Button
{
public:
    Button(std::string t, int charSize, sf::Vector2f s, sf::Color fillColor, sf::Color textColor);
    ~Button();
    
    void setFont(sf::Font &font);
    void setPosition(sf::Vector2f &pos, float w, float h);
    void setFillColor(sf::Color color);
    void setTextColor(sf::Color color);
    void draw(sf::RenderWindow &window);
    bool isMouseOver(sf::RenderWindow &window);
private:
    sf::RectangleShape button;
    sf::Text text;

};

#endif