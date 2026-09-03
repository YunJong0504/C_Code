#include <iostream>
#include <queue>
using namespace std;

struct Item
{
    int weight;
    bool gold;
};

struct Compare
{
    bool operator()(Item a, Item b)
    {
        if (a.weight != b.weight)
            return a.weight > b.weight;

        if (a.gold != b.gold)
            return a.gold < b.gold;

        return false;
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<Item, vector<Item>, Compare> pq;

    for (int i = 0; i < n; i++)
    {
        int weight;
        cin >> weight;

        pq.push({ weight, true });
    }

    int answer = 0;

    while (pq.size() >= 2)
    {
        Item first = pq.top();
        pq.pop();

        Item second = pq.top();
        pq.pop();

        if (!first.gold || !second.gold)
        {
            break;
        }

        answer += 2;

        int stoneWeight = second.weight * 2;

        pq.push({ stoneWeight, false });
    }

    cout << answer << endl;

    return 0;
}
