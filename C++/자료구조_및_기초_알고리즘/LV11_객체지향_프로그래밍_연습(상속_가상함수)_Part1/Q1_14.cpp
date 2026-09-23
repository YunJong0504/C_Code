#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
public:
	virtual void StartEngine()
	{
		cout << endl;
	}
	virtual void Drive()
	{
		cout << endl;
	}
	virtual void StopEngine()
	{
		cout << endl;
	}
private:

};

class Car : public Vehicle
{
public:
	void StartEngine() override
	{
		cout << "Start Car Engine" << endl;
	}
	void Drive() override
	{
		cout << "Driving Car" << endl;
	}
	void StopEngine() override
	{
		cout << "Stop Car Engine" << endl;
	}
};

class Motorcycle : public Vehicle
{
public:
	void StartEngine() override
	{
		cout << "Start Motorcycle Engine" << endl;
	}
	void Drive() override
	{
		cout << "Driving Motorcycle" << endl;
	}
	void StopEngine() override
	{
		cout << "Stop Motorcycle Engine" << endl;
	}
};

int main()
{
	Car c; 
	Motorcycle m;
	Vehicle* vehicles[] = { &c, &m };
	for (int i = 0; i < 2; ++i) {
		vehicles[i]->StartEngine();
		vehicles[i]->Drive();
		vehicles[i]->StopEngine();
	}

	return 0;
}
