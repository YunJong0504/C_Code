#include <iostream>
#include <string>
using namespace std;

class Animal
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
	virtual void Speak()
	{
		cout << Name << endl;
		cout << "???" << endl;
	}
private:
	string Name;
};

class Dog : public Animal
{
public:
	Dog(string n)
	{
		SetName(n);
	}
	void Speak() override
	{
		cout << GetName() << endl;
		cout << "barks!" << endl;
	}
};

class Cat : public Animal
{
public:
	Cat(string n)
	{
		SetName(n);
	}
	void Speak() override
	{
		cout << GetName() << endl;
		cout << "meows!" << endl;
	}
};

int main()
{
	Dog d1("Beakgu");
	Cat c1("Nabi");
	Animal* animals[2] = { &d1, &c1 };
	for (int i = 0; i < 2; i++)
	{
		animals[i]->Speak();
	}

	return 0;
}
