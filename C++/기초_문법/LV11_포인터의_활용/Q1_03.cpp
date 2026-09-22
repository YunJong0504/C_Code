#include <iostream>
using namespace std;

int stringLen(char* ch)
{
	int len = 0;
	for (int i = 0; i < 10; i++)
	{
		if (ch[i] == 0)
		{
			break;
		}
		len++;
	}

	return len;
}

int main()
{
	char arr[10] = {};
	cin >> arr;

	int len = stringLen(arr);

	cout << len << "글자";

	return 0;
}
