#include <iostream>
#include <queue>
using namespace std;

int num[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int cnt = 0;

void run(int level, int n, int sum)
{
	if (level == n)
	{
		if (sum == 7)
		{
			cnt++;
		}

		return;
	}

	for (int i = 0; i < 10; i++)
	{
		run(level + 1, n, sum + num[i]);
	}
}

int main()
{
	int n;
	cin >> n;

	run(0, n, 0);
	cout << cnt << endl;

    return 0;
}
