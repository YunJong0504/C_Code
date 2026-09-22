#include <iostream>
using namespace std;

int main()
{
	int arr[7] = {};
	for (int i = 0; i < 7; i++)
	{
		cin >> arr[i];
	}

	int n = 4;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[j] << " ";
		}
		cout << endl;
		n++;
	}

	return 0;
}
