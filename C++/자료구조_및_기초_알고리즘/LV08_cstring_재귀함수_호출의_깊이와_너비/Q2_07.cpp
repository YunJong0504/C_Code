#include <iostream>
#include <cstring>
using namespace std;

int baduk[7][7] =
{
	0,0,0,0,0,0,0,
	0,0,1,0,1,0,0,
	0,1,2,0,2,1,0,
	0,0,1,2,1,0,0,
	0,0,2,1,0,1,0,
	0,1,1,0,0,0,0,
	0,0,0,0,0,0,0
};

int direct[4][2] =
{
	-1, 0, //상
	1, 0, //하
	0, -1, //좌
	0, 1 //우
};

int _catch(int y, int x) //검은돌이 잡히는지 판단
{
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		int newY = y + direct[i][0];
		int newX = x + direct[i][1];
		
		if(baduk[newY][newX] == 1)
		{
			sum += baduk[newY][newX];
		}
	}
	return sum;
}

int main()
{
	int y, x;
	cin >> y >> x;
	baduk[y][x] = 1;

	int count = 0;
	for (int i = 0; i < 4; i++)
	{
		int newY = y + direct[i][0];
		int newX = x + direct[i][1];

		if (baduk[newY][newX] == 2) //검은돌이면
		{
			if (_catch(newY, newX) == 4)
			{
				count++;
			}
		}
	}
	cout << count;
	return 0;
}
