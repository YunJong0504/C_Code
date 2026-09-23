#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	std::cin >> n;

	char hero[4] = { 'B', 'I', 'A', 'H' };
	
	int size = 4;
	int idx = 0;

	while (size > 0)
	{
		idx = (idx + n - 1) % size;

		std::cout << hero[idx] << " ";

		for (int i = idx; i < size - 1; i++)
		{
			hero[i] = hero[i + 1];
		}

		size--;
	}

	return 0;
}
