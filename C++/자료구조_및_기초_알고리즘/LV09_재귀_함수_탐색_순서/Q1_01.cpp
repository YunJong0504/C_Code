#include <iostream>
#include <cstring>
using namespace std;

char path[10] = "";
char str[4] = "ABC";

void bbq(int level)
{
	if (level == 2)
	{
		cout << path << endl;
		return;
	}
	for (int i = 0; i < 3; i++)
	{
		path[level] = str[i];
		bbq(level + 1);
		path[level] = 0;
	}
}

int main()
{
	bbq(0);

	return 0;

}
