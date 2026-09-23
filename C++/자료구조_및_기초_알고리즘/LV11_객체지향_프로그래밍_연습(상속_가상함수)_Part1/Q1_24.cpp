#include <iostream>
#include <string>
using namespace std;

class IDrawable
{
public:
    virtual void Draw() const = 0;
};

class Circle : public IDrawable
{
    double Redius;
public:
    Circle(double r)
    {
        Redius = r;
    }
    void Draw() const override
    {
        double Area = 3.14 * Redius * Redius;
        cout << "Drawing Circle: " << Area << "cm^2" << endl;
    }
};

class Rectangle : public IDrawable
{
    double Width;
    double Heigth;
public:
    Rectangle(double w, double h)
    {
        Width = w;
        Heigth = h;
    }
    void Draw() const override
    {
        double Area = Width * Heigth;
        cout << "Drawing Rectangle: " << Area << "cm^2" << endl;
    }
};

int main()
{
    Circle c(5);
    Rectangle r(4, 3);
    IDrawable* drawables[] = { &c, &r };
    for (int i = 0; i < 2; ++i)
        drawables[i]->Draw();

	return 0;
}
