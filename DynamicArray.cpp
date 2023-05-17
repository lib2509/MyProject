#include "DynamicArray.h"
#include <stdlib.h>
#include <time.h>
#include <windows.h>

DynamicArray::DynamicArray(int n)
{
    arrSize = n;
    createArray(n, nullptr);
}

DynamicArray::~DynamicArray()
{
}

int DynamicArray::getSize()
{
    return arrSize;
}

void DynamicArray::clear()
{
    arrSize = 0;
    delete[] nodeShape;
    delete[] nodeData;
    delete[] nodeIndex;
}

void DynamicArray::randomInit()
{
    clear();

    srand(time(NULL));
    int n = 1 + rand() % 10;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        a[i] = rand() % 100;

    createArray(n, a);

    delete[] a;
}

void DynamicArray::userDefineInit(int n, int *a)
{
    clear();
    createArray(n, a);
}

void DynamicArray::addValueAtPosition(int pos, int x, sf::RenderWindow &window)
{
    sf::RectangleShape *newNodeShape = new sf::RectangleShape[arrSize + 1];
    sf::Text *newNodeData = new sf::Text[arrSize + 1];
    sf::Vector2f newNodeSize = {100.f, 100.f};
    sf::Vector2f newNodePos = {320.f, 560.f};
    int newCharSize = 24;

    for (int i = 0; i <= arrSize; i++)
    {
        sf::RectangleShape rect;
        rect.setSize(newNodeSize);
        rect.setPosition(newNodePos);
        rect.setFillColor(sf::Color::White);
        rect.setOutlineThickness(5.f);
        rect.setOutlineColor(sf::Color::Black);

        newNodeShape[i] = rect;

        sf::Text text;
        text.setFont(textFont);
        text.setString("");
        text.setCharacterSize(newCharSize);
        text.setFillColor(sf::Color::Black);

        newNodeData[i] = text;

        newNodePos.x += 105;
    }

    newNodeShape[pos].setFillColor(sf::Color::Red);
    newNodeData[pos].setFillColor(sf::Color::White);

    for (int i = 0; i <= arrSize; i++)
    {
        window.draw(newNodeShape[i]);
        window.draw(newNodeData[i]);
    }
    window.display();
    Sleep(500);

    for (int i = 0; i < pos; i++)
    {
        nodeShape[i].setFillColor(sf::Color::Green);
        nodeData[i].setFillColor(sf::Color::White);

        newNodeShape[i].setFillColor(sf::Color::Green);
        newNodeData[i].setFillColor(sf::Color::White);
        std::string d = nodeData[i].getString();
        newNodeData[i].setString(d);
        newNodeData[i].setPosition({newNodeShape[i].getPosition().x + (d.size() == 1 ? 45 : 38), newNodeShape[i].getPosition().y + 32});

        for (int j = 0; j < arrSize; j++)
            drawNode(j, window);

        for (int j = 0; j <= arrSize; j++)
        {
            window.draw(newNodeShape[j]);
            window.draw(newNodeData[j]);
        }
        window.display();
        Sleep(250);

        nodeShape[i].setFillColor(sf::Color::White);
        nodeData[i].setFillColor(sf::Color::Black);

        newNodeShape[i].setFillColor(sf::Color::White);
        newNodeData[i].setFillColor(sf::Color::Black);

        for (int j = 0; j < arrSize; j++)
            drawNode(j, window);

        for (int j = 0; j <= arrSize; j++)
        {
            window.draw(newNodeShape[j]);
            window.draw(newNodeData[j]);
        }
        window.display();
        Sleep(250);
    }
    std::string d = toString(x);
    newNodeData[pos].setString(d);
    newNodeData[pos].setPosition({newNodeShape[pos].getPosition().x + (d.size() == 1 ? 45 : 38), newNodeShape[pos].getPosition().y + 32});

    for (int j = 0; j < arrSize; j++)
        drawNode(j, window);

    for (int j = 0; j <= arrSize; j++)
    {
        window.draw(newNodeShape[j]);
        window.draw(newNodeData[j]);
    }
    window.display();
    Sleep(250);

    for (int i = pos + 1; i <= arrSize; i++)
    {
        nodeShape[i - 1].setFillColor(sf::Color::Green);
        nodeData[i - 1].setFillColor(sf::Color::White);

        newNodeShape[i].setFillColor(sf::Color::Green);
        newNodeData[i].setFillColor(sf::Color::White);
        d = nodeData[i - 1].getString();
        newNodeData[i].setString(d);
        newNodeData[i].setPosition({newNodeShape[i].getPosition().x + (d.size() == 1 ? 45 : 38), newNodeShape[i].getPosition().y + 32});

        for (int j = 0; j < arrSize; j++)
            drawNode(j, window);

        for (int j = 0; j <= arrSize; j++)
        {
            window.draw(newNodeShape[j]);
            window.draw(newNodeData[j]);
        }
        window.display();
        Sleep(250);

        nodeShape[i - 1].setFillColor(sf::Color::White);
        nodeData[i - 1].setFillColor(sf::Color::Black);

        newNodeShape[i].setFillColor(sf::Color::White);
        newNodeData[i].setFillColor(sf::Color::Black);

        for (int j = 0; j < arrSize; j++)
            drawNode(j, window);

        for (int j = 0; j <= arrSize; j++)
        {
            window.draw(newNodeShape[j]);
            window.draw(newNodeData[j]);
        }
        window.display();
        Sleep(250);
    }

    int n = arrSize + 1;

    clear();

    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        d = newNodeData[i].getString();
        a[i] = toNumber(d);
    }
    createArray(n, a);

    delete[] newNodeShape;
    delete[] newNodeData;
}

