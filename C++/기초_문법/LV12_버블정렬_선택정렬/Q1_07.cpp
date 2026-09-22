#include <iostream>
using namespace std;

void Magic(int arr[3][3])
{
	int num = 1;
	for (int y = 0; y < 3; y++)
	{
		for (int x = y; x < 3; x++)
		{
			arr[y][x] = num;
			num++;
		}
	}
}

void Output(int arr[3][3])
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] == 0)
				cout << " ";
			else
				cout << arr[y][x];
		}
		cout << endl;
	}
}

int main()
{
	int arr[3][3] = {};

	Magic(arr);
	Output(arr);

	return 0;

}
