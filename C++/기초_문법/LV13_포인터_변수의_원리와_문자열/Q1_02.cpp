#include <iostream>
using namespace std;

int main()
{
	int vect[6] = { 10,50,40,20,30,40 };
	int arr[6] = {};
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}
	int count[6] = {};

	for (int j = 0; j < 6; j++)
	{
		for (int i = 0; i < 6; i++)
		{
			if (arr[j] < vect[i])
			{
				count[j]++;
			}
		}
	}

	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << "=" << count[i] << "개" << endl;
	}

	return 0;
}
