#include <iostream>
using namespace std;

char aToZ()
{
	char a;
	cin >> a;

	if (a >= 'A' && a <= 'M')
		return 'A';
	else if (a >= 'N' && a <= 'Z')
		return 'Z';
}

int main()
{
	char ch = aToZ();

	cout << ch;

	return 0;
}
