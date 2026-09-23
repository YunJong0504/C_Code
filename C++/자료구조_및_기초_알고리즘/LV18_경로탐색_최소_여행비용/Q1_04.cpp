#include <iostream>
#include <queue>
using namespace std;

int map[6][6] =
{
	0,0,0,0,1,0,
	1,0,1,0,0,1,
	1,0,0,1,0,0,
	1,1,0,0,0,0,
	0,1,0,1,0,1,
	0,0,1,1,0,0,
};

char value[7] = "012345";
int used[6] = {};
struct Node
{
	int data;
	int level;
};

queue<Node> q = {};

void bfs()
{
	q.push({ 0,0 });
	used[0] = 1;
	
	while (!q.empty())
	{
		Node now = q.front();

		std::cout << value[now.data] << " ";

		for (int i = 0; i < 6; i++)
		{
			if (used[i] == 1)
				continue;
			if (map[now.data][i] == 0)
				continue;

			used[i] = 1;
			q.push({ i, now.level + 1 });
		}
		q.pop();
	}
}

int main()
{
	bfs();

	return 0;
}
