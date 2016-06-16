/*
*About constexptr
*/
#include <iostream>

void hello(){
	int a = 0;
	constexpr int *ptr= &a;
}

int main(int argc, char const *argv[])
{
	hello();
	int a = 5;
	std::cin>>a;
	constexpr int b = a;
	return 0;
}