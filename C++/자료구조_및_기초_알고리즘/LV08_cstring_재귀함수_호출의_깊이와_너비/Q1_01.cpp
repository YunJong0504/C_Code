#include <iostream>
using namespace std;

void bbq(int n)
{
	if (n == 3)
	{
		return;
	}

	for(int i = 0; i < 3; i++)
	{
		bbq(n + 1);
	}
}

int main()
{
	bbq(1);

	return 0;
}
