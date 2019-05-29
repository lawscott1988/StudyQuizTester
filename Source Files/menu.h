/*
 * menu.h
 *
 *  Created on: 29 May 2019
 *      Author: Scotts Laptop
 */

#ifndef SOURCE_FILES_MENU_H_
#define SOURCE_FILES_MENU_H_

#include<string>

class Menu {
public:
	const std::string item1{"Quick Quiz Practice"};
	const std::string item2{"Start Quiz Practice"};
//MOVE PUBLIC HERE ONCE TESTING IS DONE
	Menu() = default;

	void printMenuScreen();
};

#endif /* SOURCE_FILES_MENU_H_ */
