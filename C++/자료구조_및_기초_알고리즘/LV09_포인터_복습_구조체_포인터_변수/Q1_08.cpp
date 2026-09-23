#include <iostream>
#include <string>
using namespace std;

int arr[7] = { 3,5,5,6,9,1,2 };

int main()
{
    int idx1, idx2;
    cin >> idx1 >> idx2;

    while (idx1 < idx2)
    {
        int temp = arr[idx1];
        arr[idx1] = arr[idx2];
        arr[idx2] = temp;

        idx1++;
        idx2--;
    }

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
