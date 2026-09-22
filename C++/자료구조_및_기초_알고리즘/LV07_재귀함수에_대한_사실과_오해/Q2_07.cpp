#include <iostream>
using namespace std;

int main()
{
	char str[256] = {};
	cin >> str;

	int n = strlen(str);

	for (int j = 1; j <= n; j++)
	{
		for (int i = 0; i < j; i++)
		{
			cout << str[i];
		}
		cout << endl;
	}

	return 0;
}
