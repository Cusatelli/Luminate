/*
 * author: Cusatelli
 * source: https://github.com/Cusatelli/Luminate
 * license: MIT License
 */
#pragma once

/*
 * At the moment the color codes are identical due to the release of
 * Windows 10 Anniversary Edition the compiler can now read ANSI escape sequences as well.
 *
 * Once I get my hands on an early Windows 10 copy or downgrade it will remain like this
 * ... for now...
 */
namespace Luminate
{
	/*
	 * Windows x32 or x64-bit:
	 */
	#ifdef _WIN32
		#define RESET			"\033[0m"
		// ----------- NORMAL -----------
		#define BLACK			"\033[30m"				/* Black		*/
		#define RED				"\033[31m"				/* Red			*/
		#define GREEN			"\033[32m"				/* Green		*/
		#define YELLOW			"\033[33m"				/* Yellow		*/
		#define BLUE			"\033[34m"				/* Blue			*/
		#define MAGENTA			"\033[35m"				/* Magenta		*/
		#define CYAN			"\033[36m"				/* Cyan			*/
		#define WHITE			"\033[37m"				/* White		*/
		// ------------ BOLD ------------
		#define BOLDBLACK		"\033[1m\033[30m"		/* Bold Black	*/
		#define BOLDRED			"\033[1m\033[31m"		/* Bold Red		*/
		#define BOLDGREEN		"\033[1m\033[32m"		/* Bold Green	*/
		#define BOLDYELLOW		"\033[1m\033[33m"		/* Bold Yellow	*/
		#define BOLDBLUE		"\033[1m\033[34m"		/* Bold Blue	*/
		#define BOLDMAGENTA		"\033[1m\033[35m"		/* Bold Magenta */
		#define BOLDCYAN		"\033[1m\033[36m"		/* Bold Cyan	*/
		#define BOLDWHITE		"\033[1m\033[37m"		/* Bold White	*/

	/*
	 * Linux (Unix) or Mac (Mac OS X):
	 */
	#elif __linux__ || __APPLE__
		#define RESET			"\033[0m"
		// ----------- NORMAL -----------
		#define BLACK			"\033[30m"				/* Black		*/
		#define RED				"\033[31m"				/* Red			*/
		#define GREEN			"\033[32m"				/* Green		*/
		#define YELLOW			"\033[33m"				/* Yellow		*/
		#define BLUE			"\033[34m"				/* Blue			*/
		#define MAGENTA			"\033[35m"				/* Magenta		*/
		#define CYAN			"\033[36m"				/* Cyan			*/
		#define WHITE			"\033[37m"				/* White		*/
		// ------------ BOLD ------------
		#define BOLDBLACK		"\033[1m\033[30m"		/* Bold Black	*/
		#define BOLDRED			"\033[1m\033[31m"		/* Bold Red		*/
		#define BOLDGREEN		"\033[1m\033[32m"		/* Bold Green	*/
		#define BOLDYELLOW		"\033[1m\033[33m"		/* Bold Yellow	*/
		#define BOLDBLUE		"\033[1m\033[34m"		/* Bold Blue	*/
		#define BOLDMAGENTA		"\033[1m\033[35m"		/* Bold Magenta */
		#define BOLDCYAN		"\033[1m\033[36m"		/* Bold Cyan	*/
		#define BOLDWHITE		"\033[1m\033[37m"		/* Bold White	*/
	#endif
}
