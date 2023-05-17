#include <SFML/Graphics.hpp>
#include "StaticArray.h"
#include "DynamicArray.h"
#include "SLL.h"
#include "DLL.h"
#include "CLL.h"
#include "Stack.h"
#include "Queue.h"
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

int sllMenu(sf::RenderWindow &window, SLL &a);

int sllInitMenu(sf::RenderWindow &window, SLL &a);

int dllMenu(sf::RenderWindow &window, DLL &a);

int dllInitMenu(sf::RenderWindow &window, DLL &a);

int cllMenu(sf::RenderWindow &window, CLL &a);

int cllInitMenu(sf::RenderWindow &window, CLL &a);

int stackMenu(sf::RenderWindow &window, Stack &a);

int stackInitMenu(sf::RenderWindow &window, Stack &a);

int queueMenu(sf::RenderWindow &window, Queue &a);

int queueInitMenu(sf::RenderWindow &window, Queue &a);

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

void runSLLMenu(sf::RenderWindow &window, SLL &a);

void runSLLInitMenu(sf::RenderWindow &window, SLL &a);

void runSLLInitUserDefineMenu(sf::RenderWindow &window, SLL &a);

void runSLLAddMenu(sf::RenderWindow &window, SLL &a);

void runSLLDeleteMenu(sf::RenderWindow &window, SLL &a);

void runSLLUpdateMenu(sf::RenderWindow &window, SLL &a);

void runSLLSearchMenu(sf::RenderWindow &window, SLL &a);

void runDLLMenu(sf::RenderWindow &window, DLL &a);

void runDLLInitMenu(sf::RenderWindow &window, DLL &a);

void runDLLInitUserDefineMenu(sf::RenderWindow &window, DLL &a);

void runDLLAddMenu(sf::RenderWindow &window, DLL &a);

void runDLLDeleteMenu(sf::RenderWindow &window, DLL &a);

void runDLLUpdateMenu(sf::RenderWindow &window, DLL &a);

void runDLLSearchMenu(sf::RenderWindow &window, DLL &a);

void runCLLMenu(sf::RenderWindow &window, CLL &a);

void runCLLInitMenu(sf::RenderWindow &window, CLL &a);

void runCLLInitUserDefineMenu(sf::RenderWindow &window, CLL &a);

void runCLLAddMenu(sf::RenderWindow &window, CLL &a);

void runCLLDeleteMenu(sf::RenderWindow &window, CLL &a);

void runCLLUpdateMenu(sf::RenderWindow &window, CLL &a);

void runCLLSearchMenu(sf::RenderWindow &window, CLL &a);

void runStackMenu(sf::RenderWindow &window, Stack &a);

void runStackInitMenu(sf::RenderWindow &window, Stack &a);

void runStackInitUserDefineMenu(sf::RenderWindow &window, Stack &a);

void runStackPushMenu(sf::RenderWindow &window, Stack &a);

void runStackPopMenu(sf::RenderWindow &window, Stack &a);

void runQueueMenu(sf::RenderWindow &window, Queue &a);

void runQueueInitMenu(sf::RenderWindow &window, Queue &a);

void runQueueInitUserDefineMenu(sf::RenderWindow &window, Queue &a);

void runQueuePushMenu(sf::RenderWindow &window, Queue &a);

void runQueuePopMenu(sf::RenderWindow &window, Queue &a);

#endif