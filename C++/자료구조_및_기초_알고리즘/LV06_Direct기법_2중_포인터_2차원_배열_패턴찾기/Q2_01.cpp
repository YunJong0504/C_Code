#include <iostream>
using namespace std;

void BBQ(int* x, int* y)
{
	int arr[5] = {};
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	int max = INT_MIN;
	int min = INT_MAX;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			*x = max;
		}
		if (arr[i] < min)
		{
			min = arr[i];
			*y = min;
		}
	}

}

int main()
{
	int a, b;
	BBQ(&a, &b);

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	return 0;
}
