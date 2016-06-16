#include "Screen.h"
#include <iostream>

int main(int argc, char const *argv[])
{
	Screen screen(10,10,'s');
	screen.scan();
	screen.set(5,2,'c');
	screen.scan();
	return 0;
}