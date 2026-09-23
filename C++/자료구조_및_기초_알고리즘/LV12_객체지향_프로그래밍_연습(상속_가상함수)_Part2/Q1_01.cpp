#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	virtual void Eat()
	{
		cout << "Eat!!" << endl;
	}
	virtual ~Animal() {}
};

class Mammal : public Animal
{
public:
	virtual void Sleep()
	{
		cout << "Sleep Zzz..." << endl;
	}
};

class Dog : public Mammal
{
public:
	virtual void Speak()
	{
		cout << "Bark!!" << endl;
	}
};

class Cat : public Mammal
{
public:
	virtual void Speak()
	{
		cout << "Meow!!" << endl;
	}
};

int main()
{
	Dog d;
	Cat c;
	Animal* animals[] = { &d, &c };
	for (int i = 0; i < 2; i++)
	{
		animals[i]->Eat();
		if (Mammal* m = dynamic_cast<Mammal*>(animals[i]))
		{
			m->Sleep();
		}
	}

	return 0;
}
