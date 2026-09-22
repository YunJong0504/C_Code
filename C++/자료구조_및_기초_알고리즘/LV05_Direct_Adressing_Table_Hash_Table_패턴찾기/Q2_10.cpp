#include <iostream>
using namespace std;

int main()
{
	char str[11] = {};
	int idx[256] = {};
	cin >> str;
	for (int i = 0; i < 11; i++)
	{
		if (str[i] == 0)
			break;
		idx[str[i]]++;
	}
	for (int i = 0; i < 256; i++)
	{
		if (idx[i] != 0)
		{
			cout << (char)i << ":" << idx[i] << endl;
		}
	}

	return 0;
}
