#include <iostream>
using namespace std;

int arr[7][5] = 
{
	{1,0,0,0,0},
	{1,0,1,0,0},
	{1,1,0,1,0},
	{1,0,1,0,0},
	{0,1,0,0,1},
	{0,0,0,1,0},
	{1,1,0,0,0}
};

int INPUT()
{
	int a;
	cin >> a;

	return a;
}

int PROCESS(int idx)
{
	int count = 0;
	for (int i = 0; i < 7; i++)
	{
		if (arr[i][idx] == 1)
			count++;
	}
	return count;
}

void OUTPUT(int count)
{
	cout << count;
}

int main()
{
	int idx = INPUT();
	int count = PROCESS(idx);
	OUTPUT(count);

	return 0;
}
