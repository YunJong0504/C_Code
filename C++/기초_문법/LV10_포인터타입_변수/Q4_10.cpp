#include <iostream>
using namespace std;

int main()
{
	int arr[2][3] = {};
	for (int y = 1; y >= 0; y--)
	{
		for (int x = 2; x >= 0; x--)
		{
			cin >> arr[y][x];
		}
	}

	int vect[6] = {};
	int idx = 0;

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			vect[idx] = arr[y][x];
			idx++;
		}
	}

	int temp = vect[0];
	vect[0] = vect[5];
	vect[5] = temp;

	for (int i = 0; i < 6; i++)
	{
		cout << vect[i] << " ";
	}

	return 0;
}
