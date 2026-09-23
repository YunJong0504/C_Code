#include <iostream>
#include <queue>
using namespace std;

string value = "ABCDEFGHIJ";

int map[10][10] =
{
	0,1,0,0,0,0,0,0,0,0,
	0,0,1,1,1,1,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,1,0,0,0,
	0,0,0,0,0,0,0,1,0,0,
	0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,1,0,
	0,0,0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,
};

void bfs(int start)
{
	queue<int> q;
	q.push(start);
	while (!q.empty())
	{
		int current = q.front();
		q.pop();
		cout << value[current] << " ";

		for (int i = 0; i < 10; i++)
		{
			if (map[current][i] == 1)
			{
				q.push(i);
			}
		}
	}
}

int main()
{
	char ch;
	std::cin >> ch;

	bfs(ch - 'A');

    return 0;
}
