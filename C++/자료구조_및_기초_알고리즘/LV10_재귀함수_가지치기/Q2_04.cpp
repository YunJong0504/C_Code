#include <iostream>
#include <cstring>
using namespace std;

int arr[3][4] = 
{
	3,5,4,1,
	1,1,2,3,
	6,7,1,2
};
int vect[4] = {};

int main()
{
	for (int i = 0; i < 4; i++)
	{
		cin >> vect[i];
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (arr[y][x] == vect[0])
				arr[y][x] = -1;
			else if (arr[y][x] == vect[1])
				arr[y][x] = -2;
			else if (arr[y][x] == vect[2])
				arr[y][x] = -3;
			else if (arr[y][x] == vect[3])
				arr[y][x] = -4;
		}
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (arr[y][x] == -1)
				arr[y][x] = vect[1];
			else if (arr[y][x] == -2)
				arr[y][x] = vect[2];
			else if (arr[y][x] == -3)
				arr[y][x] = vect[3];
			else if (arr[y][x] == -4)
				arr[y][x] = vect[0];
		}
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << arr[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}
