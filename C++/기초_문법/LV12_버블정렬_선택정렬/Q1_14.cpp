#include <iostream>
using namespace std;

int main()
{
	char arr[2][8] = {};
	for (int i = 0; i < 2; i++)
	{
		cin >> arr[i];
	}
	int count = 0;

	for (int i = 0; i < 8; i++)
	{
		if (arr[0][i] != arr[1][i])
			count++;
	}

	cout << count;
	
	return 0;
}
