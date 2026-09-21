#include <iostream>
#include <queue>
#include <climits>
using namespace std;

const int SIZE = 4;

struct Node
{
    int location;       // 현재 위치
    int time;           // 현재까지 걸린 시간
    bool visited[SIZE]; // 이 경로에서 방문한 위치
};

int changeIndex(char location)
{
    if (location == 'N')
        return 0; // 노원
    if (location == 'G')
        return 1; // 강남
    if (location == 'Y') 
        return 2; // 용산

    return 3;                      // 대화(D)
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char startName, destinationName;
    cin >> startName >> destinationName;

    /*
        0: 노원(N)
        1: 강남(G)
        2: 용산(Y)
        3: 대화(D)
    */
    int road[SIZE][SIZE] =
    {
        {0,  80, 30, 60},
        {80, 0,  40, 0 },
        {30, 40, 0,  70},
        {60, 0,  70, 0 }
    };

    int start = changeIndex(startName);
    int destination = changeIndex(destinationName);

    queue<Node> q;

    Node first{};
    first.location = start;
    first.time = 0;
    first.visited[start] = true;

    q.push(first);

    int answer = INT_MAX;

    while (!q.empty())
    {
        Node now = q.front();
        q.pop();

        if (now.location == destination)
        {
            if (now.time < answer)
            {
                answer = now.time;
            }
        }

        for (int i = 0; i < 4; i++)
        {
            if (road[now.location][i] == 0)
                continue;
            if (now.visited[i])
                continue;

            Node next;
            next.location = i;
            next.time = now.time + road[now.location][i];
            memcpy(next.visited, now.visited, 4);
            next.visited[i] = true;
            q.push(next);
        }
    }

    return 0;
}
