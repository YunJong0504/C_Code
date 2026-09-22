#include <iostream>
#include <string>
using namespace std;

class Point
{
public:
	Point(char tag, int x, int y, int z)
	{
		_tag = tag;
		_x = x;
		_y = y;
		_z = z;
	}
	void PrintInfo()
	{
		cout << "Point Tag: " << _tag << " | Coordinates: (" << _x << ", " << _y << ", " << _z << ")";
	}
private:
	char _tag;
	int _x;
	int _y;
	int _z;
};

int main()
{
	Point A('A', 3, 4, 7);
	A.PrintInfo();

	return 0;
}
