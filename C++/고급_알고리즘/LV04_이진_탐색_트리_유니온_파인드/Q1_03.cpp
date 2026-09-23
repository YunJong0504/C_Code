#include <iostream>
using namespace std;

int tree[9] = { 15, 7, 19, 8, 17, 25, -1, 16, 18 };

int find(int index, int target)
{
    int count = 0;

    while (index < 9 && tree[index] != -1)
    {
        count++;

        if (tree[index] == target)
            return count;

        if (target < tree[index])
            index = index * 2 + 1;

        else
            index = index * 2 + 2;
    }

    return -1;
}

int main()
{
    int target[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> target[i];
    }

    for (int i = 0; i < 5; i++)
    {
        int result = find(0, target[i]);

        if (result == -1)
            cout << target[i] << ":없음" << endl;
        else
            cout << target[i] << ":" << result << "회만에찾음" << endl;
    }

    return 0;
}
