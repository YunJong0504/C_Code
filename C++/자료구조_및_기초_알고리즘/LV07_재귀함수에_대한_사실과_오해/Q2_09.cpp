#include <iostream>
using namespace std;

int arr[4][5] =
{
	3,5,4,2,5,
	3,3,3,2,1,
	3,2,6,7,8,
	9,1,1,3,2,
};

int SUM(int y, int x, int py, int px)
{
	int sum = 0;
	for (int dy = y; dy < y + py; dy++)
	{
		for (int dx = x; dx < x + px; dx++)
		{
			sum += arr[dy][dx];
		}
	}
	return sum;
}

int main()
{
	int py, px;
	cin >> py >> px;

	int max = INT_MIN;
	int dy, dx;

	for (int y = 0; y <= 4 - py; y++)
	{
		for (int x = 0; x <= 5 - px; x++)
		{
			if (SUM(y, x, py, px) > max)
			{
				max = SUM(y, x, py, px);
				dy = y;
				dx = x;
			}
		}
	}
	cout << "(" << dy << "," << dx << ")";

	return 0;
}
