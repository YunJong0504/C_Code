#include <iostream>
using namespace std;

int main()
{
	char vect[6] = { 'B','T','K','I','G','Z' };
	char target[4] = {};
	for (int i = 0; i < 4; i++)
	{
		cin >> target[i];
	}
	int count = 0;

	for (int y = 0; y < 4; y++)
	{
		for(int x = 0; x < 6; x++)
		{
			if (vect[x] == target[y])
			{
				count++;
			}
		}
	}
	cout << count;

	return 0;
}
