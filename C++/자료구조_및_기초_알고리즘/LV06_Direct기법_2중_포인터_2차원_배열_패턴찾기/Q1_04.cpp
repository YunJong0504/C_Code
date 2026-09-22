#include <iostream>
using namespace std;

int main()
{
	int G;
	cin >> G;

	int* P = &G;
	int** t = &P;

	int* K = &G;
	int** Q = &K;

	cout << **t << " " << * K;

	return 0;
}
