#include <iostream>
using namespace std;

char arr[3][4] =
{
	{'A','T','K','B'},
	{'C','Z','F','D'},
	{'H','G','E','I'}
};

void Find(char ch, int dy, int dx)
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (arr[y][x] == ch)
			{
				cout << arr[y + dy][x + dx];
				break;
			}
		}
	}
}

int main()
{
	char ch;
	int offY, offX;
	cin >> ch >> offY >> offX;

	Find(ch, offY, offX);

	return 0;
}
