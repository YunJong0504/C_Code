#include <iostream>
#include <string>
using namespace std;

class Product
{
public:
	Product() {}
	void setProduct(string name, int price, int quantity, int discount)
	{
		_name = name;
		_price = price;
		_quantity = quantity;
		_discount = discount;
		_totalprice = (_price * _quantity) * (100 - _discount) / 100;
	}
	int getTotal()
	{
		return _totalprice;
	}
	void printInfo()
	{
		cout << "-" << _name << ": $" << _price << " x " << _quantity << " (Discount " << _discount << "%) -> $" << _totalprice << endl;
	}
private:
	string _name;
	int _price;
	int _quantity;
	int _discount;
	int _totalprice;
};

class Order
{
public:
	Order(string name, string date)
	{
		_name = name;
		_date = date;
	}
	void setP1(string n, int p, int q, int d)
	{
		p1.setProduct(n, p, q, d);
	}
	void setP2(string n, int p, int q, int d)
	{
		p2.setProduct(n, p, q, d);
	}
	void printInfo()
	{
		cout << "Order by: " << _name << " | Date: " << _date << endl;
		cout << "Items:" << endl;
		p1.printInfo();
		p2.printInfo();
		cout << "Total: $" << p1.getTotal() + p2.getTotal();
	}
private:
	string _name;
	string _date;
	Product p1;
	Product p2;
};

int main()
{
	Order abc("Alice", "2024-05-18");
	abc.setP1("Keyboard", 50, 1, 0);
	abc.setP2("Mouse", 20, 2, 10);
	abc.printInfo();

	return 0;
}
