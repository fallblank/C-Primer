/*
*iterator
*/

#include <iostream>
#include <string>
#include <vector>

//A bad way
using namespace std;

class Item
{
public:
	string name;
	Item(string);
	~Item();
	
};

Item::Item(string name)
{
	this->name = name;
}
Item::~Item(){}


int main(int argc, char const *argv[])
{
	/* code */
	string name = "songzhengteng";
	auto begin = name.begin(),end = name.end();
	while(begin != end)
	{
		cout << *begin << " ";
		++begin;
	}
	vector<Item> items;
	string item_name = "song";
	for (int i = 0; i < 10; ++i)
	{
		Item item(item_name);
		items.push_back(item);
	}
	auto b = items.begin(),e = items.end();
	while(b!=e)
	{
		cout << b->name << endl;
		++b;
	}

	return 0;
}