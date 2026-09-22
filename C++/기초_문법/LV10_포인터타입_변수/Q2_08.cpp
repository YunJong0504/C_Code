#include <iostream>
using namespace std;

int main()
{
	char arr[14] = "StructPointer";
	char ch;
	cin >> ch;
	int flag = 0;

	for (int i = 0; i < 14; i++)
	{
		if (ch == arr[i])
		{
			flag = 1;
			break;
		}
	}

	if (flag == 1)
		cout << "발견";
	else
		cout << "미발견";

	return 0;
}
