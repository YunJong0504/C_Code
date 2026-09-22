#include <iostream>
using namespace std;

void Find(int idx[])
{
	for (int i = 0; i < 256; i++)
	{
		if (idx[i] >= 3)
		{
			cout << "있음";
			return;
		}
	}
	cout << "없음";
}

char arr[2][3] = { {'G','K','G'},{0,0,0} };

int main()
{
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[1][i];
	}
	int idx[256] = {};
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			idx[arr[y][x]]++;
		}
	}
	Find(idx);

	return 0;
}
