#include <iostream>
using namespace std;

int main()
{
	int vect[7] = { 3,5,1,1,2,3,2 };
	int arr[4] = {};
	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}

	int count[4] = {};

	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 7; i++)
		{
			if (arr[j] == vect[i])
			{
				count[j]++;
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		cout << arr[i] << "=" << count[i] << "개" << endl;
	}

	return 0;
}
