#include <iostream>
using namespace std;

char scoring()
{
	int a;
	cin >> a;

	if (a >= 90)
	{
		return 'A';
	}
	else if (a >= 80 && a < 90)
	{
		return 'B';
	}
	else if (a >= 70 && a < 80)
	{
		return 'C';
	}
	else
		return 'D';
}

int main()
{
	char ch = scoring();

	cout << ch;

	return 0;
}
