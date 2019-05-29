/*
 * menu.cpp
 *
 *  Created on: 29 May 2019
 *      Author: Scotts Laptop
 */

#include<iostream>
#include"menu.h"

void Menu::printMenuScreen() {
	std::cout << "Please choose quiz option...\nType the corresponding number value below..." << "\n";
	std::cout << item1 << " - 1" << "\n";
	std::cout << item2 << " - 2" << "\n";
}


