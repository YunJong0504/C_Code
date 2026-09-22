#include <iostream>
using namespace std;

void FindABC(char* a, char* b)
{
	int countA = 0;
	int countB = 0;
	int countC = 0;

	for (int i = 0; i < 20; i++)
	{
		if (a[i] == 0 && b[i] == 0)
			break;

		if (a[i] == 'A')
			countA++;
		else if (a[i] == 'B')
			countB++;
		else if (a[i] == 'C')
			countC++;

		if (b[i] == 'A')
			countA++;
		else if (b[i] == 'B')
			countB++;
		else if (b[i] == 'C')
			countC++;

	}
	cout << "A:" << countA << endl;
	cout << "B:" << countB << endl;
	cout << "C:" << countC << endl;
}

int main()
{
	char arr1[20] = {};
	char arr2[20] = {};
	cin >> arr1 >> arr2;

	FindABC(arr1, arr2);

	return 0;
}
