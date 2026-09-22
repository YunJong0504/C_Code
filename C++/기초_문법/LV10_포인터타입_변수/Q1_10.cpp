#include <iostream>
using namespace std;

int yesOrNo()
{
	int a;
	cin >> a;

	if (a % 3 == 0)
		return 7;
	else if (a % 3 == 1)
		return 35;
	else if (a % 3 == 2)
		return 50;
}

int main()
{
	int num = yesOrNo();

	cout << num;

	return 0;
}
