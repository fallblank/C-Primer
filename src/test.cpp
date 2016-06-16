#include "fallblank.h"
#include <cmath>

int abs(int);

int main(int argc, char const *argv[])
{
	int a = 0;
	while (cin >> a)
	{
		cout << abs(a) << endl;
	}
	return 0;
}

int abs(int number){
	return std::abs(number);
}