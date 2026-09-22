#include <iostream>
using namespace std;

int arr[2][6] = { {4,5,6,1,3,1},{2,1,3,6,3,6} };

void Input(int* a, int* b, int* c)
{
	cin >> *a >> *b >> *c;
}

void Process(int a, int b, int c, int* x, int* y, int* z)
{
	for (int j = 0; j < 2; j++)
	{
		for (int i = 0; i < 6; i++)
		{
			if (arr[j][i] == a)
				(*x)++;
			else if (arr[j][i] == b)
				(*y)++;
			else if (arr[j][i] == c)
				(*z)++;
		}
	}
}

void Output(int a, int b, int c, int x, int y, int z)
{
	cout << a << "=" << x << "개" << endl;
	cout << b << "=" << y << "개" << endl;
	cout << c << "=" << z << "개" << endl;
}

int main()
{
	int a, b, c;
	int counta = 0;
	int countb = 0;
	int countc = 0;
	Input(&a, &b, &c);
	Process(a, b, c, &counta, &countb, &countc);
	Output(a, b, c, counta, countb, countc);

	return 0;
}
