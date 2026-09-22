#include <iostream>
using namespace std;

char Town[3][3] =
{
	{'C','D','A'},
	{'B','M','Z'},
	{'Q','P','O'}
};

void Find(char black, int* count)
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (black == Town[y][x])
			{
				(*count)++;
				return;
			}
		}
	}
}

int main()
{
	char Black[4] = {};
	for (int i = 0; i < 4; i++)
	{
		cin >> Black[i];
	}
	int Count = 0;
	for (int i = 0; i < 4; i++)
	{
		Find(Black[i], &Count);
	}

	cout << Count << "명";
	return 0;
}
