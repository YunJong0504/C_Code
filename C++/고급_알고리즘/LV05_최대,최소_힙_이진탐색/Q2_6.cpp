#include <iostream>
#include <queue>
using namespace std;

int card[4] = {};
bool used[4] = {};
int cnt = 0;

void run(int level, int number)
{
    if (level == 4)
    {
        if (number > 3000)
            cnt++;

        return;
    }

    for (int i = 0; i < 4; i++)
    {
		if (used[i]) continue;

        used[i] = true;
        run(level + 1, number * 10 + card[i]);
        used[i] = false;
    }
}

int main()
{
	for (int i = 0; i < 4; i++)
		cin >> card[i];
    
    run(0, 0);
    cout << cnt << endl;

    return 0;
}
