#include <iostream>
using namespace std;

int arr[3][3] = { {1,1,1},{1,2,1},{3,6,3} };

int Count(int a)
{
	int c = 0;
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] == a)
				c++;
		}
	}

	return c;
}

int main()
{
	int x;
	cin >> x;

	int count = Count(x);
	cout << count;

	return 0;
}