void DynamicArray::deleteValueAtPosition(int pos, sf::RenderWindow &window)
{
    sf::RectangleShape *newNodeShape = new sf::RectangleShape[arrSize - 1];
    sf::Text *newNodeData = new sf::Text[arrSize - 1];
    sf::Vector2f newNodeSize = {100.f, 100.f};
    sf::Vector2f newNodePos = {320.f, 560.f};
    int newCharSize = 24;

    for (int i = 0; i < arrSize - 1; i++)
    {
        sf::RectangleShape rect;
        rect.setSize(newNodeSize);
        rect.setPosition(newNodePos);
        rect.setFillColor(sf::Color::White);
        rect.setOutlineThickness(5.f);
        rect.setOutlineColor(sf::Color::Black);

        newNodeShape[i] = rect;

        sf::Text text;
        text.setFont(textFont);
        text.setString("");
        text.setCharacterSize(newCharSize);
        text.setFillColor(sf::Color::Black);

        newNodeData[i] = text;

        newNodePos.x += 105;
    }

    nodeShape[pos].setFillColor(sf::Color::Red);
    nodeData[pos].setFillColor(sf::Color::White);

    for (int j = 0; j < arrSize; j++)
        drawNode(j, window);

    for (int j = 0; j < arrSize - 1; j++)
    {
        window.draw(newNodeShape[j]);
        window.draw(newNodeData[j]);
    }
    window.display();
    Sleep(500);

    for (int i = 0; i < pos; i++)
    {
        nodeShape[i].setFillColor(sf::Color::Green);
        nodeData[i].setFillColor(sf::Color::White);

        newNodeShape[i].setFillColor(sf::Color::Green);
        newNodeData[i].setFillColor(sf::Color::White);
        std::string d = nodeData[i].getString();
        newNodeData[i].setString(d);
        newNodeData[i].setPosition({newNodeShape[i].getPosition().x + (d.size() == 1 ? 45 : 38), newNodeShape[i].getPosition().y + 32});

        for (int j = 0; j < arrSize; j++)
            drawNode(j, window);

        for (int j = 0; j < arrSize - 1; j++)
        {
            window.draw(newNodeShape[j]);
            window.draw(newNodeData[j]);
        }
        window.display();
        Sleep(250);

        nodeShape[i].setFillColor(sf::Color::White);
        nodeData[i].setFillColor(sf::Color::Black);

        newNodeShape[i].setFillColor(sf::Color::White);
        newNodeData[i].setFillColor(sf::Color::Black);

        for (int j = 0; j < arrSize; j++)
            drawNode(j, window);

        for (int j = 0; j < arrSize - 1; j++)
        {
            window.draw(newNodeShape[j]);
            window.draw(newNodeData[j]);
        }
        window.display();
        Sleep(250);
    }

    for (int i = pos + 1; i < arrSize; i++)
    {
        nodeShape[i].setFillColor(sf::Color::Green);
        nodeData[i].setFillColor(sf::Color::White);

        newNodeShape[i - 1].setFillColor(sf::Color::Green);
        newNodeData[i - 1].setFillColor(sf::Color::White);
        std::string d = nodeData[i].getString();
        newNodeData[i - 1].setString(d);
        newNodeData[i - 1].setPosition({newNodeShape[i - 1].getPosition().x + (d.size() == 1 ? 45 : 38), newNodeShape[i - 1].getPosition().y + 32});

        for (int j = 0; j < arrSize; j++)
            drawNode(j, window);

        for (int j = 0; j < arrSize - 1; j++)
        {
            window.draw(newNodeShape[j]);
            window.draw(newNodeData[j]);
        }
        window.display();
        Sleep(250);

        nodeShape[i].setFillColor(sf::Color::White);
        nodeData[i].setFillColor(sf::Color::Black);

        newNodeShape[i - 1].setFillColor(sf::Color::White);
        newNodeData[i - 1].setFillColor(sf::Color::Black);

        for (int j = 0; j < arrSize; j++)
            drawNode(j, window);

        for (int j = 0; j < arrSize - 1; j++)
        {
            window.draw(newNodeShape[j]);
            window.draw(newNodeData[j]);
        }
        window.display();
        Sleep(250);
    }

    int n = arrSize - 1;

    clear();

    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::string d = newNodeData[i].getString();
        a[i] = toNumber(d);
    }
    createArray(n, a);

    delete[] newNodeShape;
    delete[] newNodeData;
}

