#include <iostream>
#include <queue>
using namespace std;

int map[9] = { 3,1,2,1,3,2,1,2,1 };

void run(int level, int idx)
{
	if (idx >= 9)
	{
		std::cout << "도착" << " ";
		return;
	}

	if (level == 0)
	{
		std::cout << "시작" << " ";
	}

	std::cout << map[idx] << " ";
	run(level + 1, idx + map[idx]);
	std::cout << map[idx] << " ";

	if (level == 0)
	{
		std::cout << "시작" << " ";
	}
}

int main()
{
	int jump;
	std::cin >> jump;

	run(0, jump - 1);

    return 0;
}
