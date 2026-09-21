#include <iostream>
#include <string>
using namespace std;

string str;
int score[26] = { 15, 20, 45, 22, 55, 16, 45 };

int n;
int answer = -1;

void dfs(int index, int removed, int sum)
{
    if (index == str.length())
    {
        if (removed == n && sum % 2 == 1)
        {
            if (sum > answer)
                answer = sum;
        }

        return;
    }

    if (removed < n)
    {
        dfs(index + 1, removed + 1, sum);
    }

    int value = score[str[index] - 'a'];

    dfs(index + 1, removed, sum + value);
}

int main()
{
    cin >> str;
    cin >> n;

    dfs(0, 0, 0);

    cout << answer;

    return 0;
}
