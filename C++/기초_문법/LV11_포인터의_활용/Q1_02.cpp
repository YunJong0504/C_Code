#include <iostream>
using namespace std;

char arr[3][3] = {
	{'A','D','F'},
	{'Q','W','E'},
	{'Z','X','C'}
};

void Find(char ch, int* y, int* x)
{
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			if (ch == arr[j][i])
			{
				*y = j;
				*x = i;
				break;
			}
		}
	}
}

int main()
{
	char ch;
	cin >> ch;

	int dy = 0;
	int dx = 0;

	Find(ch, &dy, &dx);

	cout << dy << "," << dx;

	return 0;
}
