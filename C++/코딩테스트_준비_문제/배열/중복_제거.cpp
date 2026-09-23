#include <iostream>
using namespace std;

int removeDuplicates(int nums[], int n)
{
    if (n == 0)
        return 0;

    int k = 1;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] != nums[k - 1])
        {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main()
{
    int nums[] = { 1, 1, 2 };
    int n = sizeof(nums) / sizeof(nums[0]);

    int k = removeDuplicates(nums, n);

    cout << "k = " << k << endl;
    cout << "nums = ";

    for (int i = 0; i < k; i++)
        cout << nums[i] << " ";

    return 0;
}
