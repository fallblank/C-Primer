/**
*
*statistics times of number occurs continuously
*
*/

#include <iostream>

int main(int argc, char const *argv[])
{
	int val = 0,cur_val = 0;
	if(std::cin>>cur_val)
	{
		int cnt = 1;
		while(std::cin>>val)
		{
			if (cur_val == val)
			{
				cnt++;
			}else{
				std::cout<<cur_val<<" occurs "<<cnt<<" times"<<std::endl;
				cur_val = val;
				cnt = 1;
			}
		}
		std::cout<<cur_val<<" occurs "<<cnt
				 <<" times"<<std::endl;
	}
	return 0;
}