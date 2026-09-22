#include <iostream>
#include <cstring>
using namespace std;

int arr[5] = { 3,5,1,9,7 };
char direct[4] = {};

int main()
{
	for (int i = 0; i < 4; i++)
	{
		cin >> direct[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (direct[i] == 'R')
		{
			int temp = arr[4];
			for (int i = 3; i >= 0; i--)
			{
				arr[i + 1] = arr[i];
			}
			arr[0] = temp;
		}
		else if (direct[i] == 'L')
		{
			int temp = arr[0];
			for (int i = 1; i <= 4; i++)
			{
				arr[i - 1] = arr[i];
			}
			arr[4] = temp;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
