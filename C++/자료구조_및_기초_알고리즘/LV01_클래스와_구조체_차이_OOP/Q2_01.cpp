#include <iostream>
using namespace std;

void Print(int a, int b, int c)
{
	for(int j = 0; j < c; j++)
	{
		for (int i = a; i <= b; i++)
		{
			cout << i << " ";
		}
		cout << endl;
	}
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	Print(a, b, c);

	return 0;
}
