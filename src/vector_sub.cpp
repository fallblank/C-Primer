/*
*迭代器运算：检测iterator-n越界会发生什么
*/

#include <iostream>
#include <vector>

//A bad way
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> int_vector;
	for (int i = 0; i < 10; ++i)
	{
		int_vector.push_back(i);
	}
	auto cb = int_vector.cbegin();
	auto ce = int_vector.cend();
	auto length = ce-cb;
	cout << "length:" << length  << endl;
	if(ce == (cb+length+1)){
		cout << "true" <<endl;
	}else{
		cout << "false" <<endl;
	}
	return 0;
}