#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
	void Setname(string n)
	{
		Name = n;
	}
	void Setsalary(int s)
	{
		Salary = s;
	}
	int Getsalary()
	{
		return Salary;
	}
	virtual int CalculateSalary()
	{
		return Salary;
	}
private:
	string Name;
	int Salary;
};

class Manager : public Employee
{
public:
	Manager(string n, int s)
	{
		Setname(n);
		Setsalary(s);
	}
	int CalculateSalary() override
	{
		return Getsalary() * 1.5;
	}
private:

};

class Developer : public Employee
{
public:
	Developer(string n, int s)
	{
		Setname(n);
		Setsalary(s);
	}
	int CalculateSalary() override
	{
		return Getsalary() * 1.1;
	}
private:

};

int main()
{
	Manager m("Kim", 5000);
	Developer d("Lee", 3000);
	Employee* staff[] = { &m, &d };
	for (int i = 0; i < 2; ++i)
	{
		std::cout << staff[i]->CalculateSalary() << std::endl;
	}

	return 0;
}
