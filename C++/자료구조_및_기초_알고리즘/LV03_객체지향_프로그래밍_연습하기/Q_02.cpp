#include <iostream>
using namespace std;

class Rectangle
{
public:
	void getColor()
	{
		char color[256];
		cin >> color;
		strcpy_s(_Color, color);
	}
	void getWidth()
	{
		int wid;
		cin >> wid;
		_Width = wid;
	}
	void getHeight()
	{
		int hei;
		cin >> hei;
		_Height = hei;
	}
	void getBorder()
	{
		int bor;
		cin >> bor;
		_Border = bor;
	}
	void printInfo()
	{
		cout << "Color : " << _Color << ", Border : " << _Border << "px" << endl;
		cout << "Area : " << _Width * _Height << ", Perimeter : " << (_Width + _Height) * 2;
	}
private:
	char _Color[256];
	int _Width;
	int _Height;
	int _Border;
};

int main()
{
	Rectangle A;
	A.getColor();
	A.getWidth();
	A.getHeight();
	A.getBorder();
	A.printInfo();

	return 0;
}
