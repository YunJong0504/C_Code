#include <iostream>
#include <queue>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int cnt = 0;
    int maxcnt = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '~')
		{
			cnt++;

			if (cnt > maxcnt)
			{
				maxcnt = cnt;
			}
		}
		else
		{
			cnt = 0;
		}
	}

	cout << maxcnt;

    return 0;
}
