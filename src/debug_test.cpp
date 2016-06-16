/**
* DEBUG 测试
*/

#include "fallblank.h"
#include <cassert>
#define NDEBUG

int main(int argc, char const *argv[])
{
	assert(1>0);
	cout << __FILE__ <<endl;
	cout << __LINE__ <<endl;
	cout << __TIME__ <<endl;
	cout << __DATE__ <<endl;
	cout <<__func__ <<endl;
	return 0;
}