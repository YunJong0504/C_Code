#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Data
{
	int num;
	char ch;
};

bool compare(Data a, Data b)
{
	if (a.num != b.num)
		return a.num < b.num;

	return a.ch < b.ch;
}

int main()
{
	int n;
	cin >> n;

	Data arr[10];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].num >> arr[i].ch;
	}

	sort(arr, arr + n, compare);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i].num << " " << arr[i].ch << endl;
	}

	return 0;
}
