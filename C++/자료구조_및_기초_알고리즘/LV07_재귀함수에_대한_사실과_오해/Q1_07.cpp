#include <iostream>
using namespace std;

int arr[8] = { 3,7,4,1,9,4,6,2 };

void output(int n)
{
	cout << arr[n] << " ";
	if (n == 0)
		return;
	output(n - 1);
	cout << arr[n] << " ";
}

int main()
{
	int n;
	cin >> n;

	output(n);

	return 0;
}
