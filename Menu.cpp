#include "Menu.h"

MainMenu::MainMenu(float w, float h)
{
    if (!font.loadFromFile("SFML-2.5.1\\examples\\shader\\resources\\ShortBaby-Mg2w.ttf"))
        return;
    float ws = 2.05;
    menu[0].setFont(font);
    menu[0].setFillColor(sf::Color::Green);
    menu[0].setString("Start");
    menu[0].setPosition(sf::Vector2f(w / ws, h / 5 * 2.5));

    menu[1].setFont(font);
    menu[1].setFillColor(sf::Color(163, 239, 247, 255));
    menu[1].setString("Exit");
    menu[1].setPosition(sf::Vector2f(w / ws, h / 5 * 3));
    
    selectedItemIndex = 0;
}

MainMenu::~MainMenu()
{

}

void MainMenu::draw(sf::RenderWindow &window)
{
    for (int i = 0; i < numItem; i++)
        window.draw(menu[i]);
}

void MainMenu::moveUp()
{
    if (selectedItemIndex - 1 >= 0)
    {
        menu[selectedItemIndex].setFillColor(sf::Color(163, 239, 247, 255));
        selectedItemIndex--;
        menu[selectedItemIndex].setFillColor(sf::Color::Green);
    }
}

void MainMenu::moveDown()
{
    if (selectedItemIndex + 1 < numItem)
    {
        menu[selectedItemIndex].setFillColor(sf::Color(163, 239, 247, 255));
        selectedItemIndex++;
        menu[selectedItemIndex].setFillColor(sf::Color::Green);
    }
}

StartMenu::StartMenu(float w, float h)
{
    if (!font.loadFromFile("SFML-2.5.1\\examples\\shader\\resources\\ShortBaby-Mg2w.ttf"))
        return;
    float ws = 2.15;
    menu[0].setFont(font);
    menu[0].setFillColor(sf::Color::Green);
    menu[0].setString("Array");
    menu[0].setPosition(sf::Vector2f(w / ws, h / 5 * 2.0));

    menu[1].setFont(font);
    menu[1].setFillColor(sf::Color(163, 239, 247, 255));
    menu[1].setString("Linked List");
    menu[1].setPosition(sf::Vector2f(w / ws, h / 5 * 2.5));

    menu[2].setFont(font);
    menu[2].setFillColor(sf::Color(163, 239, 247, 255));
    menu[2].setString("Back");
    menu[2].setPosition(sf::Vector2f(w / ws, h / 5 * 3.0));
    
    selectedItemIndex = 0;
}

StartMenu::~StartMenu()
{

}

void StartMenu::draw(sf::RenderWindow &window)
{
    for (int i = 0; i < numItem; i++)
        window.draw(menu[i]);
}

void StartMenu::moveUp()
{
    if (selectedItemIndex - 1 >= 0)
    {
        menu[selectedItemIndex].setFillColor(sf::Color(163, 239, 247, 255));
        selectedItemIndex--;
        menu[selectedItemIndex].setFillColor(sf::Color::Green);
    }
}

void StartMenu::moveDown()
{
    if (selectedItemIndex + 1 < numItem)
    {
        menu[selectedItemIndex].setFillColor(sf::Color(163, 239, 247, 255));
        selectedItemIndex++;
        menu[selectedItemIndex].setFillColor(sf::Color::Green);
    }
}

ArrayMenu::ArrayMenu(float w, float h)
{
    if (!font.loadFromFile("SFML-2.5.1\\examples\\shader\\resources\\ShortBaby-Mg2w.ttf"))
        return;
    float ws = 2.2;
    menu[0].setFont(font);
    menu[0].setFillColor(sf::Color::Green);
    menu[0].setString("Static Array");
    menu[0].setPosition(sf::Vector2f(w / ws, h / 5 * 2.0));

    menu[1].setFont(font);
    menu[1].setFillColor(sf::Color(163, 239, 247, 255));
    menu[1].setString("Dynamic Array");
    menu[1].setPosition(sf::Vector2f(w / ws, h / 5 * 2.5));

    menu[2].setFont(font);
    menu[2].setFillColor(sf::Color(163, 239, 247, 255));
    menu[2].setString("Back");
    menu[2].setPosition(sf::Vector2f(w / ws, h / 5 * 3.0));
 
    selectedItemIndex = 0;
}

ArrayMenu::~ArrayMenu()
{

}

void ArrayMenu::draw(sf::RenderWindow &window)
{
    for (int i = 0; i < numItem; i++)
        window.draw(menu[i]);
}

void ArrayMenu::moveUp()
{
    if (selectedItemIndex - 1 >= 0)
    {
        menu[selectedItemIndex].setFillColor(sf::Color(163, 239, 247, 255));
        selectedItemIndex--;
        menu[selectedItemIndex].setFillColor(sf::Color::Green);
    }
}

void ArrayMenu::moveDown()
{
    if (selectedItemIndex + 1 < numItem)
    {
        menu[selectedItemIndex].setFillColor(sf::Color(163, 239, 247, 255));
        selectedItemIndex++;
        menu[selectedItemIndex].setFillColor(sf::Color::Green);
    }
}

LLMenu::LLMenu(float w, float h)
{
    if (!font.loadFromFile("SFML-2.5.1\\examples\\shader\\resources\\ShortBaby-Mg2w.ttf"))
        return;
    float ws = 2.3;
    menu[0].setFont(font);
    menu[0].setFillColor(sf::Color::Green);
    menu[0].setString("Singly Linked List");
    menu[0].setPosition(sf::Vector2f(w / ws, h / 6 * 2.0));

    menu[1].setFont(font);
    menu[1].setFillColor(sf::Color(163, 239, 247, 255));
    menu[1].setString("Doubly Linked List");
    menu[1].setPosition(sf::Vector2f(w / ws, h / 6 * 2.5));

    menu[2].setFont(font);
    menu[2].setFillColor(sf::Color(163, 239, 247, 255));
    menu[2].setString("Circular Linked List");
    menu[2].setPosition(sf::Vector2f(w / ws, h / 6 * 3.0));
    
    menu[3].setFont(font);
    menu[3].setFillColor(sf::Color(163, 239, 247, 255));
    menu[3].setString("Stack");
    menu[3].setPosition(sf::Vector2f(w / ws, h / 6 * 3.5));

    menu[4].setFont(font);
    menu[4].setFillColor(sf::Color(163, 239, 247, 255));
    menu[4].setString("Queue");
    menu[4].setPosition(sf::Vector2f(w / ws, h / 6 * 4.0));

    menu[5].setFont(font);
    menu[5].setFillColor(sf::Color(163, 239, 247, 255));
    menu[5].setString("Back");
    menu[5].setPosition(sf::Vector2f(w / ws, h / 6 * 4.5));

    selectedItemIndex = 0;
}

LLMenu::~LLMenu()
{

}

void LLMenu::draw(sf::RenderWindow &window)
{
    for (int i = 0; i < numItem; i++)
        window.draw(menu[i]);
}

void LLMenu::moveUp()
{
    if (selectedItemIndex - 1 >= 0)
    {
        menu[selectedItemIndex].setFillColor(sf::Color(163, 239, 247, 255));
        selectedItemIndex--;
        menu[selectedItemIndex].setFillColor(sf::Color::Green);
    }
}

void LLMenu::moveDown()
{
    if (selectedItemIndex + 1 < numItem)
    {
        menu[selectedItemIndex].setFillColor(sf::Color(163, 239, 247, 255));
        selectedItemIndex++;
        menu[selectedItemIndex].setFillColor(sf::Color::Green);
    }
}