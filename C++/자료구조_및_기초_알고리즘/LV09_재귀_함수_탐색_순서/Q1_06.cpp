#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string str[4] = {};
	for (int i = 0; i < 4; i++)
	{
		cin >> str[i];
	}
	int max = 0;
	int min = INT_MAX;
	int maxIdx = 0;
	int minIdx = 0;
	for (int i = 0; i < 4; i++)
	{
		if (str[i].length() > max)
		{
			max = str[i].length();
			maxIdx = i;
		}
		if (str[i].length() < min)
		{
			min = str[i].length();
			minIdx = i;
		}
	}
	cout << "긴문장:" << maxIdx << endl;
	cout << "짧은문장:" << minIdx << endl;

	return 0;
}
