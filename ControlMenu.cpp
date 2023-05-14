#include "ControlMenu.h"
#include "Menu.h"
#include "Author.h"
#include "Header.h"
#include "TextBox.h"
#include "Button.h"
#define ROBOTO "SFML-2.5.1\\examples\\shader\\resources\\Roboto-Regular.ttf"
#define ROBOTO_BOLD "SFML-2.5.1\\examples\\shader\\resources\\Roboto-Bold.ttf"

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
                        case sf::Keyboard::Return: return menu.getPressedItem();
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
                        case sf::Keyboard::Return: return menu.getPressedItem();
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
                        case sf::Keyboard::Return: return menu.getPressedItem();
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
                        case sf::Keyboard::Return: return menu.getPressedItem();
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

int staticArrayMenu(sf::RenderWindow &window)
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

    // Button runTypeButton("Run type", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    // sf::Vector2f runTypeButtonPos = {100, 725};
    // runTypeButton.setPosition(runTypeButtonPos, 5.25, 4);
    // runTypeButton.setFont(buttonFont);

    Button backButton("Back", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    sf::Vector2f backButtonPos = {100, 900};
    backButton.setPosition(backButtonPos, 3.25, 4);
    backButton.setFont(buttonFont);

    // TextBox initTextBox(18, sf::Color::Black, false);
    // initTextBox.setFont(textBoxFont);
    // sf::Vector2f initTextBoxPos = {300, 300};
    // initTextBox.setPosition(initTextBoxPos);
    // initTextBox.setLimit(true, 2);

    while (window.isOpen())
    {
        sf::Event event;

        // if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
        // {
        //     initTextBox.setSelected(true);
        // }
        // else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        // {
        //     initTextBox.setSelected(false);
        // }
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
                case sf::Event::Closed:
                {
                    window.close();
                    break;
                }
                // case sf::Event::TextEntered:
                // {
                //     initTextBox.typedOn(event);
                //     break;
                // }
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
                    
                    // if (runTypeButton.isMouseOver(window))
                    //     runTypeButton.setFillColor(sf::Color(163, 239, 247, 255));
                    // else
                    //     runTypeButton.setFillColor(sf::Color::Green);
                    
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
                        
                    }

                    if (addButton.isMouseOver(window))
                    {
                        
                    }

                    if (deleteButton.isMouseOver(window))
                    {

                    }

                    if (updateButton.isMouseOver(window))
                    {

                    }

                    if (searchButton.isMouseOver(window))
                    {

                    }

                    // if (runTypeButton.isMouseOver(window))
                    // {

                    // }

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
        // runTypeButton.draw(window);
        backButton.draw(window);
        header.draw(window);
        author.draw(window);
        window.display();
    }
    return -1;
}

int dynamicArrayMenu(sf::RenderWindow &window)
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

    // Button runTypeButton("Run type", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    // sf::Vector2f runTypeButtonPos = {100, 725};
    // runTypeButton.setPosition(runTypeButtonPos, 5.25, 4);
    // runTypeButton.setFont(buttonFont);

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
                    
                    // if (runTypeButton.isMouseOver(window))
                    //     runTypeButton.setFillColor(sf::Color(163, 239, 247, 255));
                    // else
                    //     runTypeButton.setFillColor(sf::Color::Green);
                    
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
                        
                    }

                    if (addButton.isMouseOver(window))
                    {
                        
                    }

                    if (deleteButton.isMouseOver(window))
                    {

                    }

                    if (updateButton.isMouseOver(window))
                    {

                    }

                    if (searchButton.isMouseOver(window))
                    {

                    }

                    // if (runTypeButton.isMouseOver(window))
                    // {

                    // }

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
        // runTypeButton.draw(window);
        backButton.draw(window);
        header.draw(window);
        author.draw(window);
        window.display();
    }
    return -1;
}

int sllMenu(sf::RenderWindow &window)
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

    // Button runTypeButton("Run type", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    // sf::Vector2f runTypeButtonPos = {100, 725};
    // runTypeButton.setPosition(runTypeButtonPos, 5.25, 4);
    // runTypeButton.setFont(buttonFont);

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
                    
                    // if (runTypeButton.isMouseOver(window))
                    //     runTypeButton.setFillColor(sf::Color(163, 239, 247, 255));
                    // else
                    //     runTypeButton.setFillColor(sf::Color::Green);
                    
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
                        
                    }

                    if (addButton.isMouseOver(window))
                    {
                        
                    }

                    if (deleteButton.isMouseOver(window))
                    {

                    }

                    if (updateButton.isMouseOver(window))
                    {

                    }

                    if (searchButton.isMouseOver(window))
                    {

                    }

                    // if (runTypeButton.isMouseOver(window))
                    // {

                    // }

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
        // runTypeButton.draw(window);
        backButton.draw(window);
        header.draw(window);
        author.draw(window);
        window.display();
    }
    return -1;
}

int dllMenu(sf::RenderWindow &window)
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

    // Button runTypeButton("Run type", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    // sf::Vector2f runTypeButtonPos = {100, 725};
    // runTypeButton.setPosition(runTypeButtonPos, 5.25, 4);
    // runTypeButton.setFont(buttonFont);

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
                    
                    // if (runTypeButton.isMouseOver(window))
                    //     runTypeButton.setFillColor(sf::Color(163, 239, 247, 255));
                    // else
                    //     runTypeButton.setFillColor(sf::Color::Green);
                    
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
                        
                    }

                    if (addButton.isMouseOver(window))
                    {
                        
                    }

                    if (deleteButton.isMouseOver(window))
                    {

                    }

                    if (updateButton.isMouseOver(window))
                    {

                    }

                    if (searchButton.isMouseOver(window))
                    {

                    }

                    // if (runTypeButton.isMouseOver(window))
                    // {

                    // }

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
        // runTypeButton.draw(window);
        backButton.draw(window);
        header.draw(window);
        author.draw(window);
        window.display();
    }
    return -1;
}

