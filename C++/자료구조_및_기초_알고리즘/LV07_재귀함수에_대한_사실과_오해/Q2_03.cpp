#include <iostream>
using namespace std;

int main()
{
	char str[11] = {};
	cin >> str;

	int n = strlen(str);

	if (n % 2 != 0)
	{
		cout << "다른문장";
		return 0;
	}

	for (int i = 0; i < (n / 2); i++)
	{
		if (str[i] != str[i + (n / 2)])
		{
			cout << "다른문장";
			return 0;
		}
	}
	cout << "동일한문장";

	return 0;
}
