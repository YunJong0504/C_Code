#include <iostream>
using namespace std;

char FindMany(char str[9])
{
	int arr[256] = {};
	for (int i = 0; i < 9; i++)
	{
		if (str[i] == 0)
			break;
		arr[str[i]]++;
	}
	int MAX = INT_MIN;
	int idx = 0;
	for (int i = 0; i < 256; i++)
	{
		if (arr[i] > MAX)
		{
			MAX = arr[i];
			idx = i;
		}
	}
	return (char)idx;
}

int main()
{
	char str[9] = {};
	cin >> str;

	char First = FindMany(str);
	cout << First;

	return 0;
}
