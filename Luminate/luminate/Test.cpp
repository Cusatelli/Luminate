/*
 * author: Cusatelli
 * source: https://github.com/Cusatelli/Luminate
 * license: MIT License
 */
#include "Color.h"

#include <iostream>

#define RED Luminate::Color::Name::RED
#define YELLOW Luminate::Color::Name::YELLOW

int main()
{
	// ------------ TEST ------------
	Luminate::Color* color = new Luminate::Color;
	// ------------------------------
	std::cout << color->get(YELLOW) << "This is a test! [1]" << color->reset() << std::endl;
	std::cout << color->get(RED) << "This is a test! [2]" << color->reset();
	// ------------------------------
	return 0;
}
