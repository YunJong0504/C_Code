#include <iostream>
#include <cstring>
using namespace std;

char path[5] = {};
char input[5] = {};
char name[5] = "ABCD";
int num = 0;

void bbq(int level)
{
	if (level == 3)
	{
		num++;
		if (strcmp(path, input) == 0)
		{
			cout << num << "번쨰" << endl;
		}
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		path[level] = name[i];
		bbq(level + 1);
		path[level] = 0;
	}
}

int main()
{
	cin >> input;
	bbq(0);

	return 0;
}
