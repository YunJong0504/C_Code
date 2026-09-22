#include <iostream>
using namespace std;

char str[10] = "ATKPTCABC";

void Findch1(char ch1, int &idx1)
{
	for (int i = 0; i < 10; i++)
	{
		if (str[i] == ch1)
		{
			idx1 = i;
			return;
		}
	}
}
void Findch2(char ch2, int &idx2)
{
	for (int i = 9; i >= 0; i--)
	{
		if (str[i] == ch2)
		{
			idx2 = i;
			return;
		}
	}
}

int main()
{
	char ch1, ch2;
	cin >> ch1 >> ch2;

	int idx1, idx2;
	Findch1(ch1, idx1);
	Findch2(ch2, idx2);

	cout << (idx2 - idx1);

	return 0;
}
