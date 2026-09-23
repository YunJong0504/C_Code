#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a[3][3];
	int b[3][3];

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			std::cin >> a[y][x];
		}
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			std::cin >> b[y][x];
		}
	}

    for (int turn = 0; turn < 4; turn++) {

        bool same = true;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (a[i][j] != b[i][j]) {
                    same = false;
                }
            }
        }

        if (same) {
            cout << turn;
            return 0;
        }

        int temp[3][3];

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                temp[2 - j][i] = a[i][j];
            }
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                a[i][j] = temp[i][j];
            }
        }

	return 0;
}
