#include <iostream>
using namespace std;

void input(int arr[])
{
	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}
}

void output(int arr[])
{
	for (int i = 0; i < 8; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int arr1[4] = {};
	int arr2[4] = {};
	int result[8] = {};
	input(arr1);
	input(arr2);

	int n = 0;
	for (int i = 0; i < 4; i++)
	{
		if (arr1[i] > arr2[i])
		{
			result[n++] = arr2[i];
			result[n++] = arr1[i];
		}
		else if (arr1[i] < arr2[i])
		{
			result[n++] = arr1[i];
			result[n++] = arr2[i];
		}
		else
		{
			result[n++] = arr1[i];
			result[n++] = arr2[i];
		}
	}
	output(result);

	return 0;
}
