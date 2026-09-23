#include <iostream>
using namespace std;

int main()
{
	int graph[5][5] =
	{
		0,1,7,2,0,
		1,0,8,0,5,
		7,8,0,3,6,
		2,0,3,0,0,
		0,5,6,0,0,
	};

	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (graph[i][j] == 0)
				continue;

			cout << char('A' + i) << " " << char('A' + j) << " " << graph[i][j] << endl;
		}
	}

    return 0;
}
