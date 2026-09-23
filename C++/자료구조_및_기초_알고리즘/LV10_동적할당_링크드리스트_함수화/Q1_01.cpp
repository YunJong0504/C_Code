#include <iostream>
#include <string>
using namespace std;

struct BBQ
{
    int a;
    int b;
};

int main()
{
    BBQ* bbq = new BBQ;
    
    cin >> bbq->a >> bbq->b;
    cout << bbq->a + bbq->b;

    return 0;
}
