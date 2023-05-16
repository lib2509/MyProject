#include <SFML/Graphics.hpp>
#include "StaticArray.h"
#include "DynamicArray.h"

#ifndef _Control_Menu_h_
#define _Control_Menu_h

int mainMenu(sf::RenderWindow &window);

int startMenu(sf::RenderWindow &window);

int arrayMenu(sf::RenderWindow &window);

int llMenu(sf::RenderWindow &window);

int staticArrayMenu(sf::RenderWindow &window, StaticArray &a);

int staticArrayInitMenu(sf::RenderWindow &window, StaticArray &a);

int dynamicArrayMenu(sf::RenderWindow &window, DynamicArray &a);

int dynamicArrayInitMenu(sf::RenderWindow &window, DynamicArray &a);

int sllMenu(sf::RenderWindow &window);

int dllMenu(sf::RenderWindow &window);

int cllMenu(sf::RenderWindow &window);

int stackMenu(sf::RenderWindow &window);

int queueMenu(sf::RenderWindow &window);

void runMainMenu(sf::RenderWindow &window);

void runStartMenu(sf::RenderWindow &window);

void runArrayMenu(sf::RenderWindow &window);

void runLLMenu(sf::RenderWindow &window);

void runStaticArrayMenu(sf::RenderWindow &window, StaticArray &a);

void runStaticArrayInitMenu(sf::RenderWindow &window, StaticArray &a);

void runStaticArrayInitUserDefineMenu(sf::RenderWindow &window, StaticArray &a);

void runStaticArrayAddMenu(sf::RenderWindow &window, StaticArray &a);

void runStaticArrayDeleteMenu(sf::RenderWindow &window, StaticArray &a);

void runStaticArrayUpdateMenu(sf::RenderWindow &window, StaticArray &a);

void runStaticArraySearchMenu(sf::RenderWindow &window, StaticArray &a);

void runDynamicArrayMenu(sf::RenderWindow &window, DynamicArray &a);

void runDynamicArrayInitMenu(sf::RenderWindow &window, DynamicArray &a);

void runDynamicArrayInitUserDefineMenu(sf::RenderWindow &window, DynamicArray &a);

void runDynamicArrayAddMenu(sf::RenderWindow &window, DynamicArray &a);

void runDynamicArrayDeleteMenu(sf::RenderWindow &window, DynamicArray &a);

void runDynamicArrayUpdateMenu(sf::RenderWindow &window, DynamicArray &a);

void runDynamicArraySearchMenu(sf::RenderWindow &window, DynamicArray &a);

void runSLLMenu(sf::RenderWindow &window);

void runDLLMenu(sf::RenderWindow &window);

void runCLLMenu(sf::RenderWindow &window);

void runStackMenu(sf::RenderWindow &window);

void runQueueMenu(sf::RenderWindow &window);

#endif