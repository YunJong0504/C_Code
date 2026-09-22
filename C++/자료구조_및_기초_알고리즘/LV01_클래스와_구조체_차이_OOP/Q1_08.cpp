#include <iostream>
using namespace std;

void isExist(char a, char b, char arr[2][3])
{
	int flagA = 0;
	int flagB = 0;

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] == a)
				flagA = 1;
			if (arr[y][x] == b)
				flagB = 1;
		}
	}

	if (flagA + flagB == 0)
		cout << "미발견";
	else if (flagA + flagB == 1)
		cout << "중발견";
	else if (flagA + flagB == 2)
		cout << "대발견";
}

int main()
{
	char vect[2][3] = { {'G','K','T'},{'P','A','C'} };
	char ch1, ch2;
	cin >> ch1 >> ch2;

	isExist(ch1, ch2, vect);

	return 0;
}
