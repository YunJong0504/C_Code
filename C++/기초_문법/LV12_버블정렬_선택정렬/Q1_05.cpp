#include <iostream>
using namespace std;

int main()
{
	char arr[10] = {};
	cin >> arr;

	for (int i = 1; i < 10; i++)
	{
		if (arr[i] == 0)
			break;
		char temp = arr[i];
		int j = 0;
		for (j = i - 1; j >= 0; j--)
		{
			if (arr[j] > temp)
				arr[j + 1] = arr[j];
			else
				break;
		}
		arr[j + 1] = temp;
	}

	cout << arr;

	return 0;

}
