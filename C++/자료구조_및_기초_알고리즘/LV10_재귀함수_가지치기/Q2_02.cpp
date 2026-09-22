#include <iostream>
#include <cstring>
using namespace std;

bool danger(int y1, int x1, int y2, int x2)
{
	if (y1 == y2 || x1 == x2)
		return true;

	return false;
}

int main()
{
	int y1, x1, y2, x2, y3, x3;
	cin >> y1 >> x1 >> y2 >> x2 >> y3 >> x3;

	if (danger(y1, x1, y2, x2) || danger(y1, x1, y3, x3) || danger(y2, x2, y3, x3))
		cout << "위험";
	else
		cout << "안전";


	return 0;
}
