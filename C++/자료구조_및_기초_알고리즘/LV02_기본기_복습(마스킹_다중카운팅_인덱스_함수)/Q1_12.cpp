#include <iostream>
using namespace std;

class Warrior
{
public:
	Warrior(int hp, int attp)
	{
		wHp = hp;
		wAttackpoint = attp;
	}
	void W_info()
	{
		cout << "Warrior : HP(" << wHp << ") Att(" << wAttackpoint << ")" << endl;
	}
private:
	int wHp;
	int wAttackpoint;
};

class Magician
{
public:
	Magician(int hp, int attp)
	{
		mHp = hp;
		mAttackpoint = attp;
	}
	void M_info()
	{
		cout << "Magician : HP(" << mHp << ") Att(" << mAttackpoint << ")" << endl;
	}
private:
	int mHp;
	int mAttackpoint;
};

class Archer
{
public:
	Archer(int hp, int attp)
	{
		aHp = hp;
		aAttackpoint = attp;
	}
	void A_info()
	{
		cout << "Archer : HP(" << aHp << ") Att(" << aAttackpoint << ")" << endl;
	}
private:
	int aHp;
	int aAttackpoint;
};

class Party
{
public:
	void getAdd(Warrior* _wadd, Magician* _madd, Archer* _aadd)
	{
		wAdd = _wadd;
		mAdd = _madd;
		aAdd = _aadd;
	}
	void PrintInfo()
	{
		(*wAdd).W_info();
		(*mAdd).M_info();
		(*aAdd).A_info();
	}
private:
	Warrior* wAdd;
	Magician* mAdd;
	Archer* aAdd;
};

int main()
{
	Warrior war(100, 20);
	Magician mag(100, 30);
	Archer arc(100, 10);

	Party good;
	good.getAdd(&war, &mag, &arc);
	good.PrintInfo();

	return 0;
}
