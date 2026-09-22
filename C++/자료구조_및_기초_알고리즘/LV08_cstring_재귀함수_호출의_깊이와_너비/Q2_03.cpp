#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char arr[10] = {};
	char ch1, ch2;
	cin >> arr >> ch1 >> ch2;
	int len = strlen(arr);

	for (int i = 0; i < len; i++)
	{
		if (arr[i] == ch1 || arr[i] == ch2)
		{
			if (i == 0)
			{
				arr[i + 1] = '#';
			}
			else if (i == len - 1)
			{
				arr[i - 1] = '#';
			}
			else
			{
				arr[i + 1] = '#';
				arr[i - 1] = '#';
			}
		}
	}
	cout << arr;

	return 0;
}
