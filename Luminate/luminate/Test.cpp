/*
 * author: Cusatelli
 * source: https://github.com/Cusatelli/Luminate
 * license: MIT License
 */
#include "Colors.h"
#include <iostream>

int main()
{
	// ----------- NORMAL -----------
	std::cout << BLACK			<< "################" << RESET << std::endl;
	std::cout << RED			<< "################" << RESET << std::endl;
	std::cout << GREEN			<< "################" << RESET << std::endl;
	std::cout << YELLOW			<< "################" << RESET << std::endl;
	std::cout << BLUE			<< "################" << RESET << std::endl;
	std::cout << MAGENTA		<< "################" << RESET << std::endl;
	std::cout << CYAN			<< "################" << RESET << std::endl;
	std::cout << WHITE			<< "################" << RESET << std::endl;

	// ------------ BOLD ------------
	std::cout << BOLDBLACK		<< "################" << RESET << std::endl;
	std::cout << BOLDRED		<< "################" << RESET << std::endl;
	std::cout << BOLDGREEN		<< "################" << RESET << std::endl;
	std::cout << BOLDYELLOW		<< "################" << RESET << std::endl;
	std::cout << BOLDBLUE		<< "################" << RESET << std::endl;
	std::cout << BOLDMAGENTA	<< "################" << RESET << std::endl;
	std::cout << BOLDCYAN		<< "################" << RESET << std::endl;
	std::cout << BOLDWHITE		<< "################" << RESET << std::endl;

	return 0;
}
