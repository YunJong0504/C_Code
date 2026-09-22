#include <iostream>
using namespace std;

int main()
{
	char ch;
	cin >> ch;

	char arr[3][3] = {};


	int b = 2;
	while (b >= 0)
	{
		int a = 0;
		while (a <= 2 - b)
		{
			arr[b][a] = ch;
			ch++;
			a++;
		}
		b--;
	}

	int y = 0;
	while (y < 3)
	{
		int x = 0;
		while (x < 3 - y)
		{
			cout << arr[y][x];
			x++;
		}
		cout << endl;
		y++;
	}

	return 0;
}
