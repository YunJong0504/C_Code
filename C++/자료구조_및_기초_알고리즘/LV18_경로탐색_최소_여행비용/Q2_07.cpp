#include <iostream>
#include <algorithm>
using namespace std;

int arr[5];
int cnt = 0;

void run(int idx, int sum)
{
	if (idx == 5)
	{
		if (sum >= 10 && sum <= 20)
		{
			cnt++;
		}

		return;
	}

	run(idx + 1, sum);

	run(idx + 1, sum + arr[idx]);
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}

	run(0, 0);
	std::cout << cnt << endl;

	return 0;
}
