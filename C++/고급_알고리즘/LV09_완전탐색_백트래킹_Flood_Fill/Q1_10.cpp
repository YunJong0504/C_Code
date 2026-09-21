#include <iostream>
#include <queue>
using namespace std;

int map[3][3] = {};
int visited[3][3] = {};

int dy[4] = { -1, 1, 0, 0 };
int dx[4] = { 0, 0, -1, 1 };

bool bfs(int y, int x)
{
	queue<pair<int, int>> q;
	q.push({ y,x });
	visited[y][x] = 1;

	while (!q.empty())
	{
		int cy = q.front().first;
		int cx = q.front().second;
		q.pop();

		if (cy == 2 && cx == 2)
			return true;

		for (int i = 0; i < 4; i++)
		{
			int ny = cy + dy[i];
			int nx = cx + dx[i];

			if (ny < 0 || ny >= 3 || nx < 0 || nx >= 3)
				continue;

			if (map[ny][nx] == 1)
				continue;

			if (visited[ny][nx] != 0)
				continue;

			visited[ny][nx] = 1;

			q.push({ ny, nx });
		}
	}

	return false;
}

int main()
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> map[y][x];
		}
	}
	
	if (bfs(0, 0))
		cout << "가능" << endl;
	else
		cout << "불가능" << endl;

    return 0;
}
