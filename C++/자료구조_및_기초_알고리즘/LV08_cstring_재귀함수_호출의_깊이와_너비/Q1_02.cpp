#include <iostream>
#include <cstring>
using namespace std;

char ID[] = "qlqlaqkq";
char PW[] = "tkaruqtkf";

int main()
{
	char L_ID[9];
	char L_PW[10];
	cin >> L_ID >> L_PW;

	if (strcmp(ID, L_ID) == 0)
	{
		cout << "LOGIN";
	}
	else
	{
		cout << "INVALID";
	}

	return 0;
}
