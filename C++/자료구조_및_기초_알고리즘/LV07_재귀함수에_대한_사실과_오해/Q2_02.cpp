#include <iostream>
using namespace std;

int main()
{
	char str[11] = {};

	cin >> str;

	int n = strlen(str);

	for(int j = n - 1; j >= 0; j--)
	{
		for (int i = j; i < n; i++)
		{
			cout << str[i];
		}
		cout << endl;
	}

	return 0;
}
