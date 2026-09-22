#include <iostream>
using namespace std;

int Back[6] = {};

void Step(int n)
{
	cout << Back[n] << " ";
	if (n == 5)
		return;
	Step(n + 1);
	cout << Back[n] << " ";
}

int main()
{
	for (int i = 0; i < 6; i++)
	{
		cin >> Back[i];
	}
	int n = 0;
	Step(n);

	return 0;
}
