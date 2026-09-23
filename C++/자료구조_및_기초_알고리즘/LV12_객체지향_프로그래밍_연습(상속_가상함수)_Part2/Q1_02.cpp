#include <iostream>
#include <string>
using namespace std;

class Skill
{
protected:
	string Name;
	int Cool;
public:
	Skill(string n, int c)
	{
		Name = n;
		Cool = c;
	}
	virtual void Execute() = 0;
	virtual int GetCooldown() = 0;
	~Skill() {}
};

class AttackSkill : public Skill
{
public:
	AttackSkill(string n, int c) : Skill(n, c) {}
	void Execute() override
	{
		cout << Name << "발동!!" << endl;
	}
	int GetCooldown() override
	{
		return Cool;
	}
};

class DefenseSkill : public Skill
{
public:
	DefenseSkill(string n, int c) : Skill(n, c) {}
	void Execute() override
	{
		cout << Name << "발동!!" << endl;
	}
	int GetCooldown() override
	{
		return Cool;
	}
};

class HealSkill : public Skill
{
public:
	HealSkill(string n, int c) : Skill(n, c) {}
	void Execute() override
	{
		cout << Name << "발동!!" << endl;
	}
	int GetCooldown() override
	{
		return Cool;
	}
};

int main()
{
	AttackSkill fb("Fireball", 8);
	DefenseSkill sh("Shield", 10);
	HealSkill hl("Heal", 8);
	Skill* skills[] = { &fb, &sh, &hl };
	for (int i = 0; i < 3; i++)
	{
		skills[i]->Execute();
		cout << "Cooldown: " << skills[i]->GetCooldown() << "s" << endl;
	}

	return 0;
}
