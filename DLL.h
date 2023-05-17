#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>
#include <string>
#define ROBOTO "SFML-2.5.1\\examples\\shader\\resources\\Roboto-Regular.ttf"
#define ROBOTO_BOLD "SFML-2.5.1\\examples\\shader\\resources\\Roboto-Bold.ttf"

#ifndef _DLL_h_
#define _DLL_h_

class DLL
{
public:
    DLL(int n);
    ~DLL();

    int getSize();
    void clear();
    void randomInit();
    void userDefineInit(int n, int a[]);
    void addValueAtPosition(int pos, int x, sf::RenderWindow &window);
    void deleteValueAtPosition(int pos, sf::RenderWindow &window);
    void updateValueAtPosition(int pos, int x, sf::RenderWindow &window);
    bool searchValue(int x, sf::RenderWindow &window);
    void drawNode(int i, sf::RenderWindow &window);
    void draw(sf::RenderWindow &window);

private:
    int LLSize = 0;
    int maxLLSize = 10;
    sf::Font textFont, indexFont;
    sf::Text LLName, pHead, pTail;
    sf::RectangleShape *nodeShape, *node1stLink, *node2ndLink;
    sf::Text *nodeIndex, *nodeData;

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

    void createDLL(int n, int *a)
    {
        textFont.loadFromFile(ROBOTO);
        indexFont.loadFromFile(ROBOTO_BOLD);

        sf::Vector2f nodeSize = {100.f, 100.f};
        sf::Vector2f nodePos = {250.f, 290.f};
        int charSize = 24;

        LLName.setString("MyLinkedList");
        LLName.setFont(indexFont);
        LLName.setCharacterSize(charSize + 6);
        LLName.setFillColor(sf::Color::Black);
        LLName.setPosition({nodePos.x - 210, nodePos.y + 25});

        pHead.setString("pHead*");
        pHead.setFont(textFont);
        pHead.setCharacterSize(charSize + 6);
        pHead.setFillColor(sf::Color::Black);
        pHead.setPosition({nodePos.x, nodePos.y + 110});

        LLSize = n;
        nodeShape = new sf::RectangleShape[LLSize];
        node1stLink = new sf::RectangleShape[LLSize];
        node2ndLink = new sf::RectangleShape[LLSize];
        nodeData = new sf::Text[LLSize];
        nodeIndex = new sf::Text[LLSize];

        for (int i = 0; i < LLSize; i++)
        {
            sf::RectangleShape rect;
            rect.setSize(nodeSize);
            rect.setPosition(nodePos);
            rect.setFillColor(sf::Color::White);
            rect.setOutlineThickness(5.f);
            rect.setOutlineColor(sf::Color::Black);

            nodeShape[i] = rect;

            node1stLink[i].setSize({25, 5});
            node1stLink[i].setPosition({nodePos.x + 105, nodePos.y + (float)23.5});
            node1stLink[i].setFillColor(sf::Color::Black);

            node2ndLink[i].setSize({25, 5});
            node2ndLink[i].setPosition({nodePos.x + 105, nodePos.y + (float)73.5});
            node2ndLink[i].setFillColor(sf::Color::Black);

            sf::Text text;
            text.setFont(textFont);
            text.setString("");
            text.setCharacterSize(charSize);
            text.setFillColor(sf::Color::Black);
            std::string d = toString(a[i]);
            text.setString(d);
            text.setPosition({nodePos.x + (d.size() == 1 ? 45 : 38), nodePos.y + 32});

            nodeData[i] = text;

            nodeIndex[i].setFont(indexFont);
            nodeIndex[i].setString(toString(i));
            nodeIndex[i].setCharacterSize(charSize);
            nodeIndex[i].setFillColor(sf::Color::Black);
            nodeIndex[i].setPosition({nodePos.x + 45, nodePos.y - 50});

            nodePos.x += 130.f;
        }

        if (LLSize > 0) 
        {
            node1stLink[LLSize - 1].setSize({0, 0});
            node2ndLink[LLSize - 1].setSize({0, 0});
        }
    }
};

#endif