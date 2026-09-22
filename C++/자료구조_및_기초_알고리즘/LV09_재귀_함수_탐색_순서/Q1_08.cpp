#include <iostream>
#include <cstring>
using namespace std;

int arr[3][2][2] = { {{2,4},{1,5}}, {{2,3},{3,6}}, {{7,3},{1,5}} };

int main()
{
	int n;
	cin >> n;

	int max = INT_MIN;
	int min = INT_MAX;
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			if (arr[n][y][x] > max)
			{
				max = arr[n][y][x];
			}
			if (arr[n][y][x] < min)
			{
				min = arr[n][y][x];
			}
		}
	}
	cout << "MAX=" << max << endl;
	cout << "MIN=" << min << endl;

	return 0;
}
