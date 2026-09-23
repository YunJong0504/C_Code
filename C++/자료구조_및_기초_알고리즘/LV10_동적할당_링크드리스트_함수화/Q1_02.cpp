#include <iostream>
#include <string>
using namespace std;

int main()
{
    char* a = new char;
    char* b = new char;
    char* c = new char;

    cin >> *a >> *b >> *c;

    if (*a < 'A' || *a > 'Z')
    {
        cout << "소문자있음" << endl;
        return 0;
    }
    if (*b < 'A' || *b > 'Z')
    {
        cout << "소문자있음" << endl;
        return 0;
    }
    if (*c < 'A' || *c > 'Z')
    {
        cout << "소문자있음" << endl;
        return 0;
    }
    cout << "모두대문자" << endl;

    return 0;
}
