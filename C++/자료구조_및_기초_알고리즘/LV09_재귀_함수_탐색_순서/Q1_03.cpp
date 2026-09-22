#include <iostream>
#include <cstring>
using namespace std;

char path[10] = "";
char str[5] = "BGTK";
int level = 0;

void bbq(int n)
{
	if (n == level)
	{
		cout << path << endl;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		path[n] = str[i];
		bbq(n + 1);
		path[n] = 0;
	}
}

int main()
{
	cin >> level;
	bbq(0);

	return 0;
}
