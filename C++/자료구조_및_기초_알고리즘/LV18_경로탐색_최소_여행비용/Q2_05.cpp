#include <iostream>
#include <algorithm>
using namespace std;

char value[5] = "AGFT";
char path[5] = "";
int num = 0;

void run(int n)
{
	if (n == num)
	{
		std::cout << path << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		path[n] = value[i];
		run(n + 1);
		path[n] = 0;
	}
}

int main()
{
	cin >> num;
	run(0);

	return 0;
}
