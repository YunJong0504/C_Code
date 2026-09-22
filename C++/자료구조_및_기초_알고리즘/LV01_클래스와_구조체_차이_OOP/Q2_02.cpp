#include <iostream>
using namespace std;

int main()
{
	char arr[6][3] = {};
	char ch = 'A';

	for (int x = 2; x >= 0; x--)
	{
		for (int y = 5; y >= 0; y--)
		{
			arr[y][x] = ch;
			ch++;
		}
	}

	int dy, dx;
	cin >> dy >> dx;
	cout << arr[dy][dx];

	return 0;
}
