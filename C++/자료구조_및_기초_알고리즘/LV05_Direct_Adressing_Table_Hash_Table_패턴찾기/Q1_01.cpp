#include <iostream>
using namespace std;

int main()
{
	char str[16] = {};
	cin >> str;

	int arr[256] = {};
	for (int i = 0; i < 16; i++)
	{
		if (str[i] == 0)
		{
			break;
		}
		char idx = str[i];
		arr[idx]++;
	}

	int count = 0;
	for (int i = 0; i < 256; i++)
	{
		if (arr[i] != 0)
		{
			count++;
		}
	}

	cout << count;

	return 0;
}
