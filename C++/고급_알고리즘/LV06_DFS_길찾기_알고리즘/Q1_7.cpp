#include <iostream>
#include <string>
using namespace std;

int num[5] = {};
int path[5] = {};
bool used[5] = {};

int MAX = INT_MIN;
int MIN = INT_MAX;

void run(int level)
{
    if (level == 5)
    {
		int result = path[0] * path[1] - path[2] * path[3] + path[4];

        if (result > MAX)
            MAX = result;
        else if (result < MIN)
            MIN = result;

        return;
    }

    for (int i = 0; i < 5; i++)
    {
		if (used[i]) continue;

        used[i] = true;
		path[level] = num[i];
		run(level + 1);
        used[i] = false;
        path[level] = 0;
    }
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
    }
    run(0);

    cout << MAX << endl;
    cout << MIN << endl;

    return 0;
}
