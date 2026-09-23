#include <iostream>
#include <string>
using namespace std;

int arr[4][4] =
{
    3,5,1,4,
    2,2,1,1,
    0,1,2,3,
    3,1,3,1
};

int main()
{
    char input;
    std::cin >> input;

    if (input >= '0' && input <= '9')
    {
        for (int i = 0; i < 4; i++)
        {
            std::cout << arr[(int)(input - '0')][i];
        }
    }
    else if (input >= 'A' && input <= 'Z')
    {
        for (int i = 0; i < 4; i++)
        {
            std::cout << arr[i][(int)(input - 'A')];
        }
    }

    return 0;
}
