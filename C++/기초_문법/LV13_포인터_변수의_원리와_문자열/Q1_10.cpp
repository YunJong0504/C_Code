#include <iostream>
using namespace std;

int main()
{
	char arr1[7] = { 'A','B','C','Z','E','T','Q' };
	char black[6] = {};
	cin >> black;

	for (int y = 0; y < 5; y++)
	{
		int flag = 0;
		for (int x = 0; x < 7; x++)
		{
			if (black[y] == arr1[x])
			{
				flag++;
				break;
			}
		}
		if (flag == 1)
			cout << black[y] << "=마을사람" << endl;
		else
			cout << black[y] << "=외부사람" << endl;
	}

	return 0;
}
