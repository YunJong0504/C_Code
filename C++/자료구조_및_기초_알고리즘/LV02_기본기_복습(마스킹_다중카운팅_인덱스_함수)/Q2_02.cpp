#include <iostream>
using namespace std;

void isSame(int	pw[4], int input[4])
{
	for (int i = 0; i < 4; i++)
	{
		if (pw[i] != input[i])
		{
			cout << "fail";
			return;
		}
	}
	cout << "pass";
}

int main()
{
	int pw[4] = { 3,7,4,9 };
	int input[4] = {};
	for (int i = 0; i < 4; i++)
	{
		cin >> input[i];
	}

	isSame(pw, input);

	return 0;
}
