#ifndef SCREEN_H
#define SYMBOL

#include <string>
#include <iostream>

class Screen
{
public:
	using pos = std::string::size_type;
private:
	pos cursor = 0;
	pos height= 0,width = 0;
	std::string content;
public:
	Screen() = default;
	Screen(pos ht,pos wd,char c):height(ht),width(wd),content(ht*wd,c){};
	~Screen(){};
public:
	char get() const 
	{
		return content[cursor];
	}

	inline char get(pos ht,pos wd)const;
	bool set(char c)
	{
		if (cursor > (height+1)*(width+1))	return false;
		content[cursor] = c;
		cursor++;
		return true;
	}
	bool set(pos r,pos w,char c)
	{
		if ((r+1)*width+w > content.size())	return false;
		content[(r+1)*width+w] = c;
		cursor = (r+1)*width+w;
		return true;

	}
	Screen &move(pos r,pos c);
	void scan() const;	
};

inline Screen &Screen::move(pos r,pos c)
{
	pos row = r*width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos r,pos c)const
{
	pos row = r*width;
	return content[row + c];
}

 void Screen::scan() const
 {
 	for(pos i =0 ;i<height;i++)
 	{
 		for(pos j = 0; j<width;j++)
 		{
 			std::cout << content[i*width+j];
 		}
 		std::cout << std::endl;
 	}
 }
#endif