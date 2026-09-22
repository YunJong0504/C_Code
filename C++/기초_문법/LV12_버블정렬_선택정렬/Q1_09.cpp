#include <iostream>
using namespace std;

int main()
{
	char arr[4][6] = {};

	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}

	int flagA = 0;
	int flagB = 0;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 6; x++)
		{
			if (arr[y][x] == 'A')
				flagA = 1;
			else if (arr[y][x] == 'B')
				flagB = 1;
		}
	}

	if (flagA == 0 && flagB == 0)
		cout << "미발견";
	else if (flagA == 0 && flagB == 1)
		cout << "중발견";
	else if (flagA == 1 && flagB == 0)
		cout << "중발견";
	else
		cout << "대발견";
	
	return 0;
}
