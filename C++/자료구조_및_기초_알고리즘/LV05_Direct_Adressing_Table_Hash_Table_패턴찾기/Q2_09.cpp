#include <iostream>
using namespace std;

int main()
{
	char str[11] = "";
	cin >> str;

	int idx[256] = {};
	for (int i = 0; i < 11; i++)
	{
		if (str[i] == 0)
			break;
		idx[str[i]]++;
	}
	for (int i = 1; i < 256; i++)
	{
		if (idx[i] >= 1)
		{
			cout << (char)i;
		}
	}

	return 0;
}
