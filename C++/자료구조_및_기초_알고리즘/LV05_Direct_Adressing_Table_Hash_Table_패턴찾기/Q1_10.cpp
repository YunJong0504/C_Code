#include <iostream>
using namespace std;

class Person
{
public:
	Person()
		: _Name(""), _Address(""), _Phone(""), _Id(0), _Mileage(0) {}
	void GetInfo()
	{
		cout << "이름을 입력하세요: ";
		cin >> _Name;
		cout << "주소를 입력하세요: ";
		cin >> _Address;
		cout << "연락처를 입력하세요: ";
		cin >> _Phone;
		cout << "ID를 입력하세요: ";
		cin >> _Id;
		cout << "마일리지를 입력하세요: ";
		cin >> _Mileage;
	}
	void PrintInfo()
	{
		cout << "-----고객 정보 -----" << endl;
		cout << "이름: " << _Name << endl;
		cout << "주소: " << _Address << endl;
		cout << "연락처: " << _Phone << endl;
		cout << "고객ID: " << _Id << endl;
		cout << "마일리지: " << _Mileage << endl;
	}
private:
	string _Name;
	string _Address;
	string _Phone;
	int _Id;
	int _Mileage;
};

int main()
{
	Person Lee;
	Lee.GetInfo();
	Lee.PrintInfo();

	return 0;
}
