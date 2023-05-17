#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>
#include <string>
#define ROBOTO "SFML-2.5.1\\examples\\shader\\resources\\Roboto-Regular.ttf"
#define ROBOTO_BOLD "SFML-2.5.1\\examples\\shader\\resources\\Roboto-Bold.ttf"

#ifndef _Stack_h_
#define _Stack_h_

class Stack
{
public:
    Stack(int n);
    ~Stack();

    int getSize();
    void clear();
    void randomInit();
    void userDefineInit(int n, int a[]);
    void push(int x, sf::RenderWindow &window);
    void pop(sf::RenderWindow &window);
    void drawNode(int i, sf::RenderWindow &window);
    void draw(sf::RenderWindow &window);

private:
    int LLSize = 0;
    int maxLLSize = 10;
    sf::Font textFont, indexFont;
    sf::Text LLName, pushText, popText;
    sf::RectangleShape *nodeShape, *nodeLink;
    sf::Text *nodeData;

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

    void createStack(int n, int *a)
    {
        textFont.loadFromFile(ROBOTO);
        indexFont.loadFromFile(ROBOTO_BOLD);

        sf::Vector2f nodeSize = {100.f, 100.f};
        sf::Vector2f nodePos = {250.f, 290.f};
        int charSize = 24;

        LLName.setString("MyStack");
        LLName.setFont(indexFont);
        LLName.setCharacterSize(charSize + 6);
        LLName.setFillColor(sf::Color::Black);
        LLName.setPosition({nodePos.x - 150, nodePos.y + 25});

        LLSize = n;
        nodeShape = new sf::RectangleShape[LLSize];
        nodeLink = new sf::RectangleShape[LLSize];
        nodeData = new sf::Text[LLSize];

        for (int i = 0; i < LLSize; i++)
        {
            sf::RectangleShape rect;
            rect.setSize(nodeSize);
            rect.setPosition(nodePos);
            rect.setFillColor(sf::Color::White);
            rect.setOutlineThickness(5.f);
            rect.setOutlineColor(sf::Color::Black);

            nodeShape[i] = rect;

            nodeLink[i].setSize({25, 5});
            nodeLink[i].setPosition({nodePos.x + 105, nodePos.y + (float)47.5});
            nodeLink[i].setFillColor(sf::Color::Black);

            sf::Text text;
            text.setFont(textFont);
            text.setString("");
            text.setCharacterSize(charSize);
            text.setFillColor(sf::Color::Black);
            std::string d = toString(a[i]);
            text.setString(d);
            text.setPosition({nodePos.x + (d.size() == 1 ? 45 : 38), nodePos.y + 32});

            nodeData[i] = text;

            nodePos.x += 130.f;
        }

        if (LLSize > 0)
            nodeLink[LLSize - 1].setSize({0, 0});

        if (LLSize < maxLLSize)
        {
            pushText.setString("Push");
            pushText.setFont(indexFont);
            pushText.setCharacterSize(charSize + 6);
            pushText.setFillColor(sf::Color::Black);
            pushText.setPosition({nodePos.x + 16, nodePos.y - 47});
        }
        else
            pushText.setCharacterSize(0);

        if (LLSize > 0)
        {
            popText.setString("Pop");
            popText.setFont(indexFont);
            popText.setCharacterSize(charSize + 6);
            popText.setFillColor(sf::Color::Black);
            popText.setPosition({nodePos.x - 105.f, nodePos.y + 110});
        }
        else
            popText.setCharacterSize(0);
    }
};

#endif