#include <iostream>
using namespace std;

int main()
{
	char arr[5][11] = {};
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	int len[5] = {};
	for (int i = 0; i < 5; i++)
	{
		len[i] = strlen(arr[i]);
	}
	int MAX = INT_MIN;
	int idx = 0;

	for (int i = 0; i < 5; i++)
	{
		if (len[i] > MAX)
		{
			MAX = len[i];
			idx = i;
		}
	}

	cout << arr[idx];

	return 0;
}
