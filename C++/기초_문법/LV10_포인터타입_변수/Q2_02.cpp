#include <iostream>
using namespace std;

int sum(int a, int b)
{
	return a + b;
}

int comp(int a, int b)
{
	return a - b;
}

void print(int t1, int t2)
{
	cout << "합:" << t1 << endl;
	cout << "차:" << t2 << endl;
}

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	int s = sum(num1, num2);
	int c = comp(num1, num2);
	print(s, c);

	return 0;
}
