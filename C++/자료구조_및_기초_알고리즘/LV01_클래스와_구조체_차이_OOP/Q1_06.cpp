#include <iostream>
using namespace std;

int main()
{
	char arr[3][11] = {};
	for (int i = 0; i < 3; i++)
		cin >> arr[i];
	int flag = 0;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 11; x++)
		{
			if (arr[y][x] == 'M')
			{
				flag = 1;
				break;
			}
		}
	}

	if (flag == 1)
		cout << "M이 존재합니다";
	else
		cout << "M이 존재하지 않습니다";

	return 0;
}
