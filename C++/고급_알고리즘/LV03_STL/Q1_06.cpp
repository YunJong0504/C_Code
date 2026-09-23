#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct vote
{
	int num;
	string name;
};

int main()
{
	int a, b;
	std::cin >> a >> b;

	int cd[100] = {};

	vote people[100] = {};

	for (int i = 0; i < b; i++)
	{
		std::cin >> people[i].num >> people[i].name;
	}
	for (int i = 0; i < b; i++)
	{
		cd[people[i].num]++;
	}

	int max = -1;
	int maxidx = 0;
	for (int i = 0; i < 100; i++)
	{
		if (cd[i] > max)
		{
			max = cd[i];
			maxidx = i;
		}
	}

	for (int i = 0; i < b; i++)
	{
		if (people[i].num == maxidx)
		{
			std::cout << people[i].name << " ";
		}
	}

	return 0;
}
