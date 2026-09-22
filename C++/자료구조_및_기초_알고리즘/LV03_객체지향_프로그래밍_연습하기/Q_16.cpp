#include <iostream>
#include <string>
using namespace std;

class Engine
{
public:
	Engine() {}
	void setEngine(int power, string fuel, string type)
	{
		_power = power;
		_fuel = fuel;
		_type = type;
	}
	void printInfo()
	{
		cout << " Engine: " << _power << "HP | Fuel: " << _fuel << " | Type: " << _type << endl;
	}
private:
	int _power;
	string _fuel;
	string _type;
};

class Car
{
public:
	Car() {}
	Car(string brand, string model, int years)
	{
		_brand = brand;
		_model = model;
		_years = years;
	}
	void setEngine(int p, string f, string t)
	{
		_E1.setEngine(p, f, t);
	}
	void printInfo()
	{
		cout << "Car: " << _brand << " " << _model << " (" << _years << ")" << endl;
		_E1.printInfo();
	}
private:
	string _brand;
	string _model;
	int _years;
	Engine _E1;
};

int main()
{
	Car car1("Ford", "Mustang", 2022);
	car1.setEngine(450, "Gasoline", "V8");
	car1.printInfo();

	return 0;
}
