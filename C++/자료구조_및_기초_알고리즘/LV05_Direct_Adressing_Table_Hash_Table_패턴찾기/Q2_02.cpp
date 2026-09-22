#include <iostream>
using namespace std;

int vect[6] = {};
int idx[10] = {};

void Input()
{
	for (int i = 0; i < 6; i++)
	{
		cin >> vect[i];
	}
}

void Hash()
{
	for (int i = 0; i < 6; i++)
	{
		idx[vect[i]]++;
	}
}

void Find()
{
	for (int i = 0; i < 10; i++)
	{
		if (idx[i] >= 2)
		{
			cout << "도플갱어 발견";
			return;
		}
	}
	cout << "미발견";
}

int main()
{
	Input();
	Hash();
	Find();

	return 0;
}
