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
		Color();

		std::string get();
		std::string get(Color::Name color_name);
		std::string get(Color::Name color_name, bool isBold);
		std::string get(Color::Name color_name, bool isBold, bool isActiveColor);
		void set(Color::Name color_name);
		void set(Color::Name color_name, bool isBold);
		std::string reset();

		Name getName(std::string name);
		std::string to_string(Name color_name, bool isBold);

		Name currentColor;
		Name black;
		Name red;
		Name green;
		Name yellow;
		Name blue;
		Name magenta;
		Name cyan;
		Name white;
	
	private:
		std::string _prefix_;
		std::string activeColor;
		bool isBold;

		void initialiseColorValues();
		std::string getANSI(Color::Name color_name, bool isBold);
		bool errorMessage(std::string error_message);
		void printMessage(std::string message);
		void printMessage(std::string message, Name color_name);
	};
}
