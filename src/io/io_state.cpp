#include <iostream>

using namespace  std;

int main(int argc, char const *argv[])
{
	int number[10];
	int i =0;
	while(cin>>number[i++]) continue;
	cout << cin.rdstate() << endl;	
}