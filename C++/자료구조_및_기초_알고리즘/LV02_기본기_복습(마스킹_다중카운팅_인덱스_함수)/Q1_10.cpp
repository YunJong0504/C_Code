#include <iostream>
using namespace std;

int arr[11] = { 3,4,1,1,2,6,8,7,8,9,10 };

int getSum(int idx)
{
	int sum = 0;
	for (int i = idx; i < (idx + 5); i++)
	{
		sum += arr[i];
	}

	return sum;
}

int main()
{
	int index;
	cin >> index;

	int sum = getSum(index);
	cout << sum;

	return 0;
}
