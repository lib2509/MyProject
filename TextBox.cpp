#include <SFML/Graphics.hpp>
#include "TextBox.h"

TextBox::TextBox(int charSize, sf::Color charColor, bool sel)
{
    textBox.setCharacterSize(charSize);
    textBox.setFillColor(charColor);
    isSelected = sel;
    if (sel)
        textBox.setString("_");
    else
        textBox.setString("");
}

TextBox::~TextBox()
{
}

void TextBox::setFont(sf::Font &font)
{
    textBox.setFont(font);
}

void TextBox::setPosition(sf::Vector2f &pos)
{
    textBox.setPosition(pos);
}

void TextBox::setLimit(bool f, int l)
{
    hasLimit = f;
    limit = l;
}

void TextBox::setSelected(bool sel)
{
    isSelected = sel;
    if (!sel)
    {
        std::string t = text.str(), newText;
        for (int i = 0; i < (int)t.size(); i++)
            newText.push_back(t[i]);
        textBox.setString(newText);
    }
}

void TextBox::clear()
{
    while (text.str().size())
        deleteLastChar();
    textBox.setString((isSelected ? "_" : ""));
}

std::string TextBox::getText()
{
    return text.str();
}

void TextBox::draw(sf::RenderWindow &window)
{
    window.draw(textBox);
}

void TextBox::typedOn(sf::Event input)
{
    if (isSelected)
    {
        int charTyped = input.text.unicode;
        if (charTyped < 128)
            inputLogic(charTyped);
    }
}