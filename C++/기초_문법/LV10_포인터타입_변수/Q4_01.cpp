#include <iostream>
using namespace std;

int main()
{
	char arr[6] = { 'D','F','G','D','A','Q' };
	char ch1, ch2;
	cin >> ch1 >> ch2;

	for (int i = 0; i < 6; i++)
	{
		if (arr[i] >= ch1 && arr[i] <= ch2)
		{
			cout << "발견!!";
			break;
		}
	}

	return 0;
}
