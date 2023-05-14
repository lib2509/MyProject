#include <SFML/Graphics.hpp>
#include <string>

#ifndef _Header_h_
#define _Header_h_

class Header
{
public:
    Header(float w, float h, std::string s, float ws, float hs);
    ~Header();
    
    void draw(sf::RenderWindow &window);

private:
    sf::Font headerFont;
    sf::Text headerText;
};

#endif