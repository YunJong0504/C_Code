#include <iostream>
#include <cstring>
using namespace std;

class Mouse
{
public:
	Mouse()
	{
		cin >> n;
		y = 5;
		x = 5;
	}
	void down()
	{
		y++;
	}
	void up()
	{
		y--;
	}
	void right()
	{
		x++;
	}
	void left()
	{
		x--;
	}
	void click()
	{
		cout << y << "," << x << endl;
	}
	void com()
	{
		for (int i = 0; i < n; i++)
		{
			cin >> command[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (command[i] == "down")
				down();
			else if (command[i] == "up")
				up();
			else if (command[i] == "right")
				right();
			else if (command[i] == "left")
				left();
			else if (command[i] == "click")
				click();
		}
	}
private:
	int y, x, n;
	string command[256];
};

int main()
{
	Mouse m;
	m.com();

	return 0;
}
