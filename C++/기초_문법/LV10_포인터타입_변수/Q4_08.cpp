#include <iostream>
using namespace std;

char arr[3][3] = {
	{'a','b','d'},
	{'e','w','z'},
	{'q','v','a'},
};

void Process(char a)
{
	char ch = (char)(a + 32);
	int flag = 0;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] == ch)
			{
				flag = 1;
				break;
			}
		}
	}

	if (flag == 1)
		cout << "존재";
	else
		cout << "없음";
}

void Input()
{
	char ch;
	cin >> ch;
	
	Process(ch);
}

int main()
{
	Input();

	return 0;
}
