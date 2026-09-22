#include <iostream>
using namespace std;

int arr[3][3] =
{
	3,5,4,
	1,1,2,
	1,3,9
};

int direct[4][2] =
{
	-1, 0, //상
	1,  0, //하
	0, -1, //좌
	0,  1  //우
};

int Find(int x, int y)
{
	int sum = 0;

	for (int i = 0; i < 4; i++)
	{
		int newY = y + direct[i][0];
		int newX = x + direct[i][1];

		if (newX >= 0 && newX <= 2 && newY >= 0 && newY <= 2)
		{
			sum += arr[newY][newX];
		}
	}

	return sum;
}

int main()
{
	int x, y;
	cin >> y >> x;

	int SUM = Find(y, x);
	cout << SUM;

	return 0;
}
