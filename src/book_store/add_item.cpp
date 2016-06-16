/**
*
*using lib(Sales_item.h)
*
*/

#include <iostream>
#include "Sales_item.h"

int main(int argc, char const *argv[])
{
	Sales_item item01,item02;
	std::cin >> item01 >> item02;
	std::cout << item01 + item02 << std::endl;
	return 0;
}