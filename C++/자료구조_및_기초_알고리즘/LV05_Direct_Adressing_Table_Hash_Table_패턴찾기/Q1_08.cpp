#include <iostream>
using namespace std;

int APT[5][3] =
{
	15,18,17,
	4,6,9,
	10,1,3,
	7,8,9,
	15,2,6
};
int Family[3] = {};

int isPattern(int idx)
{
	for (int i = 0; i < 3; i++)
	{
		if (Family[i] != APT[idx][i])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	for (int i = 0; i < 3; i++)
	{
		cin >> Family[i];
	}
	for (int i = 0; i < 5; i++)
	{
		if (isPattern(i) == 1)
		{
			cout << (5 - i) << "층";
			break;
		}
	}

	return 0;
}
