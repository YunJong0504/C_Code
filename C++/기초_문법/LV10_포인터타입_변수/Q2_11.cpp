#include <iostream>
using namespace std;

int main()
{
	int arr[4][4] = { {1,3,6,2},{4,2,4,5},{6,3,7,3},{1,5,4,6} };
	int num;
	cin >> num;
	int select[16] = {};
	int s = 0;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (arr[y][x] > num)
			{
				select[s] = arr[y][x];
				s++;
			}
		}
	}

	for (int i = 0; i < 16; i++)
	{
		if (select[i] == 0)
			break;
		cout << select[i] << " ";
	}

	return 0;
}
