#include <iostream>
using namespace std;

int main()
{
	int arr[6] = {};
	cin >> arr[0] >> arr[1];

	for (int i = 2; i < 6; i++)
	{
		arr[i] = arr[i - 2] * arr[i - 1];
	}

	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
