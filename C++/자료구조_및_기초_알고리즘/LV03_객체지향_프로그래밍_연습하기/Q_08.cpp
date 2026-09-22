#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
	Employee(const char* name, const char* depart, int years, int base, int bonus)
	{
		strcpy_s(_name, name);
		strcpy_s(_depart, depart);
		_years = years;
		_base = base;
		_bonus = bonus;
	}
	void printInfo()
	{
		cout << "Employee: " << _name << " | Department: " << _depart << " | Years: " << _years << endl;
		cout << "Base: " << _base << ", Bonus: " << _bonus << "%" << endl;
	}
	void Total()
	{
		cout << "Total Salary: " << _base + ((_base  * _bonus) / 100);
	}
private:
	char _name[256];
	char _depart[256];
	int _years;
	int _base;
	int _bonus;
};

int main()
{
	Employee Jane("Jane", "HR", 5, 3000, 15);
	Jane.printInfo();
	Jane.Total();

	return 0;
}
