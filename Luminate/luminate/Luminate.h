/*
 * author: Cusatelli
 * source: https://github.com/Cusatelli/Luminate
 * license: MIT License
 */
#pragma once

#include <iostream>

#define COLOR Luminate::Color

namespace Luminate
{
	struct Color
	{
		static std::string Default() { return "\033[0m"; };
		static std::string Reset() { return "\033[0m"; };

		static std::string Black() { return "\033[30m"; };
		static std::string Red() { return "\033[31m"; };
		static std::string Green() { return "\033[32m"; };
		static std::string Yellow() { return "\033[33m"; };
		static std::string Blue() { return "\033[34m"; };
		static std::string Magenta() { return "\033[35m"; };
		static std::string Cyan() { return "\033[36m"; };
		static std::string White() { return "\033[37m"; };

		static std::string Bright_Black() { return "\033[1m\033[30m"; };
		static std::string Bright_Red() { return "\033[1m\033[31m"; };
		static std::string Bright_Green() { return "\033[1m\033[32m"; };
		static std::string Bright_Yellow() { return "\033[1m\033[33m"; };
		static std::string Bright_Blue() { return "\033[1m\033[34m"; };
		static std::string Bright_Magenta() { return "\033[1m\033[35m"; };
		static std::string Bright_Cyan() { return "\033[1m\033[36m"; };
		static std::string Bright_White() { return "\033[1m\033[37m"; };
	};
}
