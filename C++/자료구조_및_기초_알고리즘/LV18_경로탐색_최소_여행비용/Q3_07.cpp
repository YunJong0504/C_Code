#include <iostream>
#include <vector>
using namespace std;

string name[3] = { "bob", "jason", "tom" };
string path[3] = {};

void run(int n)
{
	if (n == 3)
	{
		for (int i = 0; i < 3; i++)
		{
			std::cout << path[i] << " ";
		}
		std::cout << std::endl;
		return;
	}

	for (int i = 0; i < 3; i++)
	{
		path[n] = name[i];
		run(n + 1);
		path[n] = "";
	}
}

int main()
{
	run(0);

	return 0;
}
