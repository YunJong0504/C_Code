#include <iostream>
#include <string>
using namespace std;

class GameUnit
{
public:
	void SetHP(int h)
	{
		HP = h;
	}
	int GetHP()
	{
		return HP;
	}
private:
	int HP;
};

class Character : public GameUnit
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
	virtual void ShowStatus()
	{
		cout << GetHP() << endl;
		cout << Name << endl;
	}
private:
	string Name;
};

class Warrior : public Character
{
public:
	Warrior(string n, int h, int a)
	{
		SetName(n);
		SetHP(h);
		Attk = a;
	}
	void ShowStatus() override
	{
		cout << "Name : " << GetName() << endl;
		cout << "HP : " << GetHP() << endl;
		cout << "Attack : " << Attk << endl;
		cout << "---------------------------------" << endl;
	}
private:
	int Attk;
};

class Wizard : public Character
{
public:
	Wizard(string n, int h, int a)
	{
		SetName(n);
		SetHP(h);
		Attk = a;
	}
	void ShowStatus() override
	{
		cout << "Name : " << GetName() << endl;
		cout << "HP : " << GetHP() << endl;
		cout << "Attack : " << Attk << endl;
		cout << "---------------------------------" << endl;
	}
private:
	int Attk;
};

int main()
{
	Warrior w("Gorath", 100, 30);
	Wizard wiz("Azura", 80, 50);
	Character* party[] = { &w, &wiz };
	for (int i = 0; i < 2; ++i)
		party[i]->ShowStatus();

	return 0;
}
