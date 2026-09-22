#include <iostream>
using namespace std;

char getChar()
{
	char a, b;
	cin >> a >> b;
	if (a >= b)
		return a;
	else if (b >= a)
		return b;
}

int main()
{
	char ch = getChar();
	cout << ch;

	return 0;
}
