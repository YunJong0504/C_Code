#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[3][11] = {};
	cin >> str[0] >> str[1] >> str[2];

	int len[3] = {};
	for (int i = 0; i < 3; i++)
	{
		len[i] = strlen(str[i]);
	}

	int idx = 0;
	int max = INT_MIN;
	for (int i = 0; i < 3; i++)
	{
		if (len[i] > max)
		{
			max = len[i];
			idx = i;
		}
	}

	char temp[11] = {};
	strcpy_s(temp, str[0]);
	strcpy_s(str[0], str[idx]);
	strcpy_s(str[idx], temp);

	for (int i = 0; i < 3; i++)
	{
		cout << str[i] << endl;
	}

	return 0;
}
