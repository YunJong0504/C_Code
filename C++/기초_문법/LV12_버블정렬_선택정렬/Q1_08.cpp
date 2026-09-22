#include <iostream>
using namespace std;

void CountLine(char arr[3][10])
{
	int len[3] = {};

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			if (arr[y][x] == 0)
				break;
			len[y]++;
		}
	}

	cout << len[0] << "=" << arr[0] << endl;
	cout << len[1] << "=" << arr[1] << endl;
	cout << len[2] << "=" << arr[2] << endl;

}

int main()
{
	char arr[3][10] = {};
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}

	CountLine(arr);
	
	return 0;
}
