#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char a[11], b[11], c[11];
	cin >> a >> b >> c;
	
	if (strcmp(a, b) == 0 && strcmp(b, c) == 0)
	{
		cout << "WOW";
	}
	else if (strcmp(a, b) == 0 || strcmp(a, c) == 0 || strcmp(b, c) == 0)
	{
		cout << "GOOD";
	}
	else
	{
		cout << "BAD";
	}

	return 0;
}
