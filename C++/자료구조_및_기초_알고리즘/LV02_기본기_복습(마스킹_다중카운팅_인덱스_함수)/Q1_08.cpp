#include <iostream>
using namespace std;

int vect[3][3] = { {3,7,4},{2,2,4},{2,2,5} };
int target[3] = {};
int cnt[3] = {};

void Count()
{
	for (int i = 0; i < 3; i++)
	{
		for (int y = 0; y < 3; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				if (target[i] == vect[y][x])
				{
					cnt[i]++;
				}
			}
		}
	}
}
void Find()
{
	int idx = 0;
	int max = INT_MIN;
	for (int i = 0; i < 3; i++)
	{
		if (cnt[i] > max)
		{
			max = cnt[i];
			idx = i;
		}
	}
	cout << target[idx];
}

int main()
{
	for (int i = 0; i < 3; i++)
	{
		cin >> target[i];
	}
	Count();
	Find();

	return 0;
}
