#include <iostream>
#include <queue>
using namespace std;

bool used[6];
int a, b;
int cnt = 0;

void run(int level)
{
	if (level == 6)
	{
		cnt++;
		return;
	}

	for (int i = 0; i < 6; i++)
	{
		if (used[i]) continue;

		if (i == 0 && (level + 1 == a || level + 1 == b))
			continue;

		used[i] = true;
		run(level + 1);
		used[i] = false;
	}
}

int main()
{
	cin >> a >> b;
	run(0);
	cout << cnt;

    return 0;
}
