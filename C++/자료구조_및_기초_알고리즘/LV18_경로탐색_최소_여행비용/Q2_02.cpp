#include <iostream>
#include <queue>
using namespace std;

char value[2] = { 'o', 'x' };
char path[10] = "";
int num = 0;

void run(int n)
{
	if (n == num)
	{
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 2; i++)
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