void DynamicArray::updateValueAtPosition(int pos, int x, sf::RenderWindow &window)
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

bool DynamicArray::searchValue(int x, sf::RenderWindow &window)
{
    for (int i = 0; i < arrSize; i++)
    {
        nodeShape[i].setFillColor(sf::Color::Red);
        nodeData[i].setFillColor(sf::Color::White);

        for (int j = 0; j < arrSize; j++)
            drawNode(j, window);
        window.display();
        Sleep(250);

        std::string d = nodeData[i].getString();
        if (toNumber(d) == x)
        {
            nodeShape[i].setFillColor(sf::Color::Green);
            for (int j = 0; j < arrSize; j++)
                drawNode(j, window);
            window.display();
            Sleep(2000);

            nodeShape[i].setFillColor(sf::Color::White);
            nodeData[i].setFillColor(sf::Color::Black);

            return true;
        }

        nodeShape[i].setFillColor(sf::Color::White);
        nodeData[i].setFillColor(sf::Color::Black);

        for (int j = 0; j < arrSize; j++)
            drawNode(j, window);
        window.display();
        Sleep(250);
    }
    return false;
}

void DynamicArray::drawNode(int i, sf::RenderWindow &window)
{
    window.draw(nodeShape[i]);
    window.draw(nodeData[i]);
}

void DynamicArray::draw(sf::RenderWindow &window)
{
    window.draw(arrName);
    for (int i = 0; i < arrSize; i++)
    {
        window.draw(nodeIndex[i]);
        drawNode(i, window);
    }
}
