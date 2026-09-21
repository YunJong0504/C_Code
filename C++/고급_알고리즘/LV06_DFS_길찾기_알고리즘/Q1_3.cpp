#include <iostream>
#include <queue>
using namespace std;

string arr;
char path[10];

void run(int level)
{
	if (level == 3)
	{
		cout << path << endl;
		return;
	}
	for (int i = 0; i < arr.length(); i++)
	{
		path[level] = arr[i];
		run(level + 1);
		path[level] = 0;
	}
}


int main()
{
	cin >> arr;
	run(0);

    return 0;
}
