#include <iostream>
using namespace std;

void printData(int a)
{
	cout << a << endl;
}
void even(int a)
{
	printData(a * 2);
}

void odd(int a)
{
	printData(a - 10);
}


int main()
{
	int a, b;
	cin >> a >> b;

	if ((a / b) % 2 == 0)
		even(a / b);
	else if ((a / b) % 2 == 1)
		odd(a / b);

	printData(a + b);

	return 0;

}
