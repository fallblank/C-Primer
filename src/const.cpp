/*
*About const usage
*/

#include <iostream>
#include "const.h"

extern const int SONG;

int main(int argc, char const *argv[])
{
	std::cout << SONG << std::endl;
	return 0;
}