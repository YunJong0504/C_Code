#include <iostream>
#include <queue>
using namespace std;

int map[6][6] =
{
	0,1,1,0,0,0,
	0,0,0,1,0,0,
	0,0,0,0,1,1,
	0,0,0,0,0,0,
	0,0,0,0,0,0,
	0,0,0,0,0,0,
};

char value[7] = "374296";

struct Node
{
	int num;
	int level;
};

std::queue<Node> q;

int main()
{
	q.push({ 0, 0 });

	while (!q.empty())
	{
		Node node = q.front();
		q.pop();
		cout << value[node.num] << " ";
		if (node.level < 3)
		{
			for (int i = 0; i < 6; i++)
			{
				if (map[node.num][i] == 1)
				{
					q.push({ i, node.level + 1 });
				}
			}
		}
	}

    return 0;
}
