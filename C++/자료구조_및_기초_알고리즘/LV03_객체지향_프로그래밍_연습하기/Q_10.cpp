#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
public:
	void setAcc(int balance, const char* account, const char* bank, const char* type)
	{
		_balance = balance;
		strcpy_s(_account, account);
		strcpy_s(_bank, bank);
		strcpy_s(_type, type);
	}
	void print()
	{
		cout << "Account: " << _account << " | Bank: " << _bank << " | Type: " << _type << endl;
		cout << "Balance : $" << _balance << " -> Deposit $200 -> Balance: $" << _balance + 200;
	}
private:
	int _balance;
	char _account[256];
	char _bank[256];
	char _type[256];
};

class Customer
{
public:
	Customer(const char* name, const char* phone, int age)
	{
		strcpy_s(_name, name);
		strcpy_s(_phone, phone);
		_age = age;
	}
	void setBankAccout(int bal, const char* account, const char* bank, const char* type)
	{
		_acc.setAcc(bal, account, bank, type);
	}
	void printInfo()
	{
		cout << "Customer : " << _name << " | Phone: " << _phone << " | Age: " << _age << endl;
		_acc.print();
	}
private:
	char _name[256];
	char _phone[256];
	int _age;
	BankAccount _acc;
};

int main()
{
	Customer Alice("Alice", "010-1234-5678", 27);
	Alice.setBankAccout(1500, "123-456", "Hana", "Saving");
	Alice.printInfo();

	return 0;
}
