#include <iostream>
using namespace std;

void max(int* idx, char arr[], int len)
{
	char mx = 'A';
	for (int i = 0; i < len; i++)
	{
		if (arr[i] >= mx)
		{
			mx = arr[i];
			*idx = i;
		}
	}
}
void min(int* idx, char arr[], int len)
{
	char mn = 'Z';
	for (int i = 0; i < len; i++)
	{
		if (arr[i] <= mn)
		{
			mn = arr[i];
			*idx = i;
		}
	}
}

int main()
{
	char arr[11] = {};
	cin >> arr;

	int maxIdx, minIdx;
	int len = strlen(arr);

	max(&maxIdx, arr, len);
	min(&minIdx, arr, len);

	cout << maxIdx << endl;
	cout << minIdx << endl;

	return 0;
}
