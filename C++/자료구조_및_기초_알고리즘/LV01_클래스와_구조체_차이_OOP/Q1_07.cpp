#include <iostream>
using namespace std;

bool isExist(char c, char arr[])
{
	for (int i = 0; i < 4; i++)
	{
		if (arr[i] == c)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	char arr[4] = { 'M','T','K','C' };
	char ch;
	cin >> ch;

	bool result = isExist(ch, arr);

	if (result == true)
		cout << "발견";
	else
		cout << "미발견";

	return 0;
}
