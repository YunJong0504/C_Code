#include <iostream>

int main()
{
	char arr[6] = { '$','@','D','A','9','#' };

	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i] << ":" << (int)(arr[i]) << std::endl;
	}

	return 0;
}
