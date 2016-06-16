/*
*About reference and ptr
*/

#include <iostream>

int main(int argc, char const *argv[])
{
	int i = 5, &j = i, *k = &j,&z=j;

	std::cout << i << j << *k << z << std::endl; 

	return 0;
}