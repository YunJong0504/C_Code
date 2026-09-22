#include <iostream>
using namespace std;

class Tower
{
public:
	Tower()
	{
		_Height = 50;
	}
	Tower(int h)
	{
		_Height = h;
	}
	int getHeight()
	{
		return _Height;
	}
private:
	int _Height;
};

int main()
{
	Tower myTower;
	Tower seoulTower(100);
	cout << "높이는" << myTower.getHeight() << "미터" << endl;
	cout << "높이는" << seoulTower .getHeight() << "미터" << endl;
	return 0;

	return 0;
}
