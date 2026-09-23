#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int arr[4][5];

    int minRow = 4, minCol = 5;
    int maxRow = -1, maxCol = -1;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];

            if (arr[i][j] == 1)
            {
                if (i < minRow) minRow = i;
                if (j < minCol) minCol = j;
                if (i > maxRow) maxRow = i;
                if (j > maxCol) maxCol = j;
            }
        }
    }

    cout << "(" << minRow << "," << minCol << ")" << endl;
    cout << "(" << maxRow << "," << maxCol << ")" << endl;

	return 0;
}
