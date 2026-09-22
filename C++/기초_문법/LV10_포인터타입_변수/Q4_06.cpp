#include <iostream>
using namespace std;

void CompareGo(int a[5], int b[5])
{
	int flag = 0;
	for (int i = 0; i < 5; i++)
	{
		if (a[i] != b[i])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		cout << "두배열은같지않음";
	else if (flag == 0)
		cout << "두배열은완전같음";
}

int main()
{
	int arr1[5] = { 3,5,1,2,7 };
	int arr2[5] = {};
	for (int i = 0; i < 5; i++)
	{
		cin >> arr2[i];
	}

	CompareGo(arr1, arr2);

	return 0;
}
