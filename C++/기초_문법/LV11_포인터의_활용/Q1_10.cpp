#include <iostream>
using namespace std;

int main()
{
	char arr1[7] = {'A','B','C','D','E','F','G'};
	int arr2[7] = { 4,2,5,1,6,7,3 };

	char ch1, ch2;
	cin >> ch1 >> ch2;
	int aidx = ch1 - 'A';
	int bidx = ch2 - 'A';

	int num = 0;

	if (aidx > bidx)
	{
		for (int i = bidx + 1; i < aidx; i++)
		{
			num += arr2[i];
		}
	}
	else if (bidx > aidx)
	{
		for (int i = aidx + 1; i < bidx; i++)
		{
			num += arr2[i];
		}
	}

	cout << num;

	return 0;
}
