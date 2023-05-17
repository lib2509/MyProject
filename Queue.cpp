#include "Queue.h"
#include <stdlib.h>
#include <time.h>
#include <windows.h>

Queue::Queue(int n)
{
    LLSize = n;
    createQueue(n, nullptr);
}

Queue::~Queue()
{
}

int Queue::getSize()
{
    return LLSize;
}

void Queue::clear()
{
    LLSize = 0;
    delete[] nodeShape;
    delete[] nodeData;
    delete[] nodeLink;
}

void Queue::randomInit()
{
    clear();

    srand(time(NULL));
    int n = 1 + rand() % 10;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        a[i] = rand() % 100;

    createQueue(n, a);

    delete[] a;
}

void Queue::userDefineInit(int n, int *a)
{
    clear();
    createQueue(n, a);
}

void Queue::push(int x, sf::RenderWindow &window)
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
    createQueue(n, a);
    
    nodeShape[LLSize - 1].setFillColor(sf::Color::Green);
    nodeData[LLSize - 1].setFillColor(sf::Color::White);
    draw(window);
    window.display();
    Sleep(250);

    nodeShape[LLSize - 1].setFillColor(sf::Color::White);
    nodeData[LLSize - 1].setFillColor(sf::Color::Black);
}

void Queue::pop(sf::RenderWindow &window)
{
    nodeShape[0].setFillColor(sf::Color::Green);
    nodeData[0].setFillColor(sf::Color::White);
    draw(window);
    window.display();
    Sleep(250);

    int n = LLSize - 1;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::string d;
        d = nodeData[i + 1].getString();
        a[i] = toNumber(d);
    }
    
    clear();
    createQueue(n, a);
}

void Queue::drawNode(int i, sf::RenderWindow &window)
{
    window.draw(nodeShape[i]);
    window.draw(nodeLink[i]);
    window.draw(nodeData[i]);
}

void Queue::draw(sf::RenderWindow &window)
{
    window.draw(LLName);
    window.draw(pushText);
    window.draw(popText);
    for (int i = 0; i < LLSize; i++)
        drawNode(i, window);
}
