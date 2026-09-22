#include <iostream>
using namespace std;

void findCharCount(char a, char b, char arr[4][4])
{
	int count = 0;
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (arr[y][x] == a || arr[y][x] == b)
				count++;
		}
	}

	cout << count;
}

int main()
{
	char arr[4][4] =
	{
		{'A','B','K','T'},
		{'K','F','C','F'},
		{'B','B','Q','Q'},
		{'T','P','Z','F'}
	};

	char a, b;
	cin >> a >> b;

	findCharCount(a, b, arr);

	return 0;
}
