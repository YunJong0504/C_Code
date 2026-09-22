#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string str[4] = {};
	for (int i = 0; i < 4; i++)
	{
		cin >> str[i];
	}

	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 3 - j; i++)
		{
			if (str[i].length() > str[i + 1].length())
			{
				string temp = str[i];
				str[i] = str[i + 1];
				str[i + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		cout << str[i] << endl;
	}

	return 0;
}
