#include <iostream>
#include <string>
using namespace std;

class Product
{
public:
	Product(const char* name, double price, int quantity, int discount)
	{
		strcpy_s(_name, name);
		_price = price;
		_quantity = quantity;
		_discount = discount;
	}
	void printInfo()
	{
		cout << "Product: " << _name << " | Price: $" << _price << " | Quantity: " << _quantity << " | Discount: " << _discount << "%" << endl;
	}
	void Total()
	{
		cout << "Total after discount: $" << (double)((_price * _quantity) * (100 - _discount) / 100);
	}
private:
	char _name[256];
	double _price;
	int _quantity;
	int _discount;
};

int main()
{
	Product Pen("Pen", 2.0, 10, 10);
	Pen.printInfo();
	Pen.Total();

	return 0;
}
