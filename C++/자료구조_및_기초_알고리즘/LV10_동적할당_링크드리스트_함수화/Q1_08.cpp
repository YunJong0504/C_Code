#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int four, two;
    four = (num % 10000) / 1000;
    two = (num % 100) / 10;

    int result = (four * 10) + two + 5;
    cout << result;

    return 0;
}
