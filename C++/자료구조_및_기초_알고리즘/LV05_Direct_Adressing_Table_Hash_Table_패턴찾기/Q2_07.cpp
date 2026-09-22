#include <iostream>
using namespace std;

char vect[7] = "CODING";
int idx[256] = {};

void Hash()
{
	for (int i = 0; i < 6; i++)
	{
		idx[vect[i]]++;
	}
}

int main()
{
	int n;
	char ch[10] = {};
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> ch[i];
	}

	Hash();

	for (int i = 0; i < n; i++)
	{
		if (idx[ch[i]] == 0)
		{
			cout << "X";
		}
		else
		{
			cout << "O";
		}
	}

	return 0;
}
