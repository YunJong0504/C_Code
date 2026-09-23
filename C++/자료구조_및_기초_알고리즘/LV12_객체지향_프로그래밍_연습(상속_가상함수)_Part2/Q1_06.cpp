#include <iostream>
#include <string>
using namespace std;

class Entity
{
protected:
	int HP;
	int AttkP;
public:
	Entity(int h, int a) : HP(h), AttkP(a) {}
};

class Combatant : public Entity
{
public:
	Combatant(int h, int a) : Entity(h, a) {}
	virtual void Attack()
	{
		cout << "Attack!!" << endl;
	}
	virtual void Defense()
	{
		cout << "Defense!!" << endl;
	}
};

class Warrior : public Combatant
{
public:
	Warrior(int h, int a) : Combatant(h, a) {}
	void Attack() override
	{
		cout << "Warrior Attack!!" << endl;
	}
	void Defense() override
	{
		cout << "Warrior Defense!!" << endl;
	}
	virtual void UseSkill()
	{
		cout << "Use Warrior's Skill!!" << endl;
	}
};

class Mage : public Combatant
{
public:
	Mage(int h, int a) : Combatant(h, a) {}
	void Attack() override
	{
		cout << "Mage Attack!!" << endl;
	}
	void Defense() override
	{
		cout << "Mage Defense!!" << endl;
	}
	virtual void UseSkill()
	{
		cout << "Use Mage's Skill!!" << endl;
	}
};

class Archer : public Combatant
{
public:
	Archer(int h, int a) : Combatant(h, a) {}
	void Attack() override
	{
		cout << "Archer Attack!!" << endl;
	}
	void Defense() override
	{
		cout << "Archer Defense!!" << endl;
	}
	virtual void UseSkill()
	{
		cout << "Use Archer's Skill!!" << endl;
	}
};

int main()
{
	Warrior w(100, 30); Mage m(80, 50); Archer a(90, 25);
	Combatant* units[] = { &w, &m, &a };
	for (int i = 0; i < 3; ++i) {
		units[i]->Attack();
		units[i]->Defense();
	}

	return 0;
}
