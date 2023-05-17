#include "Stack.h"
#include <stdlib.h>
#include <time.h>
#include <windows.h>

Stack::Stack(int n)
{
    LLSize = n;
    createStack(n, nullptr);
}

Stack::~Stack()
{
}

int Stack::getSize()
{
    return LLSize;
}

void Stack::clear()
{
    LLSize = 0;
    delete[] nodeShape;
    delete[] nodeData;
    delete[] nodeLink;
}

void Stack::randomInit()
{
    clear();

    srand(time(NULL));
    int n = 1 + rand() % 10;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        a[i] = rand() % 100;

    createStack(n, a);

    delete[] a;
}

void Stack::userDefineInit(int n, int *a)
{
    clear();
    createStack(n, a);
}

void Stack::push(int x, sf::RenderWindow &window)
{
    int n = LLSize + 1;
    int *a = new int[n];
    for (int i = 0; i < n - 1; i++)
    {
        std::string d;
        d = nodeData[i].getString();
        a[i] = toNumber(d);
    }
    a[n -  1] = x;
    clear();
    createStack(n, a);
    
    nodeShape[LLSize - 1].setFillColor(sf::Color::Green);
    nodeData[LLSize - 1].setFillColor(sf::Color::White);
    draw(window);
    window.display();
    Sleep(250);

    nodeShape[LLSize - 1].setFillColor(sf::Color::White);
    nodeData[LLSize - 1].setFillColor(sf::Color::Black);
}

void Stack::pop(sf::RenderWindow &window)
{
    nodeShape[LLSize - 1].setFillColor(sf::Color::Green);
    nodeData[LLSize - 1].setFillColor(sf::Color::White);
    draw(window);
    window.display();
    Sleep(250);

    int n = LLSize - 1;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::string d;
        d = nodeData[i].getString();
        a[i] = toNumber(d);
    }
    
    clear();
    createStack(n, a);
}

void Stack::drawNode(int i, sf::RenderWindow &window)
{
    window.draw(nodeShape[i]);
    window.draw(nodeLink[i]);
    window.draw(nodeData[i]);
}

void Stack::draw(sf::RenderWindow &window)
{
    window.draw(LLName);
    window.draw(pushText);
    window.draw(popText);
    for (int i = 0; i < LLSize; i++)
        drawNode(i, window);
}
