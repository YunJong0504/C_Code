#include <iostream>
using namespace std;

int up[5] = {};
int down[5] = {};

void Input()
{
	for (int i = 0; i < 5; i++)
	{
		cin >> up[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cin >> down[i];
	}
}

int main()
{
	Input();

	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		if (up[i] == 1 && down[i] == 1)
		{
			count++;
		}
	}
	cout << count << "개";

	return 0;
}
