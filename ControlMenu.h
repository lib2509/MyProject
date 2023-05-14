#include <SFML/Graphics.hpp>

#ifndef _Control_Menu_h_
#define _Control_Menu_h

int mainMenu(sf::RenderWindow &window);

int startMenu(sf::RenderWindow &window);

int arrayMenu(sf::RenderWindow &window);

int llMenu(sf::RenderWindow &window);

int staticArrayMenu(sf::RenderWindow &window);

int dynamicArrayMenu(sf::RenderWindow &window);

int sllMenu(sf::RenderWindow &window);

int dllMenu(sf::RenderWindow &window);

int cllMenu(sf::RenderWindow &window);

int stackMenu(sf::RenderWindow &window);

int queueMenu(sf::RenderWindow &window);

void runMainMenu(sf::RenderWindow &window);

void runStartMenu(sf::RenderWindow &window);

void runArrayMenu(sf::RenderWindow &window);

void runLLMenu(sf::RenderWindow &window);

void runStaticArrayMenu(sf::RenderWindow &window);

void runDynamicArrayMenu(sf::RenderWindow &window);

void runSLLMenu(sf::RenderWindow &window);

void runDLLMenu(sf::RenderWindow &window);

void runCLLMenu(sf::RenderWindow &window);

void runStackMenu(sf::RenderWindow &window);

void runQueueMenu(sf::RenderWindow &window);

#endif