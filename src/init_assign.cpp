/*
*About initialization and assignment in C++
*/

#include <iostream>

int main(int argc, char const *argv[])
{
	std::string value = "song";
	std::cout << "After initialization address:"<< &value << std::endl;
	value = "zheng";
	std::cout << "After assignment address:"<< &value << std::endl;
	return 0;
}