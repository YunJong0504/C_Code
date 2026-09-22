#include <iostream>
using namespace std;

int Train[8] = { 3,7,6,4,2,9,1,7 };
int Team[3] = {};

int isPattern(int idx)
{
	for (int i = 0; i < 3; i++)
	{
		if (Train[idx + i] != Team[i])
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
		cin >> Team[i];
	}
	for (int i = 0; i < 6; i++)
	{
		if (isPattern(i) == 1)
		{
			cout << i << "번~" << i + 2 << "번 칸";
		}
	}

	return 0;
}
