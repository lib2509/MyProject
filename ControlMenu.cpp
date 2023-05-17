#include "ControlMenu.h"
#include "Menu.h"
#include "Author.h"
#include "Header.h"
#include "TextBox.h"
#include "Button.h"
#include "StaticArray.h"
#include "DynamicArray.h"
#include "SLL.h"
#include "DLL.h"
#include "CLL.h"
#include "Stack.h"
#include <string>
#include <sstream>
#include <windows.h>
#define ROBOTO "SFML-2.5.1\\examples\\shader\\resources\\Roboto-Regular.ttf"
#define ROBOTO_BOLD "SFML-2.5.1\\examples\\shader\\resources\\Roboto-Bold.ttf"

std::string toString(int n)
{
    std::string s;
    std::stringstream ss;
    ss << n;
    ss >> s;
    return s;
}

int toNumber(std::string s)
{
    int n;
    std::stringstream ss;
    ss << s;
    ss >> n;
    return n;
}
int mainMenu(sf::RenderWindow &window)
{
    float wx = window.getSize().x, wy = window.getSize().y;
    MainMenu menu(wx, wy);
    Header header(wx, wy, "DATA VISUALIZATION", 5.65, 10);
    Author author(wx, wy);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();
                break;
            }
            case sf::Event::KeyReleased:
            {
                switch (event.key.code)
                {
                case sf::Keyboard::Up:
                {
                    menu.moveUp();
                    break;
                }
                case sf::Keyboard::Down:
                {
                    menu.moveDown();
                    break;
                }
                case sf::Keyboard::Return:
                    return menu.getPressedItem();
                }
            }
            }
        }
        window.clear(sf::Color::White);
        header.draw(window);
        author.draw(window);
        menu.draw(window);
        window.display();
    }
    return -1;
}

int startMenu(sf::RenderWindow &window)
{
    float wx = window.getSize().x, wy = window.getSize().y;
    StartMenu menu(wx, wy);
    Header header(wx, wy, "DATA VISUALIZATION", 5.65, 10);
    Author author(wx, wy);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();
                break;
            }
            case sf::Event::KeyReleased:
            {
                switch (event.key.code)
                {
                case sf::Keyboard::Up:
                {
                    menu.moveUp();
                    break;
                }
                case sf::Keyboard::Down:
                {
                    menu.moveDown();
                    break;
                }
                case sf::Keyboard::Return:
                    return menu.getPressedItem();
                }
            }
            }
        }
        window.clear(sf::Color::White);
        header.draw(window);
        author.draw(window);
        menu.draw(window);
        window.display();
    }
    return -1;
}

int arrayMenu(sf::RenderWindow &window)
{
    float wx = window.getSize().x, wy = window.getSize().y;
    ArrayMenu menu(wx, wy);
    Header header(wx, wy, "DATA VISUALIZATION", 5.65, 10);
    Author author(wx, wy);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();
                break;
            }
            case sf::Event::KeyReleased:
            {
                switch (event.key.code)
                {
                case sf::Keyboard::Up:
                {
                    menu.moveUp();
                    break;
                }
                case sf::Keyboard::Down:
                {
                    menu.moveDown();
                    break;
                }
                case sf::Keyboard::Return:
                    return menu.getPressedItem();
                }
            }
            }
        }
        window.clear(sf::Color::White);
        header.draw(window);
        author.draw(window);
        menu.draw(window);
        window.display();
    }
    return -1;
}

int llMenu(sf::RenderWindow &window)
{
    float wx = window.getSize().x, wy = window.getSize().y;
    LLMenu menu(wx, wy);
    Header header(wx, wy, "DATA VISUALIZATION", 5.65, 10);
    Author author(wx, wy);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();
                break;
            }
            case sf::Event::KeyReleased:
            {
                switch (event.key.code)
                {
                case sf::Keyboard::Up:
                {
                    menu.moveUp();
                    break;
                }
                case sf::Keyboard::Down:
                {
                    menu.moveDown();
                    break;
                }
                case sf::Keyboard::Return:
                    return menu.getPressedItem();
                }
            }
            }
        }
        window.clear(sf::Color::White);
        header.draw(window);
        author.draw(window);
        menu.draw(window);
        window.display();
    }
    return -1;
}

