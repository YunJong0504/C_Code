#include <iostream>
using namespace std;

char value[9] = "RKFCBICM";
char path[9] = "";

int map[8][8] =
{
	0,1,1,1,0,0,0,0,
	0,0,0,0,1,1,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,1,1,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0
};

void run(int now, int level)
{
	std::cout << value[now];

	for (size_t i = 0; i < 8; i++)
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
