#include <iostream>
#include <queue>
using namespace std;

int map[6][6] =
{
	0,1,1,1,0,0,
	0,0,0,0,1,1,
	0,0,0,0,0,0,
	0,0,0,0,0,0,
	0,0,0,0,0,0,
	0,0,0,0,0,0
};

int value[6] = { 0,1,3,4,2,5 };

struct Node
{
	int num;
	int level;
};

queue<Node> q = {};

int main()
{
	q.push(Node{ 0,0 });
	
	while (!q.empty())
	{
		Node now = q.front();

		if(value[now.num] % 2 == 1)
		{
			std::cout << value[now.num];
		}

		for (int i = 0; i < 6; i++)
		{
			if (map[now.num][i] == 1)
			{
				q.push(Node{ i, now.level + 1 });
			}
		}
		q.pop();
	}

    return 0;
}
