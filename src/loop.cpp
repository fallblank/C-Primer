/**
*
*About loop statement
*
*/

#include <iostream>

int main(int argc, char const *argv[])
{
	int i = 0;
	//while loop
	while(i<10)
	{
		std::cout<<i<<std::endl;
		i++;
	}
	
	//do-while loop
	do
	{
		i--;
		std::cout<<i<<std::endl;
	}while(i>0);

	//for loop
	for(int j = 0; j < 10; j++)
	{
		std::cout<<j<<std::endl;
	}
	return 0;
}