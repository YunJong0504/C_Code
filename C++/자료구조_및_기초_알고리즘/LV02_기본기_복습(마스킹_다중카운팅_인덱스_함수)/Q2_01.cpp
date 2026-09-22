#include <iostream>
using namespace std;

void Input(int arr[7])
{
	for (int i = 0; i < 7; i++)
	{
		cin >> arr[i];
	}
}

void Masking(int vect[7], int bit[7])
{
	for (int i = 0; i < 7; i++)
	{
		if (bit[i] == 0)
		{
			vect[i] = 0;
		}
	}
}

void Output(int arr[7])
{
	for (int i = 0; i < 7; i++)
	{
		if (arr[i] != 0)
		{
			arr[i] = 7;
			cout << arr[i];
		}
		else
		{
			cout << arr[i];
		}
	}
}

int main()
{
	int vect[7] = { 3,5,4,2,6,6,5 };
	int bit[7] = {};

	Input(bit);
	Masking(vect, bit);
	Output(vect);

	return 0;
}
