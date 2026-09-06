#include <iostream>
#include <queue>
using namespace std;

char card[3] = {};
bool used[3] = {};
char path[4] = {};


void run(int level)
{
    if (level == 3)
    {
        cout << path << endl;
        return;
    }

    for (int i = 0; i < 3; i++)
    {
		if (used[i]) continue;

		used[i] = true;
		path[level] = card[i];
		run(level + 1);
		used[i] = false;
        path[level] = 0;
    }
}

int main()
{
	for (int i = 0; i < 3; i++)
		cin >> card[i];
    
    run(0);

    return 0;
}
