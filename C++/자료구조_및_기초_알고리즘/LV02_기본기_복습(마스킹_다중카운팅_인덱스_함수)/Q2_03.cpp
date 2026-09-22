#include <iostream>
using namespace std;

int levelTable[4][2] = {
		{10,20},
		{30,60},
		{100,150},
		{200, 300}
};

int main()
{
	int Kcal[6] = {};
	for (int i = 0; i < 6; i++)
	{
		cin >> Kcal[i];
	}

	int count[4] = {};

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 6; x++)
		{
			if (Kcal[x] >= levelTable[y][0] && Kcal[x] <= levelTable[y][1])
			{
				count[y]++;
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		cout << "lev" << i << ":" << count[i] << endl;
	}


	return 0;
}
