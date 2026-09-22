#include <iostream>
using namespace std;

int main()
{
	char str[5][3] =
	{
		'A','B','C',
		'A','G','H',
		'H','I','J',
		'K','A','B',
		'A','B','C'
	};
	int idx[256] = {};
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			idx[str[y][x]]++;
		}
	}

	for (int i = 0; i < 256; i++)
	{
		if (idx[i] != 0)
		{
			for (int j = 0; j < idx[i]; j++)
			{
				cout << (char)i;
			}
		}
	}

	return 0;
}
