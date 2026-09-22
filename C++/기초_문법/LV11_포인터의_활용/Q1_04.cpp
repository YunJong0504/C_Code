#include <iostream>
using namespace std;

void KFC(int* a, int* b)
{
	char arr[10] = {};
	cin >> arr;
	int countB = 0;
	int countS = 0;

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == 0)
			break;
		else if (arr[i] >= 'A' && arr[i] <= 'Z')
			countB++;
		else if (arr[i] >= 'a' && arr[i] <= 'z')
			countS++;
	}

	*a = countB;
	*b = countS;
}

int main()
{
	int BIG = 0;
	int SMALL = 0;
	KFC(&BIG, &SMALL);

	cout << "대문자" << BIG << "개" << endl;
	cout << "소문자" << SMALL << "개";

	return 0;
}
