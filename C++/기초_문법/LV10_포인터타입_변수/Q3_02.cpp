#include <iostream>
using namespace std;

int main()
{
	int arr[5][5] = {};
	int a = 1;
	for (int x = 4; x >= 0; x--)
	{
		for (int y = 0; y < 5; y++)
		{
			arr[y][x] = a;
			a++;
		}
	}

	int num;
	cin >> num;

	for (int x = 0; x < 5; x++)
	{
		arr[num][x] = num;
	}

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			cout << arr[y][x] << " ";
		}
		cout << endl;
	}
	

	return 0;
}
