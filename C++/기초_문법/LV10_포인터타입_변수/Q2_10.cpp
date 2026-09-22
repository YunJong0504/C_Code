#include <iostream>
using namespace std;

int vect[2][5] = { {3,2,6,2,4},{1,4,2,6,5} };

int KFC(int a)
{
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			if (vect[y][x] == a)
				return 1;
		}
	}
	return 0;
}

int main()
{
	int target;
	cin >> target;

	int flag = KFC(target);

	if (flag == 1)
		cout << "값이 존재합니다";
	else
		cout << "값이 없습니다";

	return 0;
}
