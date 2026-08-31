#include <iostream>
using namespace std;

int arr[10] = { 4,4,5,7,8,10,20,22,23,24 };
bool flag = false;

void search(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (start > end)
		return;

	if (arr[mid] == n)
	{
		flag = true;
		return;
	}
	else if (arr[mid] < n)
	{
		search(n, mid + 1, end);
	}
	else
	{
		search(n, start, mid - 1);
	}
}

int main()
{
	int num;
	std::cin >> num;

	search(num, 0, 9);

	if (flag)
		std::cout << "O";
	else
		std::cout << "X";

	return 0;
}