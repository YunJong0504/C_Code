#include <iostream>
#include <cstring>
using namespace std;

int vect[8] = {};

int main()
{
	for (int i = 0; i < 8; i++)
	{
		cin >> vect[i];
	}

	int a = 0;
	int b = 0;
	while (true)
	{
		for (int i = 1; i < 8; i++)
		{
			if (vect[i] > vect[0])
			{
				a = i;
				break;
			}
		}
		for (int i = 7; i >= 1; i--)
		{
			if (vect[i] < vect[0])
			{
				b = i;
				break;
			}
		}
		if (b > a)
		{
			int temp;
			temp = vect[a];
			vect[a] = vect[b];
			vect[b] = temp;
		}
		else if (b < a)
		{
			int temp = vect[0];
			vect[0] = vect[b];
			vect[b] = temp;
			break;
		}
	}

	for (int i = 0; i < 8; i++)
	{
		cout << vect[i] << " ";
	}

	return 0;
}
