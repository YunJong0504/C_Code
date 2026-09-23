#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

std::string line[5];

int main()
{
	for (int i = 0; i < 5; i++)
	{
		std::cin >> line[i];
	}

	int idx1, idx2;
	std::cin >> idx1 >> idx2;

	sort(line[idx1].begin(), line[idx1].end());
	sort(line[idx2].begin(), line[idx2].end());

	for (int i = 0; i < 5; i++)
	{
		std::cout << line[i][0] << " ";
	}

	return 0;
}
