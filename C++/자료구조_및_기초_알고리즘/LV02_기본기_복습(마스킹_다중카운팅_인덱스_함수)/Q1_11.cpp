#include <iostream>
using namespace std;

void isSame(char n1[256], char n2[256])
{
	int len1, len2;
	len1 = strlen(n1);
	len2 = strlen(n2);

	if (len1 == len2)
	{
		for (int i = 0; i < len1; i++)
		{
			if (n1[i] != n2[i])
			{
				cout << "남남";
				return;
			}
		}
		cout << "동명";
	}
	else
		cout << "남남";
}

int main()
{
	char name1[256] = {};
	char name2[256] = {};
	cin >> name1 >> name2;

	isSame(name1, name2);

	return 0;
}
