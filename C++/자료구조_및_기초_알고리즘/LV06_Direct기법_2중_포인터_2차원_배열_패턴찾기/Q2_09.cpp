#include <iostream>
using namespace std;

class CoffeeMachine
{
public:
	CoffeeMachine(int c, int w, int s)
		: _Coffee(c), _Water(w), _Sugar(s) {}
	void show()
	{
		cout << "커피: " << _Coffee << endl;
		cout << "물: " << _Water << endl;
		cout << "설탕: " << _Sugar << endl;
		cout << "---------------------------" << endl;
	}
	void drinkEspresso()
	{
		_Coffee -= 1;
		_Water -= 1;
	}
	void drinkAmericano()
	{
		_Coffee -= 1;
		_Water -= 2;
	}
	void drinkSugerCoffee()
	{
		_Coffee -= 1;
		_Water -= 2;
		_Sugar -= 1;
	}
	void fill()
	{
		_Coffee += 5;
		_Water += 10;
		_Sugar += 3;
	}
private:
	int _Coffee;
	int _Water;
	int _Sugar;
};

int main()
{
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugerCoffee();
	java.show();
	java.fill();
	java.show();

	return 0;
}