int cllMenu(sf::RenderWindow &window)
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

    // Button runTypeButton("Run type", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    // sf::Vector2f runTypeButtonPos = {100, 725};
    // runTypeButton.setPosition(runTypeButtonPos, 5.25, 4);
    // runTypeButton.setFont(buttonFont);

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
                    
                    // if (runTypeButton.isMouseOver(window))
                    //     runTypeButton.setFillColor(sf::Color(163, 239, 247, 255));
                    // else
                    //     runTypeButton.setFillColor(sf::Color::Green);
                    
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
                        
                    }

                    if (addButton.isMouseOver(window))
                    {
                        
                    }

                    if (deleteButton.isMouseOver(window))
                    {

                    }

                    if (updateButton.isMouseOver(window))
                    {

                    }

                    if (searchButton.isMouseOver(window))
                    {

                    }

                    // if (runTypeButton.isMouseOver(window))
                    // {

                    // }

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
        // runTypeButton.draw(window);
        backButton.draw(window);
        header.draw(window);
        author.draw(window);
        window.display();
    }
    return -1;
}

int stackMenu(sf::RenderWindow &window)
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

    // Button runTypeButton("Run type", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    // sf::Vector2f runTypeButtonPos = {100, 725};
    // runTypeButton.setPosition(runTypeButtonPos, 5.25, 4);
    // runTypeButton.setFont(buttonFont);

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

                    // if (runTypeButton.isMouseOver(window))
                    //     runTypeButton.setFillColor(sf::Color(163, 239, 247, 255));
                    // else
                    //     runTypeButton.setFillColor(sf::Color::Green);
                    
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
                        
                    }

                    if (pushButton.isMouseOver(window))
                    {
                        
                    }

                    if (popButton.isMouseOver(window))
                    {

                    }

                    // if (runTypeButton.isMouseOver(window))
                    // {

                    // }

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
        // runTypeButton.draw(window);
        backButton.draw(window);
        header.draw(window);
        author.draw(window);
        window.display();
    }
    return -1;
}

int queueMenu(sf::RenderWindow &window)
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

    // Button runTypeButton("Run type", 24, {150, 50}, sf::Color::Green, sf::Color::White);
    // sf::Vector2f runTypeButtonPos = {100, 725};
    // runTypeButton.setPosition(runTypeButtonPos, 5.25, 4);
    // runTypeButton.setFont(buttonFont);

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

                    // if (runTypeButton.isMouseOver(window))
                    //     runTypeButton.setFillColor(sf::Color(163, 239, 247, 255));
                    // else
                    //     runTypeButton.setFillColor(sf::Color::Green);
                    
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
                        
                    }

                    if (enqueueButton.isMouseOver(window))
                    {
                        
                    }

                    if (dequeueButton.isMouseOver(window))
                    {

                    }

                    // if (runTypeButton.isMouseOver(window))
                    // {

                    // }

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
        // runTypeButton.draw(window);
        backButton.draw(window);
        header.draw(window);
        author.draw(window);
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
            runStaticArrayMenu(window);
            break;
        }
        case 1:
        {
            runDynamicArrayMenu(window);
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
            runSLLMenu(window);
            break;
        }
        case 1:
        {
            runDLLMenu(window);
            break;
        }
        case 2:
        {
            runCLLMenu(window);
            break;
        }
        case 3:
        {
            runStackMenu(window);
            break;
        }
        case 4:
        {
            runQueueMenu(window);
            break;
        }
        default: 
            runStartMenu(window);
    }
}

void runStaticArrayMenu(sf::RenderWindow &window)
{
    int k = staticArrayMenu(window);
    switch (k)
    {
        case 1:
        case 2:

        default:
            runArrayMenu(window);

    }
}

void runDynamicArrayMenu(sf::RenderWindow &window)
{
    int k = dynamicArrayMenu(window);
    switch (k)
    {
        case 1:
        case 2:

        default:
            runArrayMenu(window);
    }
}

void runSLLMenu(sf::RenderWindow &window)
{
    int k = sllMenu(window);
    switch (k)
    {
        case 1:
        case 2:

        default:
            runLLMenu(window);
    }
}

void runDLLMenu(sf::RenderWindow &window)
{
    int k = dllMenu(window);
    switch (k)
    {
        case 1:
        case 2:

        default:
            runLLMenu(window);
    }
}

void runCLLMenu(sf::RenderWindow &window)
{
    int k = cllMenu(window);
    switch (k)
    {
        case 1:
        case 2:

        default:
            runLLMenu(window);
    }
}

void runStackMenu(sf::RenderWindow &window)
{
    int k = stackMenu(window);
    switch (k)
    {
        case 1:
        case 2:

        default:
            runLLMenu(window);
    }
}

void runQueueMenu(sf::RenderWindow &window)
{
    int k = queueMenu(window);
    switch (k)
    {
        case 1:
        case 2:

        default:
            runLLMenu(window);
    }
}
