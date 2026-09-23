#include <iostream>
#include <string>
using namespace std;

class Unit
{
public:
	void SetName(string n)
	{
		Name = n;
	}
	string GetName()
	{
		return Name;
	}
	virtual void Move()
	{
		cout << "None" << endl;
	}
private:
	string Name;
};

class Warrior : public Unit
{
public:
	Warrior(string n)
	{
		SetName(n);
	}
	void Move() override
	{
		cout << GetName() << " : Move Front + 1" << endl;
	}
};

class Archer : public Unit
{
public:
	Archer(string n)
	{
		SetName(n);
	}
	void Move() override
	{
		cout << GetName() << " : Move Back - 1" << endl;
	}
};

int main()
{
	Warrior w("Thor"); 
	Archer a("Robin");
	Unit* units[] = { &w, &a };
	for (int i = 0; i < 2; ++i)
		units[i]->Move();

	return 0;
}
