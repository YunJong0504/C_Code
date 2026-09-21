#include <iostream>

void QTR()
{
	std::cout << "QTR100%";
}

void BBQ()
{
	std::cout << "BBQ100%";
}

int main()
{
	int arr[3] = {};

	for (int i = 0; i < 3; i++)
	{
		std::cin >> arr[i];
	}

	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum += arr[i];
	}

	if (sum >= 10)
	{
		QTR();
	}
	else
	{
		BBQ();
	}

	return 0;
}
