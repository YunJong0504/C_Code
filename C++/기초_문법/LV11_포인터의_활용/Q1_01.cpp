#include <iostream>
using namespace std;

void ABC(int a, int b, int* sum, int* gop)
{
	*sum = a + b;
	*gop = a * b;
}

int main()
{
	int a, b;
	cin >> a >> b;

	int SUM = 0;
	int GOP = 0;

	ABC(a, b, &SUM, &GOP);

	cout << SUM << " " << GOP;

	return 0;
}
