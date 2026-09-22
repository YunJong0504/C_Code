#include <iostream>
using namespace std;

void Input(int vect[2][2])
{
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			cin >> vect[y][x];
		}
	}
}

void Find(int a, int arr[6])
{
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == a)
		{
			cout << "OK ";
			return;
		}
	}
	cout << "NO ";
}

int main()
{
	int arr[6] = { 3,7,4,1,2,6 };
	int univer[2][2] = {};

	Input(univer);

	for (int y = 0; y < 2; y++) 
	{
		for (int x = 0; x < 2; x++)
		{
			Find(univer[y][x], arr);
		}
		cout << endl;
	}

	return 0;
}
