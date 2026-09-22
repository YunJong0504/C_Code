#include <iostream>
using namespace std;

int main()
{
	char str1[256] = {};
	char str2[256] = {};
	char str3[256] = {};
	cin >> str1 >> str2 >> str3;
	int idx[256] = {};

	for (int i = 0; i < 256; i++)
	{
		if (str1[i] == 0)
			break;
		idx[str1[i]]++;
	}
	for (int i = 0; i < 256; i++)
	{
		if (str2[i] == 0)
			break;
		idx[str2[i]]++;
	}
	for (int i = 0; i < 256; i++)
	{
		if (str3[i] == 0)
			break;
		idx[str3[i]]++;
	}
	for (int i = 1; i < 256; i++)
	{
		if (idx[i] >= 2)
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "Perfect";

	return 0;
}
