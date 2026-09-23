#include <iostream>
#include <string>
using namespace std;

void Swap(int* p, int* t)
{
    int temp;
    temp = *p;
    *p = *t;
    *t = temp;
}

int main()
{
    int a, b;
    cin >> a >> b;

    Swap(&a, &b);

    cout << a << " " << b;

    return 0;
}
