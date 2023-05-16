#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>
#include <string>
#define ROBOTO "SFML-2.5.1\\examples\\shader\\resources\\Roboto-Regular.ttf"
#define ROBOTO_BOLD "SFML-2.5.1\\examples\\shader\\resources\\Roboto-Bold.ttf"

#ifndef _StaticArray_h_
#define _StaticArray_h_

class StaticArray
{
public:
    StaticArray(int n);
    ~StaticArray();
    
    int getSize();
    void randomInit();
    void userDefineInit(int n, int a[]);
    void addValueAtPosition(int pos, int x, sf::RenderWindow &window);
    void deleteValueAtPosition(int pos, sf::RenderWindow &window);
    void updateValueAtPosition(int pos, int x, sf::RenderWindow &window);
    bool searchValue(int x, sf::RenderWindow &window);
    void drawNode(int i, sf::RenderWindow &window);
    void draw(sf::RenderWindow &window);

private:
    int arrSize = 0;
    int maxArrSize = 10;
    sf::Font textFont, indexFont;
    sf::Text arrName;
    sf::RectangleShape nodeShape[10];
    sf::Text nodeIndex[10], nodeData[10];
    
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

    void createArray()
    {
        textFont.loadFromFile(ROBOTO);
        indexFont.loadFromFile(ROBOTO_BOLD);

        sf::Vector2f nodeSize = {100.f, 100.f};
        sf::Vector2f nodePos = {320.f, 290.f};
        int charSize = 24;
        
        arrName.setString("MyArray");
        arrName.setFont(indexFont);
        arrName.setCharacterSize(charSize + 6);
        arrName.setFillColor(sf::Color::Black);
        arrName.setPosition({nodePos.x - 150, nodePos.y + 25});
        
        for (int i = 0; i < maxArrSize; i++)
        {
            sf::RectangleShape rect;
            rect.setSize(nodeSize);
            rect.setPosition(nodePos);
            rect.setFillColor(sf::Color::White);
            rect.setOutlineThickness(5.f);
            rect.setOutlineColor(sf::Color::Black);

            nodeShape[i] = rect;

            sf::Text text;
            text.setFont(textFont);
            text.setString("");
            text.setCharacterSize(charSize);
            text.setFillColor(sf::Color::Black);

            nodeData[i] = text;

            nodeIndex[i].setFont(indexFont);
            nodeIndex[i].setString(toString(i));
            nodeIndex[i].setCharacterSize(charSize);
            nodeIndex[i].setFillColor(sf::Color::Black);
            nodeIndex[i].setPosition({nodePos.x + 45, nodePos.y - 50});
            
            nodePos.x += 105.f;
        }
    }
};

#endif