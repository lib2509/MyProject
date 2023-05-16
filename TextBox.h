#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>

#ifndef _TextBox_h_
#define _TextBox_h_

class TextBox
{
public:
    TextBox(int charSize, sf::Color charColor, bool sel);
    ~TextBox();

    void setFont(sf::Font &font);
    void setPosition(sf::Vector2f &pos);
    void setLimit(bool f, int l);
    void setSelected(bool sel);
    void clear();
    std::string getText();
    void draw(sf::RenderWindow &window);
    void typedOn(sf::Event input);

private:
    sf::Text textBox;
    std::ostringstream text;
    bool isSelected = false, hasLimit = false;
    int limit;

    void deleteLastChar()
    {
        std::string t = text.str(), newText;
        for (int i = 0; i < (int)t.size() - 1; i++)
            newText.push_back(t[i]);
        text.str("");
        text << newText;
        textBox.setString(text.str());
    }

    void inputLogic(int charTyped)
    {
        std::string t = text.str();
        if (charTyped >= 48 && charTyped <= 57 && (!hasLimit || (hasLimit && t.size() < limit)))
            text << static_cast<char>(charTyped);
        else if (charTyped == 8)
        {
            if (t.size() > 0)
                deleteLastChar();
        }
        textBox.setString(text.str() + "_");
    }
};

#endif