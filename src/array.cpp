#include <iostream>
#include <string>

//A bad way
using namespace std;

int main(int argc, char const *argv[])
{
	string name[] = {"song","zheng","teng"};
	for(auto &str : name)
	{
		str = "fallblank";
		cout << str <<endl;
	}

	cout << name[0] <<endl;
	return 0;
}