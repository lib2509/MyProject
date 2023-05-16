#include "StaticArray.h"
#include <stdlib.h>
#include <time.h>
#include <windows.h>

StaticArray::StaticArray(int n)
{
    arrSize = n;
    createArray();
}

StaticArray::~StaticArray()
{
    
}

int StaticArray::getSize()
{
    return arrSize;
}

void StaticArray::randomInit()
{
    srand(time(NULL));
    arrSize = 1 + rand() % 10;

    for (int i = 0; i < arrSize; i++)
    {
        int x = rand() % 100;
        sf::Vector2f nodePos = nodeShape[i].getPosition();
        std::string d = toString(x);
        
        nodeData[i].setString(d);
        nodeData[i].setPosition({nodePos.x + (d.size() == 1 ? 45 : 38), nodePos.y + 32});
    }
    for (int i = arrSize; i < maxArrSize; i++)
        nodeData[i].setString("");
}

void StaticArray::userDefineInit(int n, int a[])
{
    arrSize = n;
    
    for (int i = 0; i < arrSize; i++)
    {
        sf::Vector2f nodePos = nodeShape[i].getPosition();
        std::string d = toString(a[i]);

        nodeData[i].setString(d);
        nodeData[i].setPosition({nodePos.x + (d.size() == 1 ? 45 : 38), nodePos.y + 32});
    }
    
    for (int i = arrSize; i < maxArrSize; i++)
        nodeData[i].setString("");
}

void StaticArray::addValueAtPosition(int pos, int x, sf::RenderWindow &window)
{
    nodeShape[pos].setFillColor(sf::Color::Red);
    nodeData[pos].setFillColor(sf::Color::White);
    
    drawNode(pos, window);
    window.display();
    Sleep(250);
    
    for (int i = arrSize - 1; i >= pos; i--)
    {
        nodeShape[i].setFillColor(sf::Color::Green);
        nodeData[i].setFillColor(sf::Color::White);
        
        for (int j = 0; j <= arrSize; j++) drawNode(j, window);
        window.display();
        Sleep(250);

        nodeShape[i + 1].setFillColor(sf::Color::Blue);
        nodeData[i + 1].setFillColor(sf::Color::White);
        
        for (int j = 0; j <= arrSize; j++) drawNode(j, window);
        window.display();
        Sleep(250);

        std::string d = nodeData[i].getString();
        nodeData[i + 1].setString(d);
        nodeData[i + 1].setPosition({nodeShape[i + 1].getPosition().x + (d.size() == 1 ? 45 : 38), nodeShape[i + 1].getPosition().y + 32});

        nodeData[i].setString("");
        
        for (int j = 0; j <= arrSize; j++) drawNode(j, window);
        window.display();
        Sleep(250);

        nodeShape[i + 1].setFillColor(sf::Color::White);
        nodeData[i + 1].setFillColor(sf::Color::Black);

        nodeShape[i].setFillColor(sf::Color::White);
        nodeData[i].setFillColor(sf::Color::Black);

        for (int j = 0; j <= arrSize; j++) drawNode(j, window);
        window.display();
        Sleep(250);
    }

    nodeShape[pos].setFillColor(sf::Color::Red);
    nodeData[pos].setFillColor(sf::Color::White);
    std::string d = toString(x);
    nodeData[pos].setString(d);
    nodeData[pos].setPosition({nodeShape[pos].getPosition().x + (d.size() == 1 ? 45 : 38), nodeShape[pos].getPosition().y + 32});

    for (int j = 0; j <= arrSize; j++) drawNode(j, window);
    window.display();
    Sleep(250);

    nodeShape[pos].setFillColor(sf::Color::White);
    nodeData[pos].setFillColor(sf::Color::Black);

    arrSize++;
}

