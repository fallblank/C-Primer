/*
*About wchar_t
*/
#include <string>
#include <fstream>

int main(int argc, char const *argv[])
{
	std::ofstream out("./test.txt");
	out << "洛阳亲友如相问,\n我在洛阳无亲友。\n";
	return 0;
}