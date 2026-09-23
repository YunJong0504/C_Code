#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string farm[3][3];

    for (int i = 0; i < N; i++)
    {
        int x, y;
        string durability;

        cin >> x >> y >> durability;

        farm[x][y] = durability;
    }

    int K;
    cin >> K;

    for (int i = 0; i < K; i++)
    {
        int wind;
        cin >> wind;

        for (int x = 0; x < 3; x++)
        {
            for (int y = 0; y < 3; y++)
            {
                if (farm[x][y].empty())
                    continue;

                int top = farm[x][y].back() - '0';

                if (wind > top)
                {
                    farm[x][y].pop_back();
                }
            }
        }
    }

    int count = 0;

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            count += farm[x][y].size();
        }
    }

    cout << count << endl;

	return 0;
}
