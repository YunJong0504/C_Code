#include <iostream>
using namespace std;

void output(int a, int b)
{
	cout << a << " ";
	if (a == b)
		return;
	output(a + 1, b);
	cout << a << " ";
}

int main()
{
	int a, b;
	cin >> a >> b;

	output(a, b);

	return 0;
}
