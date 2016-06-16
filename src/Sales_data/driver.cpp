#include "Sales_data.h"
#include <iostream>

int main(int argc, char const *argv[])
{

	Sales_data data(std::cin);
	print(std::cout,data);
	return 0;
}