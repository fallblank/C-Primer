/**
*引用传参
*/

#include "fallblank.h"

string::size_type find_char(const string&,const char,string::size_type&);

int main(int argc, char const *argv[])
{
	string s = "songzhengteng";
	string::size_type occurs = 0,first_location;
	first_location = find_char(s,'g',occurs);
	cout << "first_occur: " << first_location << " times: "<< occurs <<endl; 
	return 0;
}

string::size_type find_char(const string &s,const char c,string::size_type &occur)
{
	occur = 0;
	auto ret = s.size();
	for (decltype(ret) i = 0; i < s.size(); ++i)
	{
		if (c==s[i])
		{
			if (s.size() == ret)
			{
				ret = i;
			}
			occur ++;
		}
	}
	return ret;
}