#include <iostream>
using namespace std;

char str[11] = {};
int idx[256] = {};

void FindMax()
{
	int max = INT_MIN;
	int index = 0;
	for (int i = 0; i < 256; i++)
	{
		if (idx[i] > max)
		{
			max = idx[i];
			index = i;
		}
	}

	cout << (char)index;
}

int main()
{
	cin >> str;
	for (int i = 0; i < 11; i++)
	{
		idx[str[i]]++;
	}
	FindMax();

	return 0;
}
