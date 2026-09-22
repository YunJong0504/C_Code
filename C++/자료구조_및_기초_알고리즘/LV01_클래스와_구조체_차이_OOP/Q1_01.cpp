#include <iostream>
using namespace std;

void findChar(char* vect)
{
	for (int i = 0; i < 10; i++)
	{
		if (vect[i] == 0)
		{
			cout << vect[i - 1];
			break;
		}
	}
}

int main()
{
	char arr[3][10] = {};
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 3; i++)
	{
		findChar(arr[i]);
	}

	return 0;
}
