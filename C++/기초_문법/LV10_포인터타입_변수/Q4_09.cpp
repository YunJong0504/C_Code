#include <iostream>
using namespace std;

int main()
{
	int arr[3][3] = { {3,1,6},{7,8,4},{9,2,3} };
	int a, b, c;
	cin >> a >> b >> c;
	arr[a][b] = c;

	int MAX = 0;
	int MIN = INT_MAX;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (MAX < arr[y][x])
				MAX = arr[y][x];
		}
	}
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (MIN > arr[y][x])
				MIN = arr[y][x];
		}
	}
	
	cout << MAX + MIN;

	return 0;
}
