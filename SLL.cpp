#include "SLL.h"
#include <stdlib.h>
#include <time.h>
#include <windows.h>

SLL::SLL(int n)
{
    LLSize = n;
    createSLL(n, nullptr);
}

SLL::~SLL()
{
}

int SLL::getSize()
{
    return LLSize;
}

void SLL::clear()
{
    LLSize = 0;
    delete[] nodeShape;
    delete[] nodeData;
    delete[] nodeIndex;
    delete[] nodeLink;
}

void SLL::randomInit()
{
    clear();

    srand(time(NULL));
    int n = 1 + rand() % 10;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        a[i] = rand() % 100;

    createSLL(n, a);

    delete[] a;
}

void SLL::userDefineInit(int n, int *a)
{
    clear();
    createSLL(n, a);
}

void SLL::addValueAtPosition(int pos, int x, sf::RenderWindow &window)
{
    for (int i = 0; i < pos; i++)
    {
        nodeShape[i].setFillColor(sf::Color::Green);
        nodeData[i].setFillColor(sf::Color::White);

        for (int j = 0; j < LLSize; j++)
            drawNode(j, window);
        window.display();
        Sleep(250);

        nodeShape[i].setFillColor(sf::Color::White);
        nodeData[i].setFillColor(sf::Color::Black);

        for (int j = 0; j < LLSize; j++)
            drawNode(j, window);
        window.display();
        Sleep(250);
    }

    if (pos < LLSize)
    {
        nodeShape[pos].setFillColor(sf::Color::Red);
        nodeData[pos].setFillColor(sf::Color::White);
        for (int j = 0; j < LLSize; j++)
            drawNode(j, window);
        window.display();
        Sleep(250);
    }

    int n = LLSize + 1;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::string d;
        if (i == pos)
            d = toString(x);
        else if (i < pos)
            d = nodeData[i].getString();
        else
            d = nodeData[i - 1].getString();

        a[i] = toNumber(d);
    }

    clear();
    createSLL(n, a);

    nodeShape[pos].setFillColor(sf::Color::Red);
    nodeData[pos].setString("");
    window.draw(LLName);
    window.draw(pHead);
    for (int i = 0; i < LLSize; i++)
    {
        drawNode(i, window);
    }
    window.display();
    Sleep(250);

    nodeData[pos].setFillColor(sf::Color::White);
    nodeData[pos].setString(toString(a[pos]));
    draw(window);
    window.display();
    Sleep(250);

    nodeShape[pos].setFillColor(sf::Color::White);
    nodeData[pos].setFillColor(sf::Color::Black);
}

void SLL::deleteValueAtPosition(int pos, sf::RenderWindow &window)
{
    for (int i = 0; i < pos; i++)
    {
        nodeShape[i].setFillColor(sf::Color::Green);
        nodeData[i].setFillColor(sf::Color::White);

        for (int j = 0; j < LLSize; j++)
            drawNode(j, window);
        window.display();
        Sleep(250);

        nodeShape[i].setFillColor(sf::Color::White);
        nodeData[i].setFillColor(sf::Color::Black);

        for (int j = 0; j < LLSize; j++)
            drawNode(j, window);
        window.display();
        Sleep(250);
    }

    nodeShape[pos].setFillColor(sf::Color::Red);
    nodeData[pos].setFillColor(sf::Color::White);
    for (int j = 0; j < LLSize; j++)
        drawNode(j, window);
    window.display();
    Sleep(500);

    int n = LLSize - 1;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::string d;
        if (i < pos)
            d = nodeData[i].getString();
        else
            d = nodeData[i + 1].getString();

        a[i] = toNumber(d);
    }

    clear();
    createSLL(n, a);
}

void SLL::updateValueAtPosition(int pos, int x, sf::RenderWindow &window)
{
    for (int i = 0; i < LLSize; i++)
    {
        nodeShape[i].setFillColor(sf::Color::Green);
        nodeData[i].setFillColor(sf::Color::White);

        for (int j = 0; j < LLSize; j++)
            drawNode(j, window);
        window.display();
        Sleep(250);

        if (i == pos)
        {
            nodeShape[i].setFillColor(sf::Color::Red);
            std::string d = toString(x);
            nodeData[i].setString(d);
            nodeData[i].setPosition({nodeShape[i].getPosition().x + (d.size() == 1 ? 45 : 38), nodeShape[i].getPosition().y + 32});
            for (int j = 0; j < LLSize; j++)
                drawNode(j, window);
            window.display();
            Sleep(250);
        }
        nodeShape[i].setFillColor(sf::Color::White);
        nodeData[i].setFillColor(sf::Color::Black);

        for (int j = 0; j < LLSize; j++)
            drawNode(j, window);
        window.display();
        Sleep(250);

        if (i == pos)
            return;
    }
}
bool SLL::searchValue(int x, sf::RenderWindow &window)
{
    for (int i = 0; i < LLSize; i++)
    {
        nodeShape[i].setFillColor(sf::Color::Red);
        nodeData[i].setFillColor(sf::Color::White);

        for (int j = 0; j < LLSize; j++)
            drawNode(j, window);
        window.display();
        Sleep(250);

        std::string d = nodeData[i].getString();
        if (toNumber(d) == x)
        {
            nodeShape[i].setFillColor(sf::Color::Green);
            for (int j = 0; j < LLSize; j++)
                drawNode(j, window);
            window.display();
            Sleep(2000);

            nodeShape[i].setFillColor(sf::Color::White);
            nodeData[i].setFillColor(sf::Color::Black);

            return true;
        }

        nodeShape[i].setFillColor(sf::Color::White);
        nodeData[i].setFillColor(sf::Color::Black);

        for (int j = 0; j < LLSize; j++)
            drawNode(j, window);
        window.display();
        Sleep(250);
    }
    return false;
}

void SLL::drawNode(int i, sf::RenderWindow &window)
{
    window.draw(nodeShape[i]);
    window.draw(nodeLink[i]);
    window.draw(nodeData[i]);
}

void SLL::draw(sf::RenderWindow &window)
{
    window.draw(LLName);
    window.draw(pHead);
    for (int i = 0; i < LLSize; i++)
    {
        window.draw(nodeIndex[i]);
        drawNode(i, window);
    }
}
