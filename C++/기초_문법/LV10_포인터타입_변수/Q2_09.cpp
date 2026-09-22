#include <iostream>
using namespace std;

int main()
{
	char arr[8] = {};
	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
	}
	char big[8] = {};
	char small[8] = {};
	int b = 0;
	int s = 0;

	for (int i = 0; i < 8; i++)
	{
		if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			big[b] = arr[i];
			b++;
		}
		else
		{
			small[s] = arr[i];
			s++;
		}
	}

	cout << "big=";
	for (int i = 0; i < 8; i++)
	{
		if (big[i] == 0)
			break;
		cout << big[i];
	}
	cout << endl;

	cout << "small=";
	for (int i = 0; i < 8; i++)
	{
		if (small[i] == 0)
			break;
		cout << small[i];
	}

	return 0;
}
