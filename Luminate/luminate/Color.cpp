/*
 * author: Cusatelli
 * source: https://github.com/Cusatelli/Luminate
 * license: MIT License
 */
#include "Color.h"

namespace Luminate
{
	enum class Name { NONE, DEFAULT, BLACK, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE };

	// --------------- CONSTRUCTOR --------------- 
	Color::Color(void)
	{
		_prefix_ = "[ Luminate ]: ";

		printMessage("Initialising Color");
		currentColor = Name::DEFAULT;
		isBold = false;
		activeColor = getANSI(currentColor, isBold);

		initialiseColorValues();
		set(currentColor, isBold);
		
		printMessage("Color Initialised as:", currentColor);
	}

	void Color::initialiseColorValues()
	{
		black	=	Name::BLACK;
		red		=	Name::RED;
		green	=	Name::GREEN;
		yellow	=	Name::YELLOW;
		blue	=	Name::BLUE;
		magenta	=	Name::MAGENTA;
		cyan	=	Name::CYAN;
		white	=	Name::WHITE;
	}

	// ---------------- GET COLOR ---------------- 
	std::string Color::get()
	{
		return activeColor;
	}

	std::string Color::get(Color::Name color_name)
	{
		set(color_name);
		return get();
	}

	std::string Color::get(Color::Name color_name, bool isBold)
	{
		set(color_name, isBold);
		return get();
	}

	std::string Color::get(Color::Name color_name, bool isBold, bool isActiveColor)
	{
		if (isActiveColor)
		{
			set(color_name);
			return get();
		}
		return getANSI(color_name, isBold);
	}

	// ---------------- SET COLOR ---------------- 
	void Color::set(Color::Name color_name)
	{
		this->activeColor = getANSI(color_name, false);
	}

	void Color::set(Color::Name color_name, bool isBold)
	{
		this->activeColor = getANSI(color_name, isBold);
	}

	// --------------- RESET COLOR --------------- 
	std::string Color::reset()
	{
		return getANSI(Name::DEFAULT, false);
	}

	// ------------- GET COLOR VALUE ------------- 
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
		default:				errorMessage("Please select a valid Color. Setting Color to DEFAULT."); return "\033[0m";
		}
	}

	// ------------- GET COLOR NAME -------------- 
	Color::Name Color::getName(std::string name)
	{
		printMessage("Fetching color name...");
		Name name_output;
		if (name == to_string(Name::DEFAULT, false))
		{
			name_output = Name::DEFAULT;
		}
		else if (name == getANSI(Name::BLACK, false))
		{
			name_output = Name::BLACK;
		}
		else if (name == getANSI(Name::RED, false))
		{
			name_output = Name::RED;
		}
		else if (name == getANSI(Name::GREEN, false))
		{
			name_output = Name::GREEN;
		}
		else if (name == getANSI(Name::YELLOW, false))
		{
			name_output = Name::YELLOW;
		}
		else if (name == getANSI(Name::BLUE, false))
		{
			name_output = Name::BLUE;
		}
		else if (name == getANSI(Name::MAGENTA, false))
		{
			name_output = Name::MAGENTA;
		}
		else if (name == getANSI(Name::CYAN, false))
		{
			name_output = Name::CYAN;
		}
		else if (name == getANSI(Name::WHITE, false))
		{
			name_output = Name::WHITE;
		}
		else
		{
			printMessage("Color name could not be found. Setting color name to: \"DEFAULT\"");
			name_output = Name::DEFAULT;
		}
		printMessage("Color name set to:", name_output);
		return name_output;
	}

	// ---------------- TO STRING ---------------- 
	std::string Color::to_string(Name color_name, bool isBold)
	{
		std::string suffix;
		if (isBold && color_name != Color::Name::DEFAULT)
		{
			suffix = "[ Bold ]";
		}
		else
		{
			suffix = "[ Normal ]";
		}

		switch (color_name)
		{
		case Name::DEFAULT:		return "DEFAULT";
		case Name::BLACK:		return "BLACK" + suffix;
		case Name::RED:			return "RED" + suffix;
		case Name::GREEN:		return "GREEN" + suffix;
		case Name::YELLOW:		return "YELLOW" + suffix;
		case Name::BLUE:		return "BLUE" + suffix;
		case Name::MAGENTA:		return "MAGENTA" + suffix;
		case Name::CYAN:		return "CYAN" + suffix;
		case Name::WHITE:		return "WHITE" + suffix;
		default:				errorMessage("Please select a valid Color."); return "INVALID COLOR!";
		}
	}

	// ------------------ PRINT ------------------ 
	bool Color::errorMessage(std::string error_message)
	{
		std::cout 
			<< getANSI(Name::RED, true) 
			<< _prefix_
			<< "Error! " << error_message
			<< getANSI(Name::DEFAULT, false)
			<< std::endl;
		return true;
	}

	void Color::printMessage(std::string message)
	{
		std::cout << activeColor << _prefix_ << message << " " << reset() << std::endl;
	}

	void Color::printMessage(std::string message, Name color_name)
	{
		std::cout << _prefix_ << message << " " << get(color_name, isBold, false) << to_string(color_name, isBold) << reset() << std::endl;
	}
}
