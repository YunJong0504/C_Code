#include <iostream>
#include <cstring>
using namespace std;

char str[5][3] = {};
int Ay, Ax, Ty, Tx, Ky, Kx;

void Directing(char ch, string d)
{
	if (ch == 'A')
	{
		if (d == "UP")
		{
			Ay--;
		}
		else if (d == "DOWN")
		{
			Ay++;
		}
		else if (d == "LEFT")
		{
			Ax--;
		}
		else if (d == "RIGHT")
		{
			Ax++;
		}
	}
	else if (ch == 'T')
	{
		if (d == "UP")
		{
			Ty--;
		}
		else if (d == "DOWN")
		{
			Ty++;
		}
		else if (d == "LEFT")
		{
			Tx--;
		}
		else if (d == "RIGHT")
		{
			Tx++;
		}
	}
	else if (ch == 'K')
	{
		if (d == "UP")
		{
			Ky--;
		}
		else if (d == "DOWN")
		{
			Ky++;
		}
		else if (d == "LEFT")
		{
			Kx--;
		}
		else if (d == "RIGHT")
		{
			Kx++;
		}
	}
}

int main()
{
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			str[y][x] = '_';
		}
	}

	Ay = 2; Ax = 0;
	Ty = 2; Tx = 1;
	Ky = 2; Kx = 2;

	for (int i = 0; i < 7; i++)
	{
		char ch;
		string direct;
		cin >> ch >> direct;
		Directing(ch, direct);
	}

	str[Ay][Ax] = 'A';
	str[Ty][Tx] = 'T';
	str[Ky][Kx] = 'K';

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cout << str[y][x];
		}
		cout << endl;
	}

	return 0;
}
