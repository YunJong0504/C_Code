#include <iostream>
using namespace std;

void isExist(char a, char b, char arr[2][7])
{
	int flag1 = 0;
	int flag2 = 0;
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 7; x++)
		{
			if (arr[y][x] == a)
				flag1 = 1;
			if (arr[y][x] == b)
				flag2 = 1;
		}
	}
	if (flag1 == 1)
		cout << a << " : 존재" << endl;
	else
		cout << a << " : 없음" << endl;

	if (flag2 == 1)
		cout << b << " : 존재" << endl;
	else
		cout << b << " : 없음" << endl;
}

int main()
{
	char arr[2][7] = { "A79TkQ", "MINCOD" };
	char ch1, ch2;
	cin >> ch1 >> ch2;

	isExist(ch1, ch2, arr);

	return 0;
}
