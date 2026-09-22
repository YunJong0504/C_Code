#include <iostream>
using namespace std;

void abc(int n, int a)
{
	if (a == 5)
		return;
	a++;;
	abc(n + 2, a);
	cout << n << " ";
}

int main()
{
	int n;
	cin >> n;
	int a = 1;
	abc(n, a);

	return 0;
}
