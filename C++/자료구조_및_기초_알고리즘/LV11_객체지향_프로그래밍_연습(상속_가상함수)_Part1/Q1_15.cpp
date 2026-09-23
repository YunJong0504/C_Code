#include <iostream>
#include <string>
using namespace std;

class Item
{
public:
	void SetInfo(string n, int g)
	{
		Name = n;
		Gold = g;
	}
	string GetName()
	{
		return Name;
	}
	int GetGold()
	{
		return Gold;
	}
	virtual void GetInfo()
	{
		cout << Name << endl;
		cout << Gold << endl;
	}
private:
	string Name;
	int Gold;
};

class Weapon : public Item
{
public:
	Weapon(string n, int g, int a)
	{
		SetInfo(n, g);
		Attk = a;
	}
	void GetInfo() override
	{
		cout << "Name : " << GetName() << endl;
		cout << "Price : " << GetGold() << "G" << endl;
		cout << "Attack : " << Attk << endl;
		cout << "----------------------------" << endl;
	}
private:
	int Attk;
};

class Potion : public Item
{
public:
	Potion(string n, int g, int h)
	{
		SetInfo(n, g);
		Heal = h;
	}
	void GetInfo() override
	{
		cout << "Name : " << GetName() << endl;
		cout << "Price : " << GetGold() << "G" << endl;
		cout << "Heal : " << Heal << endl;
		cout << "----------------------------" << endl;
	}
private:
	int Heal;
};

int main()
{
	Weapon sword("Iron Sword", 100, 25);
	Potion hp("Health Potion", 50, 30);
	Item* items[] = { &sword, &hp };
	for (int i = 0; i < 2; ++i)
		items[i]->GetInfo();

	return 0;
}
