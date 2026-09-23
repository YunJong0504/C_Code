#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string str;
	int n;

	cin >> str;
	cin >> n;

	sort(str.begin(), str.end());

	int count[26] = {};

	for (int i = str.length() - n; i < str.length(); i++)
	{
		count[str[i] - 'A']++;
	}

	int maxcnt = 0;
	char answer = 'A';

	for (int i = 0; i < 26; i++)
	{
		if (count[i] > maxcnt)
		{
			maxcnt = count[i];
			answer = 'A' + i;
		}
	}

	cout << answer << endl;

	return 0;
}
