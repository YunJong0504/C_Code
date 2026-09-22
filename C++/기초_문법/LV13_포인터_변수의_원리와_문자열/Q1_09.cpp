#include <iostream>
using namespace std;

int main()
{
	char arr[11] = {};
	cin >> arr;
	int flag = 0;

	for (int i = 0; i < 11; i++)
	{
		if (arr[i] == 0)
			break;
		if (i % 2 == 0)
		{
			if (arr[i] < 'A' || arr[i] > 'Z')
			{
				flag = 1;
				break;
			}
		}
		else
		{
			if (arr[i] < 'a' || arr[i] > 'z')
			{
				flag = 1;
				break;
			}
		}
	}

	if (flag == 0)
		cout << "개구리문장";
	else
		cout << "일반문장";

	return 0;
}
