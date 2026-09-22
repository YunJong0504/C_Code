#include <iostream>
using namespace std;

int main()
{
	char arr[2][6] = { "DATAW","BBQK" };
	int num;
	cin >> num;

	if (num % 2 == 1)
	{
		for (int y = 1; y < 6; y++)
		{
			if (arr[0][y] == 0)
				break;
			char temp = arr[0][y];
			int x = 0;
			for (x = y - 1; x >= 0; x--)
			{
				if (arr[0][x] > temp)
					arr[0][x + 1] = arr[0][x];
				else
					break;
			}
			arr[0][x + 1] = temp;
		}
	}
	else if (num % 2 == 0)
	{
		for (int y = 1; y < 6; y++)
		{
			if (arr[1][y] == 0)
				break;
			char temp = arr[1][y];
			int x = 0;
			for (x = y - 1; x >= 0; x--)
			{
				if (arr[1][x] > temp)
					arr[1][x + 1] = arr[1][x];
				else
					break;
			}
			arr[1][x + 1] = temp;
		}
	}

	cout << arr[0] << endl;
	cout << arr[1] << endl;
	
	return 0;
}
