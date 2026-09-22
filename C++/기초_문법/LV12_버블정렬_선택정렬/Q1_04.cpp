#include <iostream>
using namespace std;

int main()
{
	int arr[6] = {};
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}

	for (int i = 1; i < 6; i++)
	{
		int temp = arr[i];
		int j = 0;
		for (j = i - 1; j >= 0; j--)
		{
			if (arr[j] < temp)
				arr[j + 1] = arr[j];
			else
				break;
		}
		arr[j + 1] = temp;
	}

	for (int i = 0; i < 6; i++)
	{
		cout << arr[i];
	}

	return 0;

}
