#include <iostream>
using namespace std;

int main()
{
	char arr[10] = {};
	int idx = 0;
	cin >> arr >> idx;
	int len = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == 0)
			break;
		len++;
	}

	for (int i = idx; i <= len; i++)
	{
		arr[i] = arr[i + 1];
	}

	cout << arr;

	return 0;
}
