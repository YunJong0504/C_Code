#include <iostream>
using namespace std;

class Account
{
public:
	Account(const char* name, int num, int bal)
	{
		strcpy_s(_Owner, name);
		_Number = num;
		_Balance = bal;
	}
	void deposit(int money)
	{
		_Balance += money;
	}
	int withdraw(int money)
	{
		_Balance -= money;
		return money;
	}
	char* getOwner()
	{
		return _Owner;
	}
	int inquiry()
	{
		return _Balance;
	}
private:
	char _Owner[10];
	int _Number;
	int _Balance;
};

int main()
{
	Account a("kitae", 1, 5000);

	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은" << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은" << a.inquiry() << endl;

	return 0;
}
