#include <iostream>
using namespace std;

int main()
{
	int arr[4] = { 3,5,4,2 };
	int bit[4] = {};
	for (int i = 0; i < 4; i++)
	{
		cin >> bit[i];
	}

	for (int i = 0; i < 4; i++)
	{
		if (bit[i] == 0)
		{
			arr[i] = 0;
		}
	}

	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		sum += arr[i];
	}
	cout << sum;

	return 0;
}
