#include <iostream>
using namespace std;

void output(int n)
{
	if (n == 0)
		return;
	output(n / 2);
	cout << n << " ";
}

int main()
{
	int n;
	cin >> n;

	output(n);

	return 0;
}
