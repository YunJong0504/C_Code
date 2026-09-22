#include <iostream>
using namespace std;

int win[2][3] = { {3,5,1},{4,2,6} };

void FindWin(int p)
{
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (win[y][x] == p)
			{
				cout << p << "번 합격" << endl;
				return;
			}
		}
	}
	cout << p << "번 불합격" << endl;
}

int main()
{
	int people[4] = {};
	for (int i = 0; i < 4; i++)
	{
		cin >> people[i];
	}

	for (int i = 0; i < 4; i++)
	{
		FindWin(people[i]);
	}

	return 0;
}
