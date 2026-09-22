#include <iostream>
using namespace std;

int main()
{
	char arr[2][7] = {};
	cin >> arr[0] >> arr[1];
	int flag = 0;

	for (int x = 0; x < 7; x++)
	{
		if (arr[0][x] != arr[1][x])
		{
			flag++;
			break;
		}
	}

	if (flag == 1)
	{
		cout << "다름";
	}
	else if (flag == 0)
	{
		cout << "같음";
	}

	return 0;
}
