#include <iostream>
#include <cstring>
using namespace std;

char str[5][10] =
{
	"Jason",
	"Dr.tom",
	"EXEXI",
	"GK12P",
	"POW"
};

int main()
{
	char PW[10] = {};
	cin >> PW;

	for (int i = 0; i < 5; i++)
	{
		if (strcmp(PW, str[i]) == 0)
		{
			cout << "암호해제";
			return 0;
		}
	}
	cout << "암호틀림";

	return 0;
}