int staticArrayMenu(sf::RenderWindow &window, StaticArray &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    sf::Font textBoxFont, buttonFont;
    textBoxFont.loadFromFile(ROBOTO);
    buttonFont.loadFromFile(ROBOTO_BOLD);

    Header header(wx, wy, "Static Array", 2.85, 20);
    Author author(wx, wy);

    Button initButton("Initialize", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f initButtonPos = {100, 525};
    initButton.setPosition(initButtonPos, 5.25, 4);
    initButton.setFont(buttonFont);

    Button addButton("Add", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f addButtonPos = {100, 600};
    addButton.setPosition(addButtonPos, 3, 4);
    addButton.setFont(buttonFont);

    Button deleteButton("Delete", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f deleteButtonPos = {100, 675};
    deleteButton.setPosition(deleteButtonPos, 4, 4);
    deleteButton.setFont(buttonFont);

    Button updateButton("Update", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f updateButtonPos = {100, 750};
    updateButton.setPosition(updateButtonPos, 4, 4);
    updateButton.setFont(buttonFont);

    Button searchButton("Search", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f searchButtonPos = {100, 825};
    searchButton.setPosition(searchButtonPos, 4, 4);
    searchButton.setFont(buttonFont);

    Button backButton("Back", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f backButtonPos = {100, 900};
    backButton.setPosition(backButtonPos, 3.25, 4);
    backButton.setFont(buttonFont);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::MouseMoved:
            {
                if (initButton.isMouseOver(window))
                    initButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    initButton.setFillColor(sf::Color::Green);

                if (addButton.isMouseOver(window))
                    addButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    addButton.setFillColor(sf::Color::Green);

                if (deleteButton.isMouseOver(window))
                    deleteButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    deleteButton.setFillColor(sf::Color::Green);

                if (updateButton.isMouseOver(window))
                    updateButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    updateButton.setFillColor(sf::Color::Green);

                if (searchButton.isMouseOver(window))
                    searchButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    searchButton.setFillColor(sf::Color::Green);

                if (backButton.isMouseOver(window))
                    backButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    backButton.setFillColor(sf::Color::Green);

                break;
            }
            case sf::Event::MouseButtonPressed:
            {
                if (initButton.isMouseOver(window))
                {
                    runStaticArrayInitMenu(window, a);
                }

                if (addButton.isMouseOver(window))
                {
                    runStaticArrayAddMenu(window, a);
                }

                if (deleteButton.isMouseOver(window))
                {
                    runStaticArrayDeleteMenu(window, a);
                }

                if (updateButton.isMouseOver(window))
                {
                    runStaticArrayUpdateMenu(window, a);
                }

                if (searchButton.isMouseOver(window))
                {
                    runStaticArraySearchMenu(window, a);
                }

                if (backButton.isMouseOver(window))
                {
                    return 0;
                }

                break;
            }
            }
        }
        window.clear(sf::Color::White);
        initButton.draw(window);
        addButton.draw(window);
        deleteButton.draw(window);
        updateButton.draw(window);
        searchButton.draw(window);
        backButton.draw(window);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        window.display();
    }
    return -1;
}

int staticArrayInitMenu(sf::RenderWindow &window, StaticArray &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    sf::Font textBoxFont, buttonFont;
    textBoxFont.loadFromFile(ROBOTO);
    buttonFont.loadFromFile(ROBOTO_BOLD);

    Header header(wx, wy, "Static Array", 2.85, 20);
    Author author(wx, wy);

    Button randomButton("Random", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f randomButtonPos = {100, 525};
    randomButton.setPosition(randomButtonPos, 5, 4);
    randomButton.setFont(buttonFont);

    Button userDefineButton("User Define", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f userDefineButtonPos = {100, 600};
    userDefineButton.setPosition(userDefineButtonPos, 11.5, 4);
    userDefineButton.setFont(buttonFont);

    Button backButton("Back", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f backButtonPos = {100, 675};
    backButton.setPosition(backButtonPos, 3.25, 4);
    backButton.setFont(buttonFont);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::MouseMoved:
            {
                if (randomButton.isMouseOver(window))
                    randomButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    randomButton.setFillColor(sf::Color::Green);

                if (userDefineButton.isMouseOver(window))
                    userDefineButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    userDefineButton.setFillColor(sf::Color::Green);

                if (backButton.isMouseOver(window))
                    backButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    backButton.setFillColor(sf::Color::Green);

                break;
            }
            case sf::Event::MouseButtonPressed:
            {
                if (randomButton.isMouseOver(window))
                {
                    a.randomInit();
                }

                if (userDefineButton.isMouseOver(window))
                {
                    runStaticArrayInitUserDefineMenu(window, a);
                }

                if (backButton.isMouseOver(window))
                {
                    return 0;
                }

                break;
            }
            }
        }
        window.clear(sf::Color::White);
        randomButton.draw(window);
        userDefineButton.draw(window);
        backButton.draw(window);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        window.display();
    }
    return -1;
}

int dynamicArrayMenu(sf::RenderWindow &window, DynamicArray &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    sf::Font textBoxFont, buttonFont;
    textBoxFont.loadFromFile(ROBOTO);
    buttonFont.loadFromFile(ROBOTO_BOLD);

    Header header(wx, wy, "Dynamic Array", 3.25, 20);
    Author author(wx, wy);

    Button initButton("Initialize", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f initButtonPos = {100, 525};
    initButton.setPosition(initButtonPos, 5.25, 4);
    initButton.setFont(buttonFont);

    Button addButton("Add", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f addButtonPos = {100, 600};
    addButton.setPosition(addButtonPos, 3, 4);
    addButton.setFont(buttonFont);

    Button deleteButton("Delete", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f deleteButtonPos = {100, 675};
    deleteButton.setPosition(deleteButtonPos, 4, 4);
    deleteButton.setFont(buttonFont);

    Button updateButton("Update", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f updateButtonPos = {100, 750};
    updateButton.setPosition(updateButtonPos, 4, 4);
    updateButton.setFont(buttonFont);

    Button searchButton("Search", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f searchButtonPos = {100, 825};
    searchButton.setPosition(searchButtonPos, 4, 4);
    searchButton.setFont(buttonFont);

    Button backButton("Back", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f backButtonPos = {100, 900};
    backButton.setPosition(backButtonPos, 3.25, 4);
    backButton.setFont(buttonFont);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();
                break;
            }
            case sf::Event::MouseMoved:
            {
                if (initButton.isMouseOver(window))
                    initButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    initButton.setFillColor(sf::Color::Green);

                if (addButton.isMouseOver(window))
                    addButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    addButton.setFillColor(sf::Color::Green);

                if (deleteButton.isMouseOver(window))
                    deleteButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    deleteButton.setFillColor(sf::Color::Green);

                if (updateButton.isMouseOver(window))
                    updateButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    updateButton.setFillColor(sf::Color::Green);

                if (searchButton.isMouseOver(window))
                    searchButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    searchButton.setFillColor(sf::Color::Green);

                if (backButton.isMouseOver(window))
                    backButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    backButton.setFillColor(sf::Color::Green);
                break;
            }
            case sf::Event::MouseButtonPressed:
            {
                if (initButton.isMouseOver(window))
                {
                    runDynamicArrayInitMenu(window, a);
                }

                if (addButton.isMouseOver(window))
                {
                    runDynamicArrayAddMenu(window, a);
                }

                if (deleteButton.isMouseOver(window))
                {
                    runDynamicArrayDeleteMenu(window, a);
                }

                if (updateButton.isMouseOver(window))
                {
                    runDynamicArrayUpdateMenu(window, a);
                }

                if (searchButton.isMouseOver(window))
                {
                    runDynamicArraySearchMenu(window, a);
                }

                if (backButton.isMouseOver(window))
                {
                    return 0;
                }

                break;
            }
            }
        }
        window.clear(sf::Color::White);
        initButton.draw(window);
        addButton.draw(window);
        deleteButton.draw(window);
        updateButton.draw(window);
        searchButton.draw(window);
        backButton.draw(window);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        window.display();
    }
    return -1;
}

int dynamicArrayInitMenu(sf::RenderWindow &window, DynamicArray &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    sf::Font textBoxFont, buttonFont;
    textBoxFont.loadFromFile(ROBOTO);
    buttonFont.loadFromFile(ROBOTO_BOLD);

    Header header(wx, wy, "Dynamic Array", 3.25, 20);
    Author author(wx, wy);

    Button randomButton("Random", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f randomButtonPos = {100, 525};
    randomButton.setPosition(randomButtonPos, 5, 4);
    randomButton.setFont(buttonFont);

    Button userDefineButton("User Define", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f userDefineButtonPos = {100, 600};
    userDefineButton.setPosition(userDefineButtonPos, 11.5, 4);
    userDefineButton.setFont(buttonFont);

    Button backButton("Back", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f backButtonPos = {100, 675};
    backButton.setPosition(backButtonPos, 3.25, 4);
    backButton.setFont(buttonFont);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::MouseMoved:
            {
                if (randomButton.isMouseOver(window))
                    randomButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    randomButton.setFillColor(sf::Color::Green);

                if (userDefineButton.isMouseOver(window))
                    userDefineButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    userDefineButton.setFillColor(sf::Color::Green);

                if (backButton.isMouseOver(window))
                    backButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    backButton.setFillColor(sf::Color::Green);

                break;
            }
            case sf::Event::MouseButtonPressed:
            {
                if (randomButton.isMouseOver(window))
                {
                    a.randomInit();
                }

                if (userDefineButton.isMouseOver(window))
                {
                    runDynamicArrayInitUserDefineMenu(window, a);
                }

                if (backButton.isMouseOver(window))
                {
                    return 0;
                }

                break;
            }
            }
        }
        window.clear(sf::Color::White);
        randomButton.draw(window);
        userDefineButton.draw(window);
        backButton.draw(window);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        window.display();
    }
    return -1;
}

int sllMenu(sf::RenderWindow &window, SLL &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    sf::Font textBoxFont, buttonFont;
    textBoxFont.loadFromFile(ROBOTO);
    buttonFont.loadFromFile(ROBOTO_BOLD);

    Header header(wx, wy, "Singly Linked List", 3.56, 20);
    Author author(wx, wy);

    Button initButton("Initialize", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f initButtonPos = {100, 525};
    initButton.setPosition(initButtonPos, 5.25, 4);
    initButton.setFont(buttonFont);

    Button addButton("Add", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f addButtonPos = {100, 600};
    addButton.setPosition(addButtonPos, 3, 4);
    addButton.setFont(buttonFont);

    Button deleteButton("Delete", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f deleteButtonPos = {100, 675};
    deleteButton.setPosition(deleteButtonPos, 4, 4);
    deleteButton.setFont(buttonFont);

    Button updateButton("Update", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f updateButtonPos = {100, 750};
    updateButton.setPosition(updateButtonPos, 4, 4);
    updateButton.setFont(buttonFont);

    Button searchButton("Search", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f searchButtonPos = {100, 825};
    searchButton.setPosition(searchButtonPos, 4, 4);
    searchButton.setFont(buttonFont);

    Button backButton("Back", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f backButtonPos = {100, 900};
    backButton.setPosition(backButtonPos, 3.25, 4);
    backButton.setFont(buttonFont);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();
                break;
            }
            case sf::Event::MouseMoved:
            {
                if (initButton.isMouseOver(window))
                    initButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    initButton.setFillColor(sf::Color::Green);

                if (addButton.isMouseOver(window))
                    addButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    addButton.setFillColor(sf::Color::Green);

                if (deleteButton.isMouseOver(window))
                    deleteButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    deleteButton.setFillColor(sf::Color::Green);

                if (updateButton.isMouseOver(window))
                    updateButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    updateButton.setFillColor(sf::Color::Green);

                if (searchButton.isMouseOver(window))
                    searchButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    searchButton.setFillColor(sf::Color::Green);

                if (backButton.isMouseOver(window))
                    backButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    backButton.setFillColor(sf::Color::Green);
                break;
            }
            case sf::Event::MouseButtonPressed:
            {
                if (initButton.isMouseOver(window))
                {
                    runSLLInitMenu(window, a);

                }

                if (addButton.isMouseOver(window))
                {
                    runSLLAddMenu(window, a);
                }

                if (deleteButton.isMouseOver(window))
                {
                    runSLLDeleteMenu(window, a);
                }

                if (updateButton.isMouseOver(window))
                {
                    runSLLUpdateMenu(window, a);
                }

                if (searchButton.isMouseOver(window))
                {
                    runSLLSearchMenu(window, a);
                }

                if (backButton.isMouseOver(window))
                {
                    return 0;
                }

                break;
            }
            }
        }
        window.clear(sf::Color::White);
        initButton.draw(window);
        addButton.draw(window);
        deleteButton.draw(window);
        updateButton.draw(window);
        searchButton.draw(window);
        backButton.draw(window);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        window.display();
    }
    return -1;
}

int sllInitMenu(sf::RenderWindow &window, SLL &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    sf::Font textBoxFont, buttonFont;
    textBoxFont.loadFromFile(ROBOTO);
    buttonFont.loadFromFile(ROBOTO_BOLD);

    Header header(wx, wy, "Singly Linked List", 3.56, 20);
    Author author(wx, wy);

    Button randomButton("Random", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f randomButtonPos = {100, 525};
    randomButton.setPosition(randomButtonPos, 5, 4);
    randomButton.setFont(buttonFont);

    Button userDefineButton("User Define", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f userDefineButtonPos = {100, 600};
    userDefineButton.setPosition(userDefineButtonPos, 11.5, 4);
    userDefineButton.setFont(buttonFont);

    Button backButton("Back", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f backButtonPos = {100, 675};
    backButton.setPosition(backButtonPos, 3.25, 4);
    backButton.setFont(buttonFont);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::MouseMoved:
            {
                if (randomButton.isMouseOver(window))
                    randomButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    randomButton.setFillColor(sf::Color::Green);

                if (userDefineButton.isMouseOver(window))
                    userDefineButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    userDefineButton.setFillColor(sf::Color::Green);

                if (backButton.isMouseOver(window))
                    backButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    backButton.setFillColor(sf::Color::Green);

                break;
            }
            case sf::Event::MouseButtonPressed:
            {
                if (randomButton.isMouseOver(window))
                {
                    a.randomInit();
                }

                if (userDefineButton.isMouseOver(window))
                {
                    runSLLInitUserDefineMenu(window, a);
                }

                if (backButton.isMouseOver(window))
                {
                    return 0;
                }

                break;
            }
            }
        }
        window.clear(sf::Color::White);
        randomButton.draw(window);
        userDefineButton.draw(window);
        backButton.draw(window);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        window.display();
    }
    return -1;
}

int dllMenu(sf::RenderWindow &window, DLL &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    sf::Font textBoxFont, buttonFont;
    textBoxFont.loadFromFile(ROBOTO);
    buttonFont.loadFromFile(ROBOTO_BOLD);

    Header header(wx, wy, "Doubly Linked List", 3.625, 20);
    Author author(wx, wy);

    Button initButton("Initialize", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f initButtonPos = {100, 525};
    initButton.setPosition(initButtonPos, 5.25, 4);
    initButton.setFont(buttonFont);

    Button addButton("Add", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f addButtonPos = {100, 600};
    addButton.setPosition(addButtonPos, 3, 4);
    addButton.setFont(buttonFont);

    Button deleteButton("Delete", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f deleteButtonPos = {100, 675};
    deleteButton.setPosition(deleteButtonPos, 4, 4);
    deleteButton.setFont(buttonFont);

    Button updateButton("Update", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f updateButtonPos = {100, 750};
    updateButton.setPosition(updateButtonPos, 4, 4);
    updateButton.setFont(buttonFont);

    Button searchButton("Search", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f searchButtonPos = {100, 825};
    searchButton.setPosition(searchButtonPos, 4, 4);
    searchButton.setFont(buttonFont);

    Button backButton("Back", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f backButtonPos = {100, 900};
    backButton.setPosition(backButtonPos, 3.25, 4);
    backButton.setFont(buttonFont);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();
                break;
            }
            case sf::Event::MouseMoved:
            {
                if (initButton.isMouseOver(window))
                    initButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    initButton.setFillColor(sf::Color::Green);

                if (addButton.isMouseOver(window))
                    addButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    addButton.setFillColor(sf::Color::Green);

                if (deleteButton.isMouseOver(window))
                    deleteButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    deleteButton.setFillColor(sf::Color::Green);

                if (updateButton.isMouseOver(window))
                    updateButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    updateButton.setFillColor(sf::Color::Green);

                if (searchButton.isMouseOver(window))
                    searchButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    searchButton.setFillColor(sf::Color::Green);

                if (backButton.isMouseOver(window))
                    backButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    backButton.setFillColor(sf::Color::Green);
                break;
            }
            case sf::Event::MouseButtonPressed:
            {
                if (initButton.isMouseOver(window))
                {
                    runDLLInitMenu(window, a);
                }

                if (addButton.isMouseOver(window))
                {
                    runDLLAddMenu(window, a);
                }

                if (deleteButton.isMouseOver(window))
                {
                    runDLLDeleteMenu(window, a);
                }

                if (updateButton.isMouseOver(window))
                {
                    runDLLUpdateMenu(window, a);
                }

                if (searchButton.isMouseOver(window))
                {
                    runDLLSearchMenu(window, a);
                }

                if (backButton.isMouseOver(window))
                {
                    return 0;
                }

                break;
            }
            }
        }
        window.clear(sf::Color::White);
        initButton.draw(window);
        addButton.draw(window);
        deleteButton.draw(window);
        updateButton.draw(window);
        searchButton.draw(window);
        backButton.draw(window);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        window.display();
    }
    return -1;
}

int dllInitMenu(sf::RenderWindow &window, DLL &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    sf::Font textBoxFont, buttonFont;
    textBoxFont.loadFromFile(ROBOTO);
    buttonFont.loadFromFile(ROBOTO_BOLD);

    Header header(wx, wy, "Doubly Linked List", 3.65, 20);
    Author author(wx, wy);

    Button randomButton("Random", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f randomButtonPos = {100, 525};
    randomButton.setPosition(randomButtonPos, 5, 4);
    randomButton.setFont(buttonFont);

    Button userDefineButton("User Define", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f userDefineButtonPos = {100, 600};
    userDefineButton.setPosition(userDefineButtonPos, 11.5, 4);
    userDefineButton.setFont(buttonFont);

    Button backButton("Back", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f backButtonPos = {100, 675};
    backButton.setPosition(backButtonPos, 3.25, 4);
    backButton.setFont(buttonFont);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::MouseMoved:
            {
                if (randomButton.isMouseOver(window))
                    randomButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    randomButton.setFillColor(sf::Color::Green);

                if (userDefineButton.isMouseOver(window))
                    userDefineButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    userDefineButton.setFillColor(sf::Color::Green);

                if (backButton.isMouseOver(window))
                    backButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    backButton.setFillColor(sf::Color::Green);

                break;
            }
            case sf::Event::MouseButtonPressed:
            {
                if (randomButton.isMouseOver(window))
                {
                    a.randomInit();
                }

                if (userDefineButton.isMouseOver(window))
                {
                    runDLLInitUserDefineMenu(window, a);
                }

                if (backButton.isMouseOver(window))
                {
                    return 0;
                }

                break;
            }
            }
        }
        window.clear(sf::Color::White);
        randomButton.draw(window);
        userDefineButton.draw(window);
        backButton.draw(window);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        window.display();
    }
    return -1;
}

int cllMenu(sf::RenderWindow &window, CLL &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    sf::Font textBoxFont, buttonFont;
    textBoxFont.loadFromFile(ROBOTO);
    buttonFont.loadFromFile(ROBOTO_BOLD);

    Header header(wx, wy, "Circular Linked List", 3.825, 20);
    Author author(wx, wy);

    Button initButton("Initialize", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f initButtonPos = {100, 525};
    initButton.setPosition(initButtonPos, 5.25, 4);
    initButton.setFont(buttonFont);

    Button addButton("Add", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f addButtonPos = {100, 600};
    addButton.setPosition(addButtonPos, 3, 4);
    addButton.setFont(buttonFont);

    Button deleteButton("Delete", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f deleteButtonPos = {100, 675};
    deleteButton.setPosition(deleteButtonPos, 4, 4);
    deleteButton.setFont(buttonFont);

    Button updateButton("Update", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f updateButtonPos = {100, 750};
    updateButton.setPosition(updateButtonPos, 4, 4);
    updateButton.setFont(buttonFont);

    Button searchButton("Search", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f searchButtonPos = {100, 825};
    searchButton.setPosition(searchButtonPos, 4, 4);
    searchButton.setFont(buttonFont);

    Button backButton("Back", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f backButtonPos = {100, 900};
    backButton.setPosition(backButtonPos, 3.25, 4);
    backButton.setFont(buttonFont);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();
                break;
            }
            case sf::Event::MouseMoved:
            {
                if (initButton.isMouseOver(window))
                    initButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    initButton.setFillColor(sf::Color::Green);

                if (addButton.isMouseOver(window))
                    addButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    addButton.setFillColor(sf::Color::Green);

                if (deleteButton.isMouseOver(window))
                    deleteButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    deleteButton.setFillColor(sf::Color::Green);

                if (updateButton.isMouseOver(window))
                    updateButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    updateButton.setFillColor(sf::Color::Green);

                if (searchButton.isMouseOver(window))
                    searchButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    searchButton.setFillColor(sf::Color::Green);

                if (backButton.isMouseOver(window))
                    backButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    backButton.setFillColor(sf::Color::Green);
                break;
            }
            case sf::Event::MouseButtonPressed:
            {
                if (initButton.isMouseOver(window))
                {
                    runCLLInitMenu(window, a);
                }

                if (addButton.isMouseOver(window))
                {
                    runCLLAddMenu(window, a);
                }

                if (deleteButton.isMouseOver(window))
                {
                    runCLLDeleteMenu(window, a);
                }

                if (updateButton.isMouseOver(window))
                {
                    runCLLUpdateMenu(window, a);
                }

                if (searchButton.isMouseOver(window))
                {
                    runCLLSearchMenu(window, a);
                }

                if (backButton.isMouseOver(window))
                {
                    return 0;
                }

                break;
            }
            }
        }
        window.clear(sf::Color::White);
        initButton.draw(window);
        addButton.draw(window);
        deleteButton.draw(window);
        updateButton.draw(window);
        searchButton.draw(window);
        backButton.draw(window);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        window.display();
    }
    return -1;
}

int cllInitMenu(sf::RenderWindow &window, CLL &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    sf::Font textBoxFont, buttonFont;
    textBoxFont.loadFromFile(ROBOTO);
    buttonFont.loadFromFile(ROBOTO_BOLD);

    Header header(wx, wy, "Circular Linked List", 3.825, 20);
    Author author(wx, wy);

    Button randomButton("Random", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f randomButtonPos = {100, 525};
    randomButton.setPosition(randomButtonPos, 5, 4);
    randomButton.setFont(buttonFont);

    Button userDefineButton("User Define", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f userDefineButtonPos = {100, 600};
    userDefineButton.setPosition(userDefineButtonPos, 11.5, 4);
    userDefineButton.setFont(buttonFont);

    Button backButton("Back", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f backButtonPos = {100, 675};
    backButton.setPosition(backButtonPos, 3.25, 4);
    backButton.setFont(buttonFont);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::MouseMoved:
            {
                if (randomButton.isMouseOver(window))
                    randomButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    randomButton.setFillColor(sf::Color::Green);

                if (userDefineButton.isMouseOver(window))
                    userDefineButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    userDefineButton.setFillColor(sf::Color::Green);

                if (backButton.isMouseOver(window))
                    backButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    backButton.setFillColor(sf::Color::Green);

                break;
            }
            case sf::Event::MouseButtonPressed:
            {
                if (randomButton.isMouseOver(window))
                {
                    a.randomInit();
                }

                if (userDefineButton.isMouseOver(window))
                {
                    runCLLInitUserDefineMenu(window, a);
                }

                if (backButton.isMouseOver(window))
                {
                    return 0;
                }

                break;
            }
            }
        }
        window.clear(sf::Color::White);
        randomButton.draw(window);
        userDefineButton.draw(window);
        backButton.draw(window);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        window.display();
    }
    return -1;
}

int stackMenu(sf::RenderWindow &window, Stack &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    sf::Font textBoxFont, buttonFont;
    textBoxFont.loadFromFile(ROBOTO);
    buttonFont.loadFromFile(ROBOTO_BOLD);

    Header header(wx, wy, "Stack", 2.35, 20);
    Author author(wx, wy);

    Button initButton("Initialize", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f initButtonPos = {100, 600};
    initButton.setPosition(initButtonPos, 5.25, 4);
    initButton.setFont(buttonFont);

    Button pushButton("Push", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f pushButtonPos = {100, 675};
    pushButton.setPosition(pushButtonPos, 3.2, 4);
    pushButton.setFont(buttonFont);

    Button popButton("Pop", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f popButtonPos = {100, 750};
    popButton.setPosition(popButtonPos, 2.85, 4);
    popButton.setFont(buttonFont);

    Button backButton("Back", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f backButtonPos = {100, 825};
    backButton.setPosition(backButtonPos, 3.25, 4);
    backButton.setFont(buttonFont);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();
                break;
            }
            case sf::Event::MouseMoved:
            {
                if (initButton.isMouseOver(window))
                    initButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    initButton.setFillColor(sf::Color::Green);

                if (pushButton.isMouseOver(window))
                    pushButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    pushButton.setFillColor(sf::Color::Green);

                if (popButton.isMouseOver(window))
                    popButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    popButton.setFillColor(sf::Color::Green);

                if (backButton.isMouseOver(window))
                    backButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    backButton.setFillColor(sf::Color::Green);
                break;
            }
            case sf::Event::MouseButtonPressed:
            {
                if (initButton.isMouseOver(window))
                {
                    runStackInitMenu(window, a);
                }

                if (pushButton.isMouseOver(window))
                {
                    runStackPushMenu(window, a);
                }

                if (popButton.isMouseOver(window))
                {
                    a.pop(window);
                }

                if (backButton.isMouseOver(window))
                {
                    return 0;
                }

                break;
            }
            }
        }
        window.clear(sf::Color::White);
        initButton.draw(window);
        pushButton.draw(window);
        popButton.draw(window);
        backButton.draw(window);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        window.display();
    }
    return -1;
}

int stackInitMenu(sf::RenderWindow &window, Stack &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    sf::Font textBoxFont, buttonFont;
    textBoxFont.loadFromFile(ROBOTO);
    buttonFont.loadFromFile(ROBOTO_BOLD);

    Header header(wx, wy, "Stack", 2.35, 20);
    Author author(wx, wy);

    Button randomButton("Random", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f randomButtonPos = {100, 525};
    randomButton.setPosition(randomButtonPos, 5, 4);
    randomButton.setFont(buttonFont);

    Button userDefineButton("User Define", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f userDefineButtonPos = {100, 600};
    userDefineButton.setPosition(userDefineButtonPos, 11.5, 4);
    userDefineButton.setFont(buttonFont);

    Button backButton("Back", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f backButtonPos = {100, 675};
    backButton.setPosition(backButtonPos, 3.25, 4);
    backButton.setFont(buttonFont);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::MouseMoved:
            {
                if (randomButton.isMouseOver(window))
                    randomButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    randomButton.setFillColor(sf::Color::Green);

                if (userDefineButton.isMouseOver(window))
                    userDefineButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    userDefineButton.setFillColor(sf::Color::Green);

                if (backButton.isMouseOver(window))
                    backButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    backButton.setFillColor(sf::Color::Green);

                break;
            }
            case sf::Event::MouseButtonPressed:
            {
                if (randomButton.isMouseOver(window))
                {
                    a.randomInit();
                }

                if (userDefineButton.isMouseOver(window))
                {
                    runStackInitUserDefineMenu(window, a);
                }

                if (backButton.isMouseOver(window))
                {
                    return 0;
                }

                break;
            }
            }
        }
        window.clear(sf::Color::White);
        randomButton.draw(window);
        userDefineButton.draw(window);
        backButton.draw(window);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        window.display();
    }
    return -1;
}

int queueMenu(sf::RenderWindow &window, Queue &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    sf::Font textBoxFont, buttonFont;
    textBoxFont.loadFromFile(ROBOTO);
    buttonFont.loadFromFile(ROBOTO_BOLD);

    Header header(wx, wy, "Queue", 2.35, 20);
    Author author(wx, wy);

    Button initButton("Initialize", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f initButtonPos = {100, 600};
    initButton.setPosition(initButtonPos, 5.25, 4);
    initButton.setFont(buttonFont);

    Button enqueueButton("Enqueue", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f enqueueButtonPos = {100, 675};
    enqueueButton.setPosition(enqueueButtonPos, 5, 4);
    enqueueButton.setFont(buttonFont);

    Button dequeueButton("Dequeue", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f dequeueButtonPos = {100, 750};
    dequeueButton.setPosition(dequeueButtonPos, 5, 4);
    dequeueButton.setFont(buttonFont);

    Button backButton("Back", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f backButtonPos = {100, 825};
    backButton.setPosition(backButtonPos, 3.25, 4);
    backButton.setFont(buttonFont);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();
                break;
            }
            case sf::Event::MouseMoved:
            {
                if (initButton.isMouseOver(window))
                    initButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    initButton.setFillColor(sf::Color::Green);

                if (enqueueButton.isMouseOver(window))
                    enqueueButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    enqueueButton.setFillColor(sf::Color::Green);

                if (dequeueButton.isMouseOver(window))
                    dequeueButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    dequeueButton.setFillColor(sf::Color::Green);

                if (backButton.isMouseOver(window))
                    backButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    backButton.setFillColor(sf::Color::Green);
                break;
            }
            case sf::Event::MouseButtonPressed:
            {
                if (initButton.isMouseOver(window))
                {
                    runQueueInitMenu(window, a);
                }

                if (enqueueButton.isMouseOver(window))
                {
                    runQueuePushMenu(window, a);
                }

                if (dequeueButton.isMouseOver(window))
                {
                    a.pop(window);
                }

                if (backButton.isMouseOver(window))
                {
                    return 0;
                }

                break;
            }
            }
        }
        window.clear(sf::Color::White);
        initButton.draw(window);
        enqueueButton.draw(window);
        dequeueButton.draw(window);
        backButton.draw(window);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        window.display();
    }
    return -1;
}

int queueInitMenu(sf::RenderWindow &window, Queue &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    sf::Font textBoxFont, buttonFont;
    textBoxFont.loadFromFile(ROBOTO);
    buttonFont.loadFromFile(ROBOTO_BOLD);

    Header header(wx, wy, "Queue", 2.35, 20);
    Author author(wx, wy);

    Button randomButton("Random", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f randomButtonPos = {100, 525};
    randomButton.setPosition(randomButtonPos, 5, 4);
    randomButton.setFont(buttonFont);

    Button userDefineButton("User Define", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f userDefineButtonPos = {100, 600};
    userDefineButton.setPosition(userDefineButtonPos, 11.5, 4);
    userDefineButton.setFont(buttonFont);

    Button backButton("Back", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f backButtonPos = {100, 675};
    backButton.setPosition(backButtonPos, 3.25, 4);
    backButton.setFont(buttonFont);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::MouseMoved:
            {
                if (randomButton.isMouseOver(window))
                    randomButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    randomButton.setFillColor(sf::Color::Green);

                if (userDefineButton.isMouseOver(window))
                    userDefineButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    userDefineButton.setFillColor(sf::Color::Green);

                if (backButton.isMouseOver(window))
                    backButton.setFillColor(sf::Color(163, 239, 247, 255));
                else
                    backButton.setFillColor(sf::Color::Green);

                break;
            }
            case sf::Event::MouseButtonPressed:
            {
                if (randomButton.isMouseOver(window))
                {
                    a.randomInit();
                }

                if (userDefineButton.isMouseOver(window))
                {
                    runQueueInitUserDefineMenu(window, a);
                }

                if (backButton.isMouseOver(window))
                {
                    return 0;
                }

                break;
            }
            }
        }
        window.clear(sf::Color::White);
        randomButton.draw(window);
        userDefineButton.draw(window);
        backButton.draw(window);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        window.display();
    }
    return -1;
}

void runMainMenu(sf::RenderWindow &window)
{
    int k = mainMenu(window);
    switch (k)
    {
    case 0:
    {
        runStartMenu(window);
        break;
    }
    default:
        return;
    }
}

void runStartMenu(sf::RenderWindow &window)
{
    int k = startMenu(window);
    switch (k)
    {
    case 0:
    {
        runArrayMenu(window);
        break;
    }
    case 1:
    {
        runLLMenu(window);
        break;
    }
    default:
        runMainMenu(window);
    }
}

void runArrayMenu(sf::RenderWindow &window)
{
    int k = arrayMenu(window);
    switch (k)
    {
    case 0:
    {
        StaticArray a(0);
        runStaticArrayMenu(window, a);
        break;
    }
    case 1:
    {
        DynamicArray a(0);
        runDynamicArrayMenu(window, a);
        break;
    }
    default:
        runStartMenu(window);
    }
}

void runLLMenu(sf::RenderWindow &window)
{
    int k = llMenu(window);
    switch (k)
    {
    case 0:
    {
        SLL a(0);
        runSLLMenu(window, a);
        break;
    }
    case 1:
    {
        DLL a(0);
        runDLLMenu(window, a);
        break;
    }
    case 2:
    {
        CLL a(0);
        runCLLMenu(window, a);
        break;
    }
    case 3:
    {
        Stack a(0);
        runStackMenu(window, a);
        break;
    }
    case 4:
    {
        Queue a(0);
        runQueueMenu(window, a);
        break;
    }
    default:
        runStartMenu(window);
    }
}

void runStaticArrayMenu(sf::RenderWindow &window, StaticArray &a)
{
    int k = staticArrayMenu(window, a);
    runArrayMenu(window);
}

void runStaticArrayInitMenu(sf::RenderWindow &window, StaticArray &a)
{
    int k = staticArrayInitMenu(window, a);
    runStaticArrayMenu(window, a);
}

void runStaticArrayInitUserDefineMenu(sf::RenderWindow &window, StaticArray &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Static Array", 2.85, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    message.setString("Input array size (integer number from 0 to 10): ");
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {615, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int n = 0, i = 0;
    int b[10];

    while (window.isOpen())
    {
        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            if (n == 0)
            {
                n = toNumber(initTextBox.getText());
                if (n == 0 || n > 10)
                {
                    if (n == 0)
                        a.userDefineInit(n, b);
                    return;
                }
            }
            else
            {
                b[i++] = toNumber((initTextBox.getText() == "" ? "0" : initTextBox.getText()));
                if (i >= n)
                {
                    a.userDefineInit(n, b);
                    return;
                }
            }
            std::string tmp = "Input MyArray[";
            tmp += toString(i);
            tmp += "]:";
            message.setString(tmp);

            initTextBox.clear();
            initTextBoxPos = {295, 475};
            initTextBox.setPosition(initTextBoxPos);

            Sleep(150);
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        initTextBox.draw(window);
        window.display();
    }
}

void runStaticArrayAddMenu(sf::RenderWindow &window, StaticArray &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Static Array", 2.85, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    std::string messageText = "Input position (integer number from 0 to ";
    messageText += toString(a.getSize());
    messageText += "):";
    message.setString(messageText);
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {580, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int pos = 10, x;

    while (window.isOpen())
    {
        if (a.getSize() == 10)
        {
            message.setString("MyArray has reached limit");
        }
        else if (a.getSize() == 0)
        {
            message.setString("MyArray is empty");
        }

        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            if (pos == 10)
            {
                pos = toNumber(initTextBox.getText());
                if (pos > a.getSize())
                    return;
            }
            else
            {
                x = toNumber(initTextBox.getText());
                a.addValueAtPosition(pos, x, window);

                return;
            }
            std::string tmp = "Input value:";
            message.setString(tmp);

            initTextBox.clear();
            initTextBoxPos = {230, 475};
            initTextBox.setPosition(initTextBoxPos);

            Sleep(150);
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        if (a.getSize() < 10 && 0 < a.getSize())
            initTextBox.draw(window);
        window.display();

        if (a.getSize() == 10 || a.getSize() == 0)
        {
            Sleep(2000);
            return;
        }
    }
}

void runStaticArrayDeleteMenu(sf::RenderWindow &window, StaticArray &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Static Array", 2.85, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    std::string messageText = "Input position (integer number from 0 to ";
    messageText += toString(a.getSize() - 1);
    messageText += "):";
    message.setString(messageText);
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {580, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int pos = 10, x;

    while (window.isOpen())
    {
        if (a.getSize() == 0)
        {
            message.setString("MyArray is empty");
        }

        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            if (pos == 10)
            {
                pos = toNumber(initTextBox.getText());
                if (pos >= a.getSize())
                    return;
            }
            else
            {
                a.deleteValueAtPosition(pos, window);

                return;
            }
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        if (0 < a.getSize())
            initTextBox.draw(window);
        window.display();

        if (a.getSize() == 0)
        {
            Sleep(2000);
            return;
        }
    }
}

void runStaticArrayUpdateMenu(sf::RenderWindow &window, StaticArray &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Static Array", 2.85, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    std::string messageText = "Input position (integer number from 0 to ";
    messageText += toString(a.getSize() - 1);
    messageText += "):";
    message.setString(messageText);
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {580, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int pos = 10, x;

    while (window.isOpen())
    {
        if (a.getSize() == 0)
        {
            message.setString("MyArray is empty");
        }

        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            if (pos == 10)
            {
                pos = toNumber(initTextBox.getText());
                if (pos >= a.getSize())
                    return;
            }
            else
            {
                x = toNumber(initTextBox.getText());
                a.updateValueAtPosition(pos, x, window);

                return;
            }
            std::string tmp = "Input value:";
            message.setString(tmp);

            initTextBox.clear();
            initTextBoxPos = {230, 475};
            initTextBox.setPosition(initTextBoxPos);

            Sleep(150);
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        if (0 < a.getSize())
            initTextBox.draw(window);
        window.display();

        if (a.getSize() == 0)
        {
            Sleep(2000);
            return;
        }
    }
}

void runStaticArraySearchMenu(sf::RenderWindow &window, StaticArray &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Static Array", 2.85, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    std::string messageText = "Input value:";
    message.setString(messageText);
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {230, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int x;

    while (window.isOpen())
    {
        if (a.getSize() == 0)
        {
            message.setString("MyArray is empty");
        }

        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            x = toNumber(initTextBox.getText());
            a.searchValue(x, window);

            return;
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        if (0 < a.getSize())
            initTextBox.draw(window);
        window.display();

        if (a.getSize() == 0)
        {
            Sleep(2000);
            return;
        }
    }
}

void runDynamicArrayMenu(sf::RenderWindow &window, DynamicArray &a)
{
    int k = dynamicArrayMenu(window, a);
    runArrayMenu(window);
}

void runDynamicArrayInitMenu(sf::RenderWindow &window, DynamicArray &a)
{
    int k = dynamicArrayInitMenu(window, a);
    runDynamicArrayMenu(window, a);
}

void runDynamicArrayInitUserDefineMenu(sf::RenderWindow &window, DynamicArray &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Dynamic Array", 3.25, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    message.setString("Input array size (integer number from 0 to 10): ");
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {615, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int n = 0, i = 0;
    int *b = nullptr;

    while (window.isOpen())
    {
        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            if (n == 0)
            {
                n = toNumber(initTextBox.getText());
                if (n == 0 || n > 10)
                {
                    if (n == 0)
                        a.userDefineInit(n, b);
                    return;
                }
                b = new int[n];
            }
            else
            {
                b[i++] = toNumber((initTextBox.getText() == "" ? "0" : initTextBox.getText()));
                if (i >= n)
                {
                    a.userDefineInit(n, b);
                    delete[] b;

                    return;
                }
            }
            std::string tmp = "Input MyArray[";
            tmp += toString(i);
            tmp += "]:";
            message.setString(tmp);

            initTextBox.clear();
            initTextBoxPos = {295, 475};
            initTextBox.setPosition(initTextBoxPos);

            Sleep(150);
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        initTextBox.draw(window);
        window.display();
    }
}

void runDynamicArrayAddMenu(sf::RenderWindow &window, DynamicArray &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Dynamic Array", 3.25, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    std::string messageText = "Input position (integer number from 0 to ";
    messageText += toString(a.getSize());
    messageText += "):";
    message.setString(messageText);
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {580, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    sf::Text newArrName;
    newArrName.setString("NewArray");
    newArrName.setFont(messageFont);
    newArrName.setCharacterSize(30);
    newArrName.setFillColor(sf::Color::Black);
    newArrName.setPosition({150, 585});

    int pos = 10, x;

    while (window.isOpen())
    {
        if (a.getSize() == 10)
        {
            message.setString("MyArray has reached limit");
        }
        else if (a.getSize() == 0)
        {
            message.setString("MyArray is empty");
        }

        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            if (pos == 10)
            {
                pos = toNumber(initTextBox.getText());
                if (pos > a.getSize())
                    return;
            }
            else
            {
                x = toNumber(initTextBox.getText());
                a.addValueAtPosition(pos, x, window);

                return;
            }
            std::string tmp = "Input value:";
            message.setString(tmp);

            initTextBox.clear();
            initTextBoxPos = {230, 475};
            initTextBox.setPosition(initTextBoxPos);

            Sleep(150);
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        if (a.getSize() < 10 && 0 < a.getSize())
            initTextBox.draw(window);
        if (pos != 10)
            window.draw(newArrName);
        window.display();

        if (a.getSize() == 10 || a.getSize() == 0)
        {
            Sleep(2000);
            return;
        }
    }
}

void runDynamicArrayDeleteMenu(sf::RenderWindow &window, DynamicArray &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Dynamic Array", 3.25, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    std::string messageText = "Input position (integer number from 0 to ";
    messageText += toString(a.getSize() - 1);
    messageText += "):";
    message.setString(messageText);
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {580, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    sf::Text newArrName;
    newArrName.setString("NewArray");
    newArrName.setFont(messageFont);
    newArrName.setCharacterSize(30);
    newArrName.setFillColor(sf::Color::Black);
    newArrName.setPosition({150, 585});

    int pos = 10, x;

    while (window.isOpen())
    {
        if (a.getSize() == 0)
        {
            message.setString("MyArray is empty");
        }

        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            if (pos == 10)
            {
                pos = toNumber(initTextBox.getText());
                if (pos >= a.getSize())
                    return;
            }
            else
            {
                a.deleteValueAtPosition(pos, window);

                return;
            }
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        if (0 < a.getSize())
        {
            initTextBox.draw(window);
            window.draw(newArrName);
        }
        window.display();

        if (a.getSize() == 0)
        {
            Sleep(2000);
            return;
        }
    }
}

void runDynamicArrayUpdateMenu(sf::RenderWindow &window, DynamicArray &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Dynamic Array", 3.25, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    std::string messageText = "Input position (integer number from 0 to ";
    messageText += toString(a.getSize() - 1);
    messageText += "):";
    message.setString(messageText);
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {580, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int pos = 10, x;

    while (window.isOpen())
    {
        if (a.getSize() == 0)
        {
            message.setString("MyArray is empty");
        }

        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            if (pos == 10)
            {
                pos = toNumber(initTextBox.getText());
                if (pos >= a.getSize())
                    return;
            }
            else
            {
                x = toNumber(initTextBox.getText());
                a.updateValueAtPosition(pos, x, window);

                return;
            }
            std::string tmp = "Input value:";
            message.setString(tmp);

            initTextBox.clear();
            initTextBoxPos = {230, 475};
            initTextBox.setPosition(initTextBoxPos);

            Sleep(150);
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        if (0 < a.getSize())
            initTextBox.draw(window);
        window.display();

        if (a.getSize() == 0)
        {
            Sleep(2000);
            return;
        }
    }
}

void runDynamicArraySearchMenu(sf::RenderWindow &window, DynamicArray &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Dynamic Array", 3.25, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    std::string messageText = "Input value:";
    message.setString(messageText);
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {230, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int x;

    while (window.isOpen())
    {
        if (a.getSize() == 0)
        {
            message.setString("MyArray is empty");
        }

        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            x = toNumber(initTextBox.getText());
            a.searchValue(x, window);

            return;
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        if (0 < a.getSize())
            initTextBox.draw(window);
        window.display();

        if (a.getSize() == 0)
        {
            Sleep(2000);
            return;
        }
    }
}

void runSLLMenu(sf::RenderWindow &window, SLL &a)
{
    int k = sllMenu(window, a);
    runLLMenu(window);
}

void runSLLInitMenu(sf::RenderWindow &window, SLL &a)
{
    int k = sllInitMenu(window, a);
    runSLLMenu(window, a);
}

void runSLLInitUserDefineMenu(sf::RenderWindow &window, SLL &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Singly Linked List", 3.56, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    message.setString("Input SLL size (integer number from 0 to 10): ");
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {600, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int n = 0, i = 0;
    int *b = nullptr;

    while (window.isOpen())
    {
        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            if (n == 0)
            {
                n = toNumber(initTextBox.getText());
                if (n == 0 || n > 10)
                {
                    if (n == 0)
                        a.userDefineInit(n, b);
                    return;
                }
                b = new int[n];
            }
            else
            {
                b[i++] = toNumber((initTextBox.getText() == "" ? "0" : initTextBox.getText()));
                if (i >= n)
                {
                    a.userDefineInit(n, b);
                    delete[] b;

                    return;
                }
            }
            std::string tmp = "Input MyLinkedList[";
            tmp += toString(i);
            tmp += "]:";
            message.setString(tmp);

            initTextBox.clear();
            initTextBoxPos = {355, 475};
            initTextBox.setPosition(initTextBoxPos);

            Sleep(150);
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        initTextBox.draw(window);
        window.display();
    }
}

void runSLLAddMenu(sf::RenderWindow &window, SLL &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Singly Linked List", 3.56, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    std::string messageText = "Input position (integer number from 0 to ";
    messageText += toString(a.getSize());
    messageText += "):";
    message.setString(messageText);
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {580, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int pos = 10, x;

    while (window.isOpen())
    {
        if (a.getSize() == 10)
        {
            message.setString("MyLinkedList has reached limit");
        }

        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            if (pos == 10)
            {
                pos = toNumber(initTextBox.getText());
                if (pos > a.getSize())
                    return;
            }
            else
            {
                x = toNumber(initTextBox.getText());
                a.addValueAtPosition(pos, x, window);

                return;
            }
            std::string tmp = "Input value:";
            message.setString(tmp);

            initTextBox.clear();
            initTextBoxPos = {230, 475};
            initTextBox.setPosition(initTextBoxPos);

            Sleep(150);
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        if (a.getSize() < 10)
            initTextBox.draw(window);
        window.display();

        if (a.getSize() == 10)
        {
            Sleep(2000);
            return;
        }
    }
}

void runSLLDeleteMenu(sf::RenderWindow &window, SLL &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Singly Linked List", 3.56, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    std::string messageText = "Input position (integer number from 0 to ";
    messageText += toString(a.getSize() - 1);
    messageText += "):";
    message.setString(messageText);
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {580, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int pos = 10, x;

    while (window.isOpen())
    {
        if (a.getSize() == 0)
        {
            message.setString("MyLinkedList is empty");
        }

        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            if (pos == 10)
            {
                pos = toNumber(initTextBox.getText());
                if (pos >= a.getSize())
                    return;
            }
            else
            {
                a.deleteValueAtPosition(pos, window);

                return;
            }
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        if (0 < a.getSize())
        {
            initTextBox.draw(window);
        }
        window.display();

        if (a.getSize() == 0)
        {
            Sleep(2000);
            return;
        }
    }
}

void runSLLUpdateMenu(sf::RenderWindow &window, SLL &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Singly Linked List", 3.56, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    std::string messageText = "Input position (integer number from 0 to ";
    messageText += toString(a.getSize() - 1);
    messageText += "):";
    message.setString(messageText);
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {580, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int pos = 10, x;

    while (window.isOpen())
    {
        if (a.getSize() == 0)
        {
            message.setString("MyLinkedList is empty");
        }

        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            if (pos == 10)
            {
                pos = toNumber(initTextBox.getText());
                if (pos >= a.getSize())
                    return;
            }
            else
            {
                x = toNumber(initTextBox.getText());
                a.updateValueAtPosition(pos, x, window);

                return;
            }
            std::string tmp = "Input value:";
            message.setString(tmp);

            initTextBox.clear();
            initTextBoxPos = {230, 475};
            initTextBox.setPosition(initTextBoxPos);

            Sleep(150);
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        if (0 < a.getSize())
            initTextBox.draw(window);
        window.display();

        if (a.getSize() == 0)
        {
            Sleep(2000);
            return;
        }
    }
}

void runSLLSearchMenu(sf::RenderWindow &window, SLL &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Singly Linked List", 3.56, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    std::string messageText = "Input value:";
    message.setString(messageText);
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {230, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int x;

    while (window.isOpen())
    {
        if (a.getSize() == 0)
        {
            message.setString("MyLinkedList is empty");
        }

        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            x = toNumber(initTextBox.getText());
            a.searchValue(x, window);

            return;
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        if (0 < a.getSize())
            initTextBox.draw(window);
        window.display();

        if (a.getSize() == 0)
        {
            Sleep(2000);
            return;
        }
    }
}

void runDLLMenu(sf::RenderWindow &window, DLL &a)
{
    int k = dllMenu(window, a);
    runLLMenu(window);
}

void runDLLInitMenu(sf::RenderWindow &window, DLL &a)
{
    int k = dllInitMenu(window, a);
    runDLLMenu(window, a);
}

void runDLLInitUserDefineMenu(sf::RenderWindow &window, DLL &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Doubly Linked List", 3.625, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    message.setString("Input SLL size (integer number from 0 to 10): ");
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {600, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int n = 0, i = 0;
    int *b = nullptr;

    while (window.isOpen())
    {
        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            if (n == 0)
            {
                n = toNumber(initTextBox.getText());
                if (n == 0 || n > 10)
                {
                    if (n == 0)
                        a.userDefineInit(n, b);
                    return;
                }
                b = new int[n];
            }
            else
            {
                b[i++] = toNumber((initTextBox.getText() == "" ? "0" : initTextBox.getText()));
                if (i >= n)
                {
                    a.userDefineInit(n, b);
                    delete[] b;

                    return;
                }
            }
            std::string tmp = "Input MyLinkedList[";
            tmp += toString(i);
            tmp += "]:";
            message.setString(tmp);

            initTextBox.clear();
            initTextBoxPos = {355, 475};
            initTextBox.setPosition(initTextBoxPos);

            Sleep(150);
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        initTextBox.draw(window);
        window.display();
    }
}

void runDLLAddMenu(sf::RenderWindow &window, DLL &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Doubly Linked List", 3.625, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    std::string messageText = "Input position (integer number from 0 to ";
    messageText += toString(a.getSize());
    messageText += "):";
    message.setString(messageText);
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {580, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int pos = 10, x;

    while (window.isOpen())
    {
        if (a.getSize() == 10)
        {
            message.setString("MyLinkedList has reached limit");
        }

        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            if (pos == 10)
            {
                pos = toNumber(initTextBox.getText());
                if (pos > a.getSize())
                    return;
            }
            else
            {
                x = toNumber(initTextBox.getText());
                a.addValueAtPosition(pos, x, window);

                return;
            }
            std::string tmp = "Input value:";
            message.setString(tmp);

            initTextBox.clear();
            initTextBoxPos = {230, 475};
            initTextBox.setPosition(initTextBoxPos);

            Sleep(150);
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        if (a.getSize() < 10)
            initTextBox.draw(window);
        window.display();

        if (a.getSize() == 10)
        {
            Sleep(2000);
            return;
        }
    }
}

void runDLLDeleteMenu(sf::RenderWindow &window, DLL &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Doubly Linked List", 3.625, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    std::string messageText = "Input position (integer number from 0 to ";
    messageText += toString(a.getSize() - 1);
    messageText += "):";
    message.setString(messageText);
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {580, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int pos = 10, x;

    while (window.isOpen())
    {
        if (a.getSize() == 0)
        {
            message.setString("MyLinkedList is empty");
        }

        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            if (pos == 10)
            {
                pos = toNumber(initTextBox.getText());
                if (pos >= a.getSize())
                    return;
            }
            else
            {
                a.deleteValueAtPosition(pos, window);

                return;
            }
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        if (0 < a.getSize())
        {
            initTextBox.draw(window);
        }
        window.display();

        if (a.getSize() == 0)
        {
            Sleep(2000);
            return;
        }
    }
}

void runDLLUpdateMenu(sf::RenderWindow &window, DLL &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Doubly Linked List", 3.625, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    std::string messageText = "Input position (integer number from 0 to ";
    messageText += toString(a.getSize() - 1);
    messageText += "):";
    message.setString(messageText);
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {580, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int pos = 10, x;

    while (window.isOpen())
    {
        if (a.getSize() == 0)
        {
            message.setString("MyLinkedList is empty");
        }

        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            if (pos == 10)
            {
                pos = toNumber(initTextBox.getText());
                if (pos >= a.getSize())
                    return;
            }
            else
            {
                x = toNumber(initTextBox.getText());
                a.updateValueAtPosition(pos, x, window);

                return;
            }
            std::string tmp = "Input value:";
            message.setString(tmp);

            initTextBox.clear();
            initTextBoxPos = {230, 475};
            initTextBox.setPosition(initTextBoxPos);

            Sleep(150);
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        if (0 < a.getSize())
            initTextBox.draw(window);
        window.display();

        if (a.getSize() == 0)
        {
            Sleep(2000);
            return;
        }
    }
}

void runDLLSearchMenu(sf::RenderWindow &window, DLL &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Doubly Linked List", 3.625, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    std::string messageText = "Input value:";
    message.setString(messageText);
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {230, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int x;

    while (window.isOpen())
    {
        if (a.getSize() == 0)
        {
            message.setString("MyLinkedList is empty");
        }

        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            x = toNumber(initTextBox.getText());
            a.searchValue(x, window);

            return;
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        if (0 < a.getSize())
            initTextBox.draw(window);
        window.display();

        if (a.getSize() == 0)
        {
            Sleep(2000);
            return;
        }
    }
}

void runCLLMenu(sf::RenderWindow &window, CLL &a)
{
    int k = cllMenu(window, a);
    runLLMenu(window);
}

void runCLLInitMenu(sf::RenderWindow &window, CLL &a)
{
    int k = cllInitMenu(window, a);
    runCLLMenu(window, a);
}

void runCLLInitUserDefineMenu(sf::RenderWindow &window, CLL &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Circular Linked List", 3.825, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    message.setString("Input SLL size (integer number from 0 to 9): ");
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {590, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int n = 0, i = 0;
    int *b = nullptr;

    while (window.isOpen())
    {
        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            if (n == 0)
            {
                n = toNumber(initTextBox.getText());
                if (n == 0 || n > 9)
                {
                    if (n == 0)
                        a.userDefineInit(n, b);
                    return;
                }
                b = new int[n];
            }
            else
            {
                b[i++] = toNumber((initTextBox.getText() == "" ? "0" : initTextBox.getText()));
                if (i >= n)
                {
                    a.userDefineInit(n, b);
                    delete[] b;

                    return;
                }
            }
            std::string tmp = "Input MyLinkedList[";
            tmp += toString(i);
            tmp += "]:";
            message.setString(tmp);

            initTextBox.clear();
            initTextBoxPos = {355, 475};
            initTextBox.setPosition(initTextBoxPos);

            Sleep(150);
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        initTextBox.draw(window);
        window.display();
    }
}

void runCLLAddMenu(sf::RenderWindow &window, CLL &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Circular Linked List", 3.825, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    std::string messageText = "Input position (integer number from 0 to ";
    messageText += toString(a.getSize());
    messageText += "):";
    message.setString(messageText);
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {580, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int pos = 10, x;

    while (window.isOpen())
    {
        if (a.getSize() == 9)
        {
            message.setString("MyLinkedList has reached limit");
        }

        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            if (pos == 10)
            {
                pos = toNumber(initTextBox.getText());
                if (pos > a.getSize())
                    return;
            }
            else
            {
                x = toNumber(initTextBox.getText());
                a.addValueAtPosition(pos, x, window);

                return;
            }
            std::string tmp = "Input value:";
            message.setString(tmp);

            initTextBox.clear();
            initTextBoxPos = {230, 475};
            initTextBox.setPosition(initTextBoxPos);

            Sleep(150);
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        if (a.getSize() < 9)
            initTextBox.draw(window);
        window.display();

        if (a.getSize() == 9)
        {
            Sleep(2000);
            return;
        }
    }
}

void runCLLDeleteMenu(sf::RenderWindow &window, CLL &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Circular Linked List", 3.825, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    std::string messageText = "Input position (integer number from 0 to ";
    messageText += toString(a.getSize() - 1);
    messageText += "):";
    message.setString(messageText);
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {580, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int pos = 10, x;

    while (window.isOpen())
    {
        if (a.getSize() == 0)
        {
            message.setString("MyLinkedList is empty");
        }

        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            if (pos == 10)
            {
                pos = toNumber(initTextBox.getText());
                if (pos >= a.getSize())
                    return;
            }
            else
            {
                a.deleteValueAtPosition(pos, window);

                return;
            }
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        if (0 < a.getSize())
        {
            initTextBox.draw(window);
        }
        window.display();

        if (a.getSize() == 0)
        {
            Sleep(2000);
            return;
        }
    }
}

void runCLLUpdateMenu(sf::RenderWindow &window, CLL &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Circular Linked List", 3.825, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    std::string messageText = "Input position (integer number from 0 to ";
    messageText += toString(a.getSize() - 1);
    messageText += "):";
    message.setString(messageText);
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {580, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int pos = 10, x;

    while (window.isOpen())
    {
        if (a.getSize() == 0)
        {
            message.setString("MyLinkedList is empty");
        }

        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            if (pos == 10)
            {
                pos = toNumber(initTextBox.getText());
                if (pos >= a.getSize())
                    return;
            }
            else
            {
                x = toNumber(initTextBox.getText());
                a.updateValueAtPosition(pos, x, window);

                return;
            }
            std::string tmp = "Input value:";
            message.setString(tmp);

            initTextBox.clear();
            initTextBoxPos = {230, 475};
            initTextBox.setPosition(initTextBoxPos);

            Sleep(150);
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        if (0 < a.getSize())
            initTextBox.draw(window);
        window.display();

        if (a.getSize() == 0)
        {
            Sleep(2000);
            return;
        }
    }
}

void runCLLSearchMenu(sf::RenderWindow &window, CLL &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Circular Linked List", 3.825, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    std::string messageText = "Input value:";
    message.setString(messageText);
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {230, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int x;

    while (window.isOpen())
    {
        if (a.getSize() == 0)
        {
            message.setString("MyLinkedList is empty");
        }

        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            x = toNumber(initTextBox.getText());
            a.searchValue(x, window);

            return;
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        if (0 < a.getSize())
            initTextBox.draw(window);
        window.display();

        if (a.getSize() == 0)
        {
            Sleep(2000);
            return;
        }
    }
}

void runStackMenu(sf::RenderWindow &window, Stack &a)
{
    int k = stackMenu(window, a);
    runLLMenu(window);
}

void runStackInitMenu(sf::RenderWindow &window, Stack &a)
{
    int k = stackInitMenu(window, a);
    runStackMenu(window, a);
}

void runStackInitUserDefineMenu(sf::RenderWindow &window, Stack &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Stack", 2.35, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    message.setString("Input SLL size (integer number from 0 to 10): ");
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {600, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int n = 0, i = 0;
    int *b = nullptr;

    while (window.isOpen())
    {
        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            if (n == 0)
            {
                n = toNumber(initTextBox.getText());
                if (n == 0 || n > 10)
                {
                    if (n == 0)
                        a.userDefineInit(n, b);
                    return;
                }
                b = new int[n];
            }
            else
            {
                b[i++] = toNumber((initTextBox.getText() == "" ? "0" : initTextBox.getText()));
                if (i >= n)
                {
                    a.userDefineInit(n, b);
                    delete[] b;

                    return;
                }
            }
            std::string tmp = "Input MyStack[";
            tmp += toString(i);
            tmp += "]:";
            message.setString(tmp);

            initTextBox.clear();
            initTextBoxPos = {300, 475};
            initTextBox.setPosition(initTextBoxPos);

            Sleep(150);
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        initTextBox.draw(window);
        window.display();
    }
}

void runStackPushMenu(sf::RenderWindow &window, Stack &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Stack", 2.35, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    std::string messageText = "Input value:";
    message.setString(messageText);
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {230, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int x;

    while (window.isOpen())
    {
        if (a.getSize() == 10)
        {
            message.setString("MyStack has reached limit");
        }

        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            x = toNumber(initTextBox.getText());
            a.push(x, window);

            return;
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        if (a.getSize() < 10)
            initTextBox.draw(window);
        window.display();

        if (a.getSize() == 10)
        {
            Sleep(2000);
            return;
        }
    }
}

void runQueueMenu(sf::RenderWindow &window, Queue &a)
{
    int k = queueMenu(window, a);
    runLLMenu(window);
}

void runQueueInitMenu(sf::RenderWindow &window, Queue &a)
{
    int k = queueInitMenu(window, a);
    runQueueMenu(window, a);
}

void runQueueInitUserDefineMenu(sf::RenderWindow &window, Queue &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Queue", 2.35, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    message.setString("Input SLL size (integer number from 0 to 10): ");
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {600, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int n = 0, i = 0;
    int *b = nullptr;

    while (window.isOpen())
    {
        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            if (n == 0)
            {
                n = toNumber(initTextBox.getText());
                if (n == 0 || n > 10)
                {
                    if (n == 0)
                        a.userDefineInit(n, b);
                    return;
                }
                b = new int[n];
            }
            else
            {
                b[i++] = toNumber((initTextBox.getText() == "" ? "0" : initTextBox.getText()));
                if (i >= n)
                {
                    a.userDefineInit(n, b);
                    delete[] b;

                    return;
                }
            }
            std::string tmp = "Input MyQueue[";
            tmp += toString(i);
            tmp += "]:";
            message.setString(tmp);

            initTextBox.clear();
            initTextBoxPos = {305, 475};
            initTextBox.setPosition(initTextBoxPos);

            Sleep(150);
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        initTextBox.draw(window);
        window.display();
    }
}

void runQueuePushMenu(sf::RenderWindow &window, Queue &a)
{
    float wx = window.getSize().x, wy = window.getSize().y;

    Header header(wx, wy, "Queue", 2.35, 20);
    Author author(wx, wy);

    sf::Font textBoxFont, messageFont;
    textBoxFont.loadFromFile(ROBOTO);
    messageFont.loadFromFile(ROBOTO_BOLD);

    sf::Text message;
    std::string messageText = "Input value:";
    message.setString(messageText);
    message.setFont(messageFont);
    message.setCharacterSize(24);
    message.setPosition({100, 475});
    message.setFillColor(sf::Color::Black);

    TextBox initTextBox(24, sf::Color::Black, true);
    initTextBox.setFont(textBoxFont);
    sf::Vector2f initTextBoxPos = {230, 475};
    initTextBox.setPosition(initTextBoxPos);
    initTextBox.setLimit(true, 2);

    int x;

    while (window.isOpen())
    {
        if (a.getSize() == 10)
        {
            message.setString("MyQueue has reached limit");
        }

        sf::Event event;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        {
            x = toNumber(initTextBox.getText());
            a.push(x, window);

            return;
        }

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                window.close();

                break;
            }
            case sf::Event::TextEntered:
            {
                initTextBox.typedOn(event);
                break;
            }
            }
        }
        window.clear(sf::Color::White);
        window.draw(message);
        header.draw(window);
        author.draw(window);
        a.draw(window);
        if (a.getSize() < 10)
            initTextBox.draw(window);
        window.display();

        if (a.getSize() == 10)
        {
            Sleep(2000);
            return;
        }
    }
}
