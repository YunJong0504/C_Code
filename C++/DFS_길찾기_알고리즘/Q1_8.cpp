#include <iostream>
#include <string>
using namespace std;

int coin[3] = { 10, 40, 60 };
int cnt = 0;
int mincnt = INT_MAX;

void run(int level, int num)
{
    if (num <= 0)
    {
		if (cnt < mincnt)
		{
			mincnt = cnt;
		}
        return;
    }

    for (int i = 0; i < 3; i++)
    {
		cnt++;
		run(level + 1, num - coin[i]);
		cnt--;
    }
}

int main()
{
	run(0, 80);
	cout << mincnt;

    return 0;
}
