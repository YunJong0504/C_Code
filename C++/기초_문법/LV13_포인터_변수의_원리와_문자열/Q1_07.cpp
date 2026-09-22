#include <iostream>
using namespace std;

int main()
{
	char arr[2][11] = {};
	cin >> arr[0] >> arr[1];
	int len[2] = {};

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (arr[i][j] == 0)
				break;
			len[i]++;
		}
	}

	int flag = 0;

	if (len[0] != len[1])
		flag++;
	else if (len[0] == len[1])
	{
		for (int i = 0; i < len[0]; i++)
		{
			if (arr[i] != arr[(len[0] - 1) - i])
			{
				flag++;
				break;
			}
		}
	}

	if (flag == 1)
		cout << "거울문장아님";
	else
		cout << "거울문장"; 

	return 0;
}
