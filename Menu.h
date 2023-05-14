#include <SFML/Graphics.hpp>

#ifndef _Menu_h_
#define _Menu_h_
#define MAX_NUM_ITEM 10

class MainMenu
{
public:
    MainMenu(float w, float h);
    ~MainMenu();

    void draw(sf::RenderWindow &window);
    void moveUp();
    void moveDown();
    int getPressedItem()
    {
        return selectedItemIndex;
    }

private:
    int numItem = 2;
    int selectedItemIndex = 0;
    sf::Font font;
    sf::Text menu[MAX_NUM_ITEM];
};

class StartMenu
{
public:
    StartMenu(float w, float h);
    ~StartMenu();

    void draw(sf::RenderWindow &window);
    void moveUp();
    void moveDown();
    int getPressedItem()
    {
        return selectedItemIndex;
    }

private:
    int numItem = 3;
    int selectedItemIndex = 0;
    sf::Font font;
    sf::Text menu[MAX_NUM_ITEM];
};

class ArrayMenu
{
public:
    ArrayMenu(float w, float h);
    ~ArrayMenu();

    void draw(sf::RenderWindow &window);
    void moveUp();
    void moveDown();
    int getPressedItem()
    {
        return selectedItemIndex;
    }

private:
    int numItem = 3;
    int selectedItemIndex = 0;
    sf::Font font;
    sf::Text menu[MAX_NUM_ITEM];
};

class LLMenu
{
public:
    LLMenu(float w, float h);
    ~LLMenu();

    void draw(sf::RenderWindow &window);
    void moveUp();
    void moveDown();
    int getPressedItem()
    {
        return selectedItemIndex;
    }

private:
    int numItem = 6;
    int selectedItemIndex = 0;
    sf::Font font;
    sf::Text menu[MAX_NUM_ITEM];
};

#endif