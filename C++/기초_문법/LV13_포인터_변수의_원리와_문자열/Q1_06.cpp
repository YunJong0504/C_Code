#include <iostream>
using namespace std;

int main()
{
	int arr[6] = {};
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}

	int flag = 0;

	for (int i = 0; i < 5; i++)
	{
		if ((arr[i] - arr[i + 1]) >= 3 || (arr[i] - arr[i + 1]) <= -3)
		{
			flag++;
			break;
		}
	}

	if (flag == 1)
	{
		cout << "재배치필요";
	}
	else if (flag == 0)
	{
		cout << "완벽한배치";
	}

	return 0;
}
