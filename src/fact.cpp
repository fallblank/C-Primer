#include "fact.h"

int fact(int n)
{
	int value = 1;
	while(n >1)
	{
		value*=n;
		n--;
	}
	return value;
}