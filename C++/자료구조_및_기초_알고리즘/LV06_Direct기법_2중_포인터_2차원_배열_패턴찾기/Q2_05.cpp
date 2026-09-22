#include <iostream>
using namespace std;

struct sketchbook
{
	char image[3][3];

	void Input()
	{
		for (int y = 0; y < 3; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				cin >> image[y][x];
			}
		}
	}
	void Output()
	{
		int idx[256] = {};
		for (int y = 0; y < 3; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				idx[image[y][x]]++;
			}
		}
		for (int i = 0; i < 256; i++)
		{
			if (idx[i] != 0)
			{
				cout << (char)i;
			}
		}
	}
};

int main()
{
	sketchbook s;
	s.Input();
	s.Output();

	return 0;
}
