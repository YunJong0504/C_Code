#include <iostream>
using namespace std;

int main()
{
	char ch;
	cin >> ch;

	for (char i = ch - 3; i <= ch + 3; i++)
	{
		if (i < 'A')
		{
			cout << (char)(i + 25);
		}
		else if (i > 'Z')
		{
			cout << (char)(i - 25);
		}
		else
		{
			cout << i;
		}
	}

	return 0;
}
