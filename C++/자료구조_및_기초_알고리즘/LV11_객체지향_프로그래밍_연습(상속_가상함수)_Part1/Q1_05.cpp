#include <iostream>
#include <string>
using namespace std;

class Character
{
public:
	void Setname(string n)
	{
		Name = n;
	}
	virtual void Attack()
	{
		cout << "???" << endl;
	}
private:
	string Name;
};

class Knight : public Character
{
public:
	Knight(string n)
	{
		Setname(n);
	}
	void Attack() override
	{
		cout << "slashes with sword!" << endl;
	}
private:

};

class Mage : public Character 
{
public:
	Mage(string n)
	{
		Setname(n);
	}
	void Attack() override
	{
		cout << "casts a spell" << endl;
	}
private:

};

int main()
{
	Knight k("Arthur");
	Mage m2("Merlin");
	Character* party[] = { &k, &m2 };
	for (int i = 0; i < 2; ++i)
		party[i]->Attack();

	return 0;
}
