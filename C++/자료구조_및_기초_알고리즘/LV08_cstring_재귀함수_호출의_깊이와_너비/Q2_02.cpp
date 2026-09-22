#include <iostream>
#include <cstring>
using namespace std;

int arr[3][4] =
{
	3,4,1,5,
	3,4,1,3,
	5,2,3,6
};

int main()
{
	int sum[4] = {};
	int idx;
	cin >> idx;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum[i] += arr[j][i];
		}
	}
	cout << sum[idx];

	return 0;
}
