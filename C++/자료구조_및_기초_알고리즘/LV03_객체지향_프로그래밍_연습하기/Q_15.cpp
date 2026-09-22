#include <iostream>
#include <string>
using namespace std;

class Item
{
public:
	Item(const char* name, const char* discription, double weight, int quantity)
	{
		strcpy_s(_name, name);
		strcpy_s(_discription, discription);
		_weight = weight;
		_quantity = quantity;
	}
	void printInfo()
	{
		cout << "Item: " << _name << " - " << _discription << " (x" << _quantity << ") Weight: " << _weight << endl;
	}
private:
	char _name[256];
	char _discription[256];
	double _weight;
	int _quantity;
};

class Inventory
{
public:
	Inventory(const char* owner)
	{
		strcpy_s(_owner, owner);
	}
	void printInfo()
	{
		cout << "Inventory of: " << _owner << endl;
	}
	void printInven(Item i1, Item i2)
	{
		i1.printInfo();
		i2.printInfo();
	}
private:
	char _owner[256];
};

int main()
{
	Item i1("Potion", "Heals 50Hp", 0.5, 5);
	Item i2("Bomb", "Deals 100 Damage", 1.0, 2);
	Inventory ply1("Player1");
	ply1.printInfo();
	ply1.printInven(i1, i2);

	return 0;
}
