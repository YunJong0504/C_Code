#include <iostream>
using namespace std;

class CAR
{
public:
	void SetName(const char name[])
	{
		strcpy_s(_name, name);
	}
	void SetWheel(int inch)
	{
		for (int i = 0; i < 4; i++)
		{
			_wheel[i] = inch;
		}
	}
	void SetSpeed(int speed)
	{
		_speed = speed;
	}
	void SetFuel(int fuel)
	{
		_fuel = fuel;
	}
	void PrintData()
	{
		cout << _name << endl;
		cout << "speed : " << _speed << "KM" << endl;
		cout << "fuel : " << _fuel << "L" << endl;
		for (int i = 0; i < 4; i++)
		{
			cout << "wheel[" << i << "] : size " << _wheel[i] << "inch radius 20cm" << endl;
		}
	}

private:
	char _name[10];
	int _wheel[4];
	int _speed;
	int _fuel;
};

int main()
{
	CAR feraril, avante;
	feraril.SetName("feraril");
	feraril.SetSpeed(200);
	feraril.SetFuel(100);
	feraril.SetWheel(5);
	feraril.PrintData();

	avante.SetName("avante");
	avante.SetSpeed(100);
	avante.SetFuel(50);
	avante.SetWheel(3);
	avante.PrintData();
	return 0;
}
