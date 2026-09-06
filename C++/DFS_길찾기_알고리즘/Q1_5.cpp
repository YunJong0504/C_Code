#include <iostream>
#include <queue>
using namespace std;

int card[6] = {};
bool used[6];
int cnt = 0;
int evencnt = 0;
int oddcnt = 0;

void run(int level, int answer)
{
	if (level == 4)
	{
		cnt++;
		if (answer % 2 == 0)
			evencnt++;
		else
			oddcnt++;
	}

	for (int i = 0; i < 6; i++)
	{
		if (used[i])
			continue;
		
		used[i] = true;
		run(level + 1, answer * 10 + card[i]);
		used[i] = false;
	}
}

int main()
{
	for (int i = 0; i < 6; i++)
	{
		cin >> card[i];
	}

	run(0, 0);

	cout << cnt << " " << evencnt << " " << oddcnt << endl;

    return 0;
}
