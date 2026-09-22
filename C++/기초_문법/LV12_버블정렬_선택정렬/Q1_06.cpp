#include <iostream>
using namespace std;

int main()
{
	char arr[3][9] = { "BBQWORLD","KFCAPPLE","LOT" };
	char ch;
	cin >> ch;
	int count = 0;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 9; x++)
		{
			if (arr[y][x] == ch)
			{
				count++;
			}
		}
	}

	cout << count;

	return 0;

}
