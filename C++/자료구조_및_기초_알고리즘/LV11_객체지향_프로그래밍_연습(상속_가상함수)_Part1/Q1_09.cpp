#include <iostream>
#include <string>
using namespace std;

class Monster
{
public:
	void SetInfo(string n, int h)
	{
		Name = n;
		HP = h;
	}
	virtual void Attack()
	{
		cout << "???" << endl;
	}
private:
	string Name;
	int HP;
};

class Goblin : public Monster
{
public:
	Goblin(string n, int h)
	{
		SetInfo(n, h);
	}
	void Attack() override
	{
		cout << "throws rock!" << endl;
	}
private:

};

class Orc : public Monster
{
public:
	Orc(string n, int h)
	{
		SetInfo(n, h);
	}
	void Attack() override
	{
		cout << "swings axe!" << endl;
	}
private:

};

int main()
{
	Goblin g("Goblin", 50); 
	Orc o("Orc", 100);
	Monster* monsters[] = { &g, &o };
	for (int i = 0; i < 2; ++i)
		monsters[i]->Attack();

	return 0;
}