void StaticArray::deleteValueAtPosition(int pos, sf::RenderWindow &window)
{
    nodeShape[pos].setFillColor(sf::Color::Red);
    nodeData[pos].setFillColor(sf::Color::White);
    drawNode(pos, window);
    window.display();
    Sleep(250);
    
    nodeData[pos].setString("");
    drawNode(pos, window);
    window.display();
    Sleep(250);

    for (int i = pos + 1; i < arrSize; i++)
    {
        nodeShape[i].setFillColor(sf::Color::Green);
        nodeData[i].setFillColor(sf::Color::White);
        
        for (int j = 0; j <= arrSize; j++) drawNode(j, window);
        window.display();
        Sleep(250);

        nodeShape[i - 1].setFillColor(sf::Color::Blue);
        nodeData[i - 1].setFillColor(sf::Color::White);
        
        for (int j = 0; j <= arrSize; j++) drawNode(j, window);
        window.display();
        Sleep(250);

        std::string d = nodeData[i].getString();
        nodeData[i - 1].setString(d);
        nodeData[i - 1].setPosition({nodeShape[i - 1].getPosition().x + (d.size() == 1 ? 45 : 38), nodeShape[i - 1].getPosition().y + 32});

        nodeData[i].setString("");
        
        for (int j = 0; j <= arrSize; j++) drawNode(j, window);
        window.display();
        Sleep(250);

        nodeShape[i - 1].setFillColor(sf::Color::White);
        nodeData[i - 1].setFillColor(sf::Color::Black);

        nodeShape[i].setFillColor(sf::Color::White);
        nodeData[i].setFillColor(sf::Color::Black);

        for (int j = 0; j <= arrSize; j++) drawNode(j, window);
        window.display();
        Sleep(250);
    }

    nodeShape[pos].setFillColor(sf::Color::White);
    nodeData[pos].setFillColor(sf::Color::Black);

    arrSize--;
}

void StaticArray::updateValueAtPosition(int pos, int x, sf::RenderWindow &window)
{
    nodeShape[pos].setFillColor(sf::Color::Red);
    nodeData[pos].setFillColor(sf::Color::White);
    drawNode(pos, window);
    window.display();
    Sleep(250);
    
    std::string d = toString(x);
    nodeData[pos].setString(d);
    nodeData[pos].setPosition({nodeShape[pos].getPosition().x + (d.size() == 1 ? 45 : 38), nodeShape[pos].getPosition().y + 32});
    drawNode(pos, window);
    window.display();
    Sleep(250);

    nodeShape[pos].setFillColor(sf::Color::White);
    nodeData[pos].setFillColor(sf::Color::Black);
}

bool StaticArray::searchValue(int x, sf::RenderWindow &window)
{
    for (int i = 0; i < arrSize; i++)
    {
        nodeShape[i].setFillColor(sf::Color::Red);
        nodeData[i].setFillColor(sf::Color::White);
        
        for (int j = 0; j <= arrSize; j++) drawNode(j, window);
        window.display();
        Sleep(250);

        std::string d = nodeData[i].getString();
        if (toNumber(d) == x)
        {
            nodeShape[i].setFillColor(sf::Color::Green);
            for (int j = 0; j <= arrSize; j++) drawNode(j, window);
            window.display();
            Sleep(2000);

            nodeShape[i].setFillColor(sf::Color::White);
            nodeData[i].setFillColor(sf::Color::Black);
            
            return true;
        }

        nodeShape[i].setFillColor(sf::Color::White);
        nodeData[i].setFillColor(sf::Color::Black);

        for (int j = 0; j <= arrSize; j++) drawNode(j, window);
        window.display();
        Sleep(250);
    }
    return false;
}
void StaticArray::drawNode(int i, sf::RenderWindow &window)
{
    window.draw(nodeShape[i]);
    window.draw(nodeData[i]);
}

void StaticArray::draw(sf::RenderWindow &window)
{
    window.draw(arrName);
    for (int i = 0; i < maxArrSize; i++)
    {
        window.draw(nodeIndex[i]);
        drawNode(i, window);
    }
}
