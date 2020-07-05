/*
 * author: Cusatelli
 * source: https://github.com/Cusatelli/Luminate
 * license: MIT License
 */
#pragma once

#include <iostream>

namespace Luminate
{
	class Color
	{
	public:
		enum class Name { NONE, DEFAULT, BLACK, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE };
		std::string get(Color::Name color_name);
		std::string get(Color::Name color_name, bool isBold);
		std::string reset();

	private:
		std::string getANSI(Color::Name color_name, bool isBold);
		bool errorMessage(std::string error_message);
	};
}
