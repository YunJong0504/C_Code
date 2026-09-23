#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b)
{
	if (a.length() != b.length())
	{
		return a.length() > b.length();
	}
	return a < b;
}

int main()
{
	int n;
	std::cin >> n;

	string name[10];

	for (int i = 0; i < n; i++)
	{
		std::cin >> name[i];
	}

	sort(name, name + n, compare);

	for (int i = 0; i < n; i++)
	{
		std::cout << name[i] << std::endl;
	}

	return 0;
}
