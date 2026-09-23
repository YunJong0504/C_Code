#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:
	virtual double Area() const = 0;
	virtual double Perimeter() const = 0;
private:

};

class Rectangle : public Shape
{
public:
	Rectangle(double w, double h)
	{
		Width = w;
		Heigth = h;
	}
	double Area() const override
	{
		return Width * Heigth;
	}
	double Perimeter() const override
	{
		return 2 * (Width + Heigth);
	}
private:
	double Width;
	double Heigth;
};

class Circle : public Shape
{
public:
	Circle(double r)
	{
		Redius = r;
	}
	double Area() const override
	{
		return 3.14 * Redius * Redius;
	}
	double Perimeter() const override
	{
		return 2 * 3.14 * Redius;
	}
private:
	double Redius;
};

class Triangle : public Shape
{
public:
	Triangle(double h, double w, double hy)
	{
		Heigth = h;
		Width = w;
		Hypotenuse = hy;
	}
	double Area() const override
	{
		return (Heigth * Width) / 2;
	}
	double Perimeter() const override
	{
		return Heigth + Width + Hypotenuse;
	}
private:
	double Heigth;
	double Width;
	double Hypotenuse;
};

int main()
{
	Rectangle r(4, 5);
	Circle c(3);
	Triangle t(3, 4, 5);
	Shape* shapes[] = { &r,&c,&t };
	for (int i = 0; i < 3; i++)
	{
		cout << "Area: " << shapes[i]->Area() << endl;
		cout << "Perimeter: " << shapes[i]->Perimeter() << endl;
	}

	return 0;
}
