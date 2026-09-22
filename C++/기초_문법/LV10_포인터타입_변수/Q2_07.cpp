#include <iostream>
using namespace std;

int main()
{
	int arr[7] = {};
	for (int i = 0; i < 7; i++)
	{
		cin >> arr[i];
	}
	int MAX = 0;
	int MIN = INT_MAX;

	for (int i = 0; i < 7; i++)
	{
		if (MAX < arr[i])
		{
			MAX = arr[i];
		}
	}
	for (int i = 0; i < 7; i++)
	{
		if (MIN > arr[i])
		{
			MIN = arr[i];
		}
	}

	cout << "MAX=" << MAX << endl;
	cout << "MIN=" << MIN;

	return 0;
}
