#include <iostream>
#include <cstring>
using namespace std;

char UP[5] = "up";
char DOWN[5] = "down";

int main()
{
	int stair = 1;
	char input[5][5] = {};
	for (int i = 0; i < 5; i++)
	{
		cin >> input[i];
	}
	for (int i = 0; i < 5; i++)
	{
		if (strcmp(input[i], UP) == 0)
		{
			stair++;
		}
		else if (strcmp(input[i], DOWN) == 0)
		{
			stair--;
		}
	}
	if (stair >= 0)
	{
		cout << stair;
	}
	else
	{
		cout << "B" << abs(stair) + 1;
	}

	return 0;
}
