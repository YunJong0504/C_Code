#include <iostream>
using namespace std;

int main()
{
	int arr1[5] = {};
	int arr2[5] = {};
	int arr3[5] = {};

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			if (y == 0)
				cin >> arr1[x];
			else if (y == 1)
				cin >> arr2[x];
			else if (y == 2)
				cin >> arr3[x];
		}
	}

	int result[5] = {};

	for (int i = 0; i < 5; i++)
	{
		result[i] = (arr1[i] * arr2[i]) + arr3[i];
	}

	for (int i = 0; i < 5; i++)
	{
		cout << result[i] << " ";
	}

	return 0;
}
