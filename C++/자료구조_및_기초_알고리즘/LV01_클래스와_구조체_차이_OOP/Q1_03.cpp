#include <iostream>
using namespace std;

void Insert(int a, char vect[])
{
	int len = 0;

	for (int i = 0; i < 7; i++)
	{
		if (vect[i] == 0)
			break;
		len++;
	}

	for (int i = len; i >= a; i--)
	{
		vect[i + 1] = vect[i];
	}
	vect[a] = 'A';

	cout << vect;
}

int main()
{
	char arr[7] = {};
	int num;
	cin >> arr >> num;

	Insert(num, arr);

	return 0;
}
