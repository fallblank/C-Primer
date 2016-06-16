/**
*
*book store statistics program
*
*/

#include <iostream>
#include "Sales_item.h"

int main(int argc, char const *argv[])
{
	Sales_item total;
	int count;
	if (std::cin >> total)
	{
		Sales_item cur_item;
		count = 1;
		while(std::cin >> cur_item)
		{
			if (cur_item.isbn() == total.isbn())
			{
				count++;
				total += total;
			}else{
				std::cout << total <<std::endl;
				total = cur_item;
			}
		}
		std::cout << total << std::endl;
	}else{
		std::cerr << "No data?!" <<std::endl;
		return -1;
	}
	return 0;
}
