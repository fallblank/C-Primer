/*
*Vector test
*/

#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main(int argc, char const *argv[])
{
	vector<string> names;
	string name;
	while(cin>>name)
	{
		names.push_back(name);
	}
	if (!names.empty())
	{
		auto size = names.size();
		while(size>0)
		{
			cout << names[--size] <<endl;
		}
	}else{
		cout << "empty"<<endl;
	}
	return 0;
}