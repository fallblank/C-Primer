/*
*About ptr
*/

#include <iostream>

int main(int argc, char const *argv[])
{
	int* ptr = nullptr, a = 0;
	ptr = &a;
	std::cout << ptr << " "<< a << std::endl;

	return 0;
}