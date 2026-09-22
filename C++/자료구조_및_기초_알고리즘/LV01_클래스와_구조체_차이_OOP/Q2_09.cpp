#include <iostream>
using namespace std;

int main()
{
	int a, b;
	char ch;
	cin >> a >> b >> ch;

	for (int y = 0; y < (a * 2); y++)
	{
		for (int x = 0; x < b; x++)
		{
			cout << ch;
		}
		cout << endl;
	}

	return 0;
}
