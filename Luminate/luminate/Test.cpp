/*
 * author: Cusatelli
 * source: https://github.com/Cusatelli/Luminate
 * license: MIT License
 */
#include "Color.h"

#include <iostream>

int main()
{
	// ------------ TEST ------------
	Luminate::Color* color = new Luminate::Color;
	// ------------------------------
	color->set(color->magenta);
	std::cout << color->get() << "This is a test! [1]" << color->reset() << std::endl;
	color->set(color->green);
	std::cout << color->get() << "This is a test! [2]" << color->reset();
	// ------------------------------
	return 0;
}
