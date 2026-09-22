#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int vect[8] = {};
	for (int i = 0; i < 8; i++)
	{
		cin >> vect[i];
	}
	int bucket[10] = {};
	for (int i = 0; i < 8; i++)
	{
		bucket[vect[i]]++;
	}
	for (int i = 0; i < 10; i++)
	{
		if (bucket[i] != 0)
		{
			for (int j = 0; j < bucket[i]; j++)
			{
				cout << i << " ";
			}
		}
	}

	return 0;
}
