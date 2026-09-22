#include <iostream>
using namespace std;

int main()
{
	char arr[20] = {};
	char a, b;
	cin >> arr;
	cin >> a >> b;

	int len = strlen(arr);

	for (int i = 0; i < len; i++)
	{
		if (arr[i] == a)
			arr[i] = b;
	}

	cout << arr;

	return 0;
}
