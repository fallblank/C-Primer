/*
*用迭代器实现二分查找
*/

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> sorted_array;
	int front,behind;
	cin >> front;
	while(cin >> behind){
		sorted_array.push_back(front);
		front = behind;
	}
	auto cb = sorted_array.cbegin(),ce = sorted_array.cend();
	auto mid = cb + (ce-cb)/2;
	while(mid!=ce){
		if (behind>*mid)	cb = mid+1;
		else if (behind<*mid)	ce = mid;
		else{
			cout << "Find:"<< behind<< " location:"<<mid-sorted_array.cbegin() +1 <<endl;
			break;
		}
		mid = cb + (ce-cb)/2;
	}
	if (cb == ce)
	{
		cout << "un-find:" << behind <<endl;
	}
	return 0;
}