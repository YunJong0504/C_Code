#include <iostream>
using namespace std;

class Date
{
public:
	Date(int y, int m, int d)
	{
		_Year = y;
		_Month = m;
		_Day = d;
	}
	Date(const char* i)
	{
		strcpy_s(_IndependenceDay, i);
	}
	void show()
	{
		cout << _IndependenceDay << endl;
	}
	int getYear()
	{
		return _Year;
	}
	int getMonth()
	{
		return _Month;
	}
	int getDay()
	{
		return _Day;
	}
private:
	int _Year;
	int _Month;
	int _Day;
	char _IndependenceDay[10];
};

int main()
{
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

	return 0;
}
