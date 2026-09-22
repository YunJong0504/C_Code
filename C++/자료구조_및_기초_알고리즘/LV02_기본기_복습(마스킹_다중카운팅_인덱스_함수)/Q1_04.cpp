#include <iostream>
using namespace std;

void isExist(int arr[3][3], int num[3])
{
	int flag[3] = {};
	for (int i = 0; i < 3; i++)
	{
		for (int y = 0; y < 3; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				if (arr[y][x] == num[i])
				{
					flag[i] = 1;
				}
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (flag[i] == 1)
			cout << num[i] << ":존재" << endl;
		else
			cout << num[i] << ":미발견" << endl;
	}
}

int main()
{
	int arr[3][3] = { {3,5,9},{4,2,1},{5,1,5} };
	int num[3] = {};
	for (int i = 0; i < 3; i++)
	{
		cin >> num[i];
	}

	isExist(arr, num);

	return 0;
}
