#include <iostream>
using namespace std;

int main()
{
	char arr[2][6] =
	{
		{'4','5','7','1','3','2'},
		{'D','F','Q','W','G','Z'}
	};
	char num;
	cin >> num;

	for (int i = 0; i < 6; i++)
	{
		if (arr[0][i] == num)
		{
			cout << arr[1][i];
			break;
		}
	}

	return 0;
}
