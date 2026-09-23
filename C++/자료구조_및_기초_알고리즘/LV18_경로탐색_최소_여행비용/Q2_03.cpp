#include <iostream>
#include <algorithm>
using namespace std;

int arr[6] = { 1,5,4,2,-5,-7 };

bool compare(int a, int b)
{
	return a > b;
}

int main()
{
	int n;
	std::cin >> n;

	sort(arr, arr + 6, compare);

	std::cout << arr[n - 1];

	return 0;
}
