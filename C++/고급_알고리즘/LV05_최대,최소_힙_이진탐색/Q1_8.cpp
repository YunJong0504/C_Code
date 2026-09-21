#include <iostream>
#include <string>
using namespace std;

struct Edge
{
    char start;
    char end;  
    int cost;  
};

Edge heap[100000];
int heapSize = 0;

void push(Edge e)
{
    heapSize++;

    int index = heapSize;

    while (index > 1)
    {
        int parent = index / 2;

        if (heap[parent].cost >= e.cost)
            break;

        heap[index] = heap[parent];
        index = parent;
    }

    heap[index] = e;
}

Edge pop()
{
    Edge result = heap[1];

    Edge last = heap[heapSize];
    heapSize--;

    int index = 1;

    while (index * 2 <= heapSize)
    {
        int child = index * 2;

        if (child + 1 <= heapSize &&
            heap[child + 1].cost > heap[child].cost)
        {
            child++;
        }

        if (last.cost >= heap[child].cost)
            break;

        heap[index] = heap[child];
        index = child;
    }

    heap[index] = last;

    return result;
}

int main()
{
    int n;
    cin >> n;

    int graph[1000][1000];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (graph[i][j] != 0)
            {
                Edge e;

                e.start = 'A' + i;
                e.end = 'A' + j;
                e.cost = graph[i][j];

                push(e);
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        Edge e = pop();

        cout << e.start << "-" << e.end << " "
            << e.cost << endl;
    }

    return 0;
}
