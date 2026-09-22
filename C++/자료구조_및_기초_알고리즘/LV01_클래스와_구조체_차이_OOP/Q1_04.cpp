#include <iostream>
using namespace std;

int main()
{
	int arr1[4] = {};
	int arr2[4] = {};
	for (int i = 0; i < 4; i++)
		cin >> arr1[i];
	for (int i = 0; i < 4; i++)
		cin >> arr2[i];

	int sum[4] = {};
	for (int i = 0; i < 4; i++)
		sum[i] = arr1[i] + arr2[3 - i];

	for (int i = 0; i < 4; i++)
		cout << sum[i] << " ";


	return 0;
}
