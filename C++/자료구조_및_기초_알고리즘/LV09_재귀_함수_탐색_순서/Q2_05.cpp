#include <iostream>
#include <cstring>
using namespace std;

int map[3][6] =
{
	3,5,4,2,2,3,
	1,3,3,3,4,2,
	5,4,4,2,3,5
};
char price[5] = { 'T','P','G','K','C' };

int main()
{
	char ch;
	int n;
	cin >> ch >> n;

	int R = ch - 'A';
	int C = n - 1;
	int Idx = map[R][C];

	cout << price[Idx - 1];

	return 0;
}
