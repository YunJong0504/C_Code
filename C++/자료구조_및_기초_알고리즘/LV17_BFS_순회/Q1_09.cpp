#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int result = 0;

	queue<int> q;
	q.push(1);

	int n;
	std::cin >> n;

	for (int i = 0; i <= n; i++)
	{
		int now = q.front();
		q.pop();

		result += now;

		q.push(now * 3);
	}

	std::cout << result;

    return 0;
}
