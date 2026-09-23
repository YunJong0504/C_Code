#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string change(string n)
{
	bool allUpper = true;
	bool allLower = true;

	for (char c : n)
	{
		if (islower(c))
			allUpper = false;
		if (isupper(c))
			allLower = false;
	}

	if (allUpper)
		return n;

	if (allLower)
	{
		n[0] = toupper(n[0]);
		return n;
	}

	for (char& c : n)
		c = toupper(c);

	return n;
}

int main()
{
	string name[100] = {};

	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> name[i];

		name[i] = change(name[i]);
	}

	sort(name, name + n);

	for (int i = 0; i < n; i++)
	{
		std::cout << name[i] << std::endl;
	}

	return 0;
}
