#include <iostream>
using namespace std;

char value[8] = "MInCOdE";
char path[8] = "";

int map[7][7] =
{
	0,1,1,0,0,0,0,
	0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,
	0,0,0,0,0,1,1,
	0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,
	0,0,0,0,0,0,0
};

void run(int now, int level)
{
	if (value[now] >= 'A' && value[now] <= 'Z')
	{
		std::cout << value[now] << " ";
	}

	for (size_t i = 0; i < 7; i++)
	{
		if (map[now][i] == 1)
		{
			path[level + 1] = value[i];
			run(i, level + 1);
			path[level + 1] = 0;
		}
	}
}

int main()
{
	path[0] = value[0];
	run(0, 0);

    return 0;
}
