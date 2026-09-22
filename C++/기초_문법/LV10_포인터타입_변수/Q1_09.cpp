#include <iostream>
using namespace std;

int input()
{
	int a;
	cin >> a;

	return a;
}

int main()
{
	int num = input();

	for (int i = num; i >= 1; i--)
	{
		cout << i << " ";
	}

	return 0;
}
