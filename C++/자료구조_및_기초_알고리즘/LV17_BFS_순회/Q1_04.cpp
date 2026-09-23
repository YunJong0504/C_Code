#include <iostream>
using namespace std;

int arr[8];
int sum = 0;

void run(int now, int level)
{
	if (now > 7)
		return;

	if (level == 2)
	{
		sum += arr[now];
		return;
	}

	run(now * 2, level + 1);
	run(now * 2 + 1, level + 1);
}

int main()
{
	arr[0] = 0;
	for (int i = 1; i < 8; i++)
	{
		std::cin >> arr[i];
	}
	run(1, 0);

	std::cout << sum;

    return 0;
}
