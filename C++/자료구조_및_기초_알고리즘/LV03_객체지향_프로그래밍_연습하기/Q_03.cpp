#include <iostream>
#include <string>
using namespace std;

class Circle
{
public:
	Circle(float radius, const char* color, const char* fill, float opacity)
	{
		_radius = radius;
		strcpy_s(_color, color);
		strcpy_s(_filled, fill);
		_opacity = opacity;
	}
	void printInfo()
	{
		cout << "Radius: " << _radius << endl;
		cout << "Color: " << _color << endl;
		cout << "Filled: " << _filled << endl;
		cout << "Opacity: " << _opacity << endl;
	}
	void Calcul()
	{
		cout << "Area: " << _radius * _radius * 3.14 << endl;
		cout << "Circumference: " << 2 * _radius * 3.14;
	}
private:
	float _radius;
	char _color[256];
	char _filled[256];
	float _opacity;
};

int main()
{
	Circle C(5, "Red", "Yes", 0.75);
	C.printInfo();
	C.Calcul();

	return 0;
}
