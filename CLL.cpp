#include "CLL.h"
#include <stdlib.h>
#include <time.h>
#include <windows.h>

CLL::CLL(int n)
{
    LLSize = n;
    createCLL(n, nullptr);
}

CLL::~CLL()
{
}

int CLL::getSize()
{
    return LLSize;
}

void CLL::clear()
{
    LLSize = 0;
    delete[] nodeShape;
    delete[] nodeData;
    delete[] nodeIndex;
    delete[] nodeLink;
}

void CLL::randomInit()
{
    clear();

    srand(time(NULL));
    int n = 1 + rand() % maxLLSize;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        a[i] = rand() % 100;

    createCLL(n, a);

    delete[] a;
}

void CLL::userDefineInit(int n, int *a)
{
    clear();
    createCLL(n, a);
}

void CLL::addValueAtPosition(int pos, int x, sf::RenderWindow &window)
{
    for (int i = 0; i < pos; i++)
    {
        nodeShape[i].setFillColor(sf::Color::Green);
        nodeData[i].setFillColor(sf::Color::White);

        for (int j = 0; j <= LLSize; j++)
            drawNode(j, window);
        window.display();
        Sleep(250);

        nodeShape[i].setFillColor(sf::Color::White);
        nodeData[i].setFillColor(sf::Color::Black);

        for (int j = 0; j <= LLSize; j++)
            drawNode(j, window);
        window.display();
        Sleep(250);
    }

    if (pos < LLSize)
    {
        nodeShape[pos].setFillColor(sf::Color::Red);
        nodeData[pos].setFillColor(sf::Color::White);
        for (int j = 0; j <= LLSize; j++)
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
    createCLL(n, a);

    nodeShape[pos].setFillColor(sf::Color::Red);
    nodeData[pos].setString("");
    window.draw(LLName);
    window.draw(pHead);
    for (int i = 0; i <= LLSize; i++)
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

void CLL::deleteValueAtPosition(int pos, sf::RenderWindow &window)
{
    for (int i = 0; i < pos; i++)
    {
        nodeShape[i].setFillColor(sf::Color::Green);
        nodeData[i].setFillColor(sf::Color::White);

        for (int j = 0; j <= LLSize; j++)
            drawNode(j, window);
        window.display();
        Sleep(250);

        nodeShape[i].setFillColor(sf::Color::White);
        nodeData[i].setFillColor(sf::Color::Black);

        for (int j = 0; j <= LLSize; j++)
            drawNode(j, window);
        window.display();
        Sleep(250);
    }

    nodeShape[pos].setFillColor(sf::Color::Red);
    nodeData[pos].setFillColor(sf::Color::White);
    for (int j = 0; j <= LLSize; j++)
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
    createCLL(n, a);
}

void CLL::updateValueAtPosition(int pos, int x, sf::RenderWindow &window)
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
bool CLL::searchValue(int x, sf::RenderWindow &window)
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

void CLL::drawNode(int i, sf::RenderWindow &window)
{
    window.draw(nodeShape[i]);
    window.draw(nodeLink[i]);
    window.draw(nodeData[i]);
}

void CLL::draw(sf::RenderWindow &window)
{
    window.draw(LLName);
    window.draw(pHead);

    if (LLSize == 0) return;

    for (int i = 0; i <= LLSize; i++)
    {
        window.draw(nodeIndex[i]);
        drawNode(i, window);
    }
}
