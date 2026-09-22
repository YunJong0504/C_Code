#include <iostream>
using namespace std;

void Masking(int bit[6], int arr[6])
{
	for (int i = 0; i < 6; i++)
	{
		if (bit[i] == 0)
		{
			arr[i] = 0;
		}
	}
}

void FindMin(int arr[6], int* min, int* idx)
{
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] < *min && arr[i] > 0)
		{
			*min = arr[i];
			*idx = i;
		}
	}
}

int main()
{
	int bit[6] = { 1,0,1,0,1,0 };
	int arr[6] = {};
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}

	Masking(bit, arr);

	int min = INT_MAX;
	int idx;
	FindMin(arr, &min, &idx);

	cout << "arr[" << idx << "]=" << min;

	return 0;
}
