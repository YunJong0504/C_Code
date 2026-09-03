#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	char arr[1000][1000];

	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < n; x++)
		{
			cin >> arr[y][x];
		}
	}

	int left = 0;
	int right = n * n - 1;
	int answer = -1;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		int y = mid / n;
		int x = mid % n;

		if (arr[y][x] == '#')
		{
			answer = mid;
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	int y = answer / n;
	int x = answer % n;

	cout << y << " " << x << endl;

	return 0;
}
