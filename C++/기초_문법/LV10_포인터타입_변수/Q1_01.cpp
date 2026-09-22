#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int arr[4][4] = {};
	int a = 1;
	
	if (num % 2 == 0)
	{
		for (int i = 0; i < 4; i++)
		{
			arr[i][i] = a;
			a++;
		}
	}
	else
	{
		for (int i = 0; i < 4; i++)
		{
			arr[i][3 - i] = a;
			a++;
		}
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << arr[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}
