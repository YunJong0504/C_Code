#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int arr1[4] = { 3,5,9,10 };
	int arr2[4] = { 2,6,9,11 };
	int result[8];

	int idx1 = 0, index2 = 0, indexResult = 0;

	for (int i = 0; i < 8; i++)
	{
		if (idx1 < 4 && index2 < 4)
		{
			if (arr1[idx1] < arr2[index2])
			{
				result[indexResult] = arr1[idx1];
				idx1++;
			}
			else
			{
				result[indexResult] = arr2[index2];
				index2++;
			}
		}
		else if (idx1 < 4)
		{
			result[indexResult] = arr1[idx1];
			idx1++;
		}
		else
		{
			result[indexResult] = arr2[index2];
			index2++;
		}
		indexResult++;
	}

	for (int i = 0; i < 8; i++)
	{
		cout << result[i] << " ";
	}

	return 0;
}
