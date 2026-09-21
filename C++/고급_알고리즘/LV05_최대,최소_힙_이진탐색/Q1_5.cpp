#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int answer = 0;
    int left = 0;
    int right = n;

    while (left <= right)
    {
        int mid = (left + right) / 2;
		if (mid * mid > n)
		{
			right = mid - 1;
		}
		else
		{
			answer = mid;
			left = mid + 1;
		}
    }
    
    cout << answer << endl;
    return 0;
}
