#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:
	virtual double Area()
	{
		return 0;
	}
private:

};

class Circle : public Shape
{
public:
	Circle(double r)
	{
		Redius = r;
	}
	double Area() override
	{
		return 2 * Redius * 3.14;
	}
private:
	double Redius;
};

class Square : public Shape
{
public:
	Square(double s)
	{
		Side = s;
	}
	double Area() override
	{
		return Side * Side;
	}
private:
	double Side;
};

int main()
{
	Circle c(5.0);
	Square s(4.0);
	Shape* shapes[] = { &c, &s };
	for (int i = 0; i < 2; i++)
	{
		cout << shapes[i]->Area() << endl;
	}

	return 0;
}
