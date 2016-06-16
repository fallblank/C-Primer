#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>

using std::string;
using std::cout;
using std::endl;

string spliter(const string &s, const char seperator,int);
void convert(const string &s,char*);

int main(int argc, char const *argv[])
{
	if (argc==1)
	{
		cout << "No input file" << endl;
		return 0;
	}

	string path(argv[1]);
	string file_name = spliter(path,'\\',1);
	string name = spliter(file_name,'.',0);
	string cmd_str = "g++ -Wall -std=c++11 -o ../bin/"+name+" "+path;
	int length = cmd_str.size();
	char cmd[length+1];
	convert(cmd_str,cmd);
	int code =  system(cmd);
	if (code != 0)
	{
		system("pause");
	}
	return 0;
}


string spliter(const string &s, const char seperator,int flag)
{
	int j=0;
	int length = s.size();
	for (int i = 0; i < length; ++i)
	{
		if (s[i]==seperator)
		{
			j=i;
		}
	}
	if (flag == 0)
	{
		return s.substr(0,j);
	}
	return s.substr(j+1,length);

}

void convert(const string &s,char* c_s){
	int length = s.size();
	for (int i = 0; i < length; ++i)
	{
		c_s[i] = s[i];
	}
	c_s[length] = '\0';
}



