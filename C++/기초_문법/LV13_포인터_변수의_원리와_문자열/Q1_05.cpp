#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	int arr[4] = {};

	for (int i = 3; i >= 0; i--)
	{
		arr[i] = num % 10;
		num /= 10;
	}

	for (int i = 0; i < 4; i++)
	{
		cout << "숫자" << arr[i] << endl;
	}

	return 0;
}
