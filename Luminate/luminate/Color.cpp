/*
 * author: Cusatelli
 * source: https://github.com/Cusatelli/Luminate
 * license: MIT License
 */
#include "Color.h"

namespace Luminate
{
	enum class Name { NONE, DEFAULT, BLACK, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE };

	std::string Color::get(Color::Name color_name)
	{
		return getANSI(color_name, false);
	}

	std::string Color::get(Color::Name color_name, bool isBold)
	{
		return getANSI(color_name, isBold);
	}

	std::string Color::reset()
	{
		return getANSI(Name::DEFAULT, false);
	}

	std::string Color::getANSI(Color::Name color_name, bool isBold)
	{
		std::string prefix = "\033[";
		if (isBold && color_name != Color::Name::DEFAULT)
		{
			prefix = "\033[1m\033[";
		}

		switch (color_name)
		{
		case Name::DEFAULT:		return "\033[0m"; //prefix + "0m";
		case Name::BLACK:		return prefix + "30m";
		case Name::RED:			return prefix + "31m";
		case Name::GREEN:		return prefix + "32m";
		case Name::YELLOW:		return prefix + "33m";
		case Name::BLUE:		return prefix + "34m";
		case Name::MAGENTA:		return prefix + "35m";
		case Name::CYAN:		return prefix + "36m";
		case Name::WHITE:		return prefix + "37m";
		default:				errorMessage("Please select a valid Color."); return "";
		}
	}

	bool Color::errorMessage(std::string error_message)
	{
		// TODO: Implement validation check for color values.
		std::cout 
			<< getANSI(Name::RED, true) 
			<< "Error! " << error_message
			<< getANSI(Name::DEFAULT, false)
			<< std::endl;
		return true;
	}
}
