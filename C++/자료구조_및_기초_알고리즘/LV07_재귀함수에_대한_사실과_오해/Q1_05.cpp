#include <iostream>
using namespace std;

char str[5] = {};

void output(int n)
{
	if (n == 5)
	{
		cout << endl;
		return;
	}
	cout << str[n];
	output(n + 1);
	cout << str[n];
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		cin >> str[i];
	}
	int n = 0;
	output(n);

	return 0;
}
