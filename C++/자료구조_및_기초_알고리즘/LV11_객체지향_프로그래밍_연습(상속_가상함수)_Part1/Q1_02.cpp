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
};

class Circle : public Shape
{
public:
	Circle(double r)
	{
		Radius = r;
	}
	double Area() override
	{
		return 3.14 * Radius * Radius;
	}
private:
	double Radius;
};

class Rectangle : public Shape
{
public:
	Rectangle(double w, double h)
	{
		Width = w;
		Heigth = h;
	}
	double Area() override
	{
		return Width * Heigth;
	}
private:
	double Width;
	double Heigth;
};

int main()
{
	Circle c(3.0);
	Rectangle r(4.0, 2.0);
	Shape* shapes[2] = { &c, &r };
	for (int i = 0; i < 2; i++)
	{
		cout << shapes[i]->Area() << endl;
	}

	return 0;
}
