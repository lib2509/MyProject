#include <SFML/Graphics.hpp>

#ifndef _Author_h_
#define _Author_h_

class Author
{
public:
    Author(float w, float h);
    ~Author();
    
    void draw(sf::RenderWindow &window);

private:  
    sf::Font authorNameFont;
    sf::Text authorName;
};
#endif