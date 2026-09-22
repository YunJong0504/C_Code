#include <iostream>
using namespace std;

char arr[5][5] = {
	{'A','B','C','D','E'},
	{'F','G','H','I','J'},
	{'K','L','M','N','O'},
	{'P','Q','R','S','T'},
	{'U','V','W','X','Y'}
};

int main()
{
	char ch;
	cin >> ch;
	int m_Y, m_X;
	int ch_Y, ch_X;

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			if (arr[y][x] == 'M')
			{
				m_Y = y;
				m_X = x;
			}
		}
	}

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			if (arr[y][x] == ch)
			{
				ch_Y = y;
				ch_X = x;
			}
		}
	}

	cout << (ch_Y - m_Y) << "," << (ch_X - m_X);

	return 0;
}
