#include <iostream>
#include <string>
using namespace std;

class Payment
{
public:
	void SetMoney(int m)
	{
		Money = m;
	}
	virtual void Process()
	{
		cout << " " << endl;
	}
private:
	int Money;
};

class CreditCard : public Payment
{
public:
	CreditCard(int m)
	{
		SetMoney(m);
	}
	void Process() override
	{
		cout << "Processing credit card payment" << endl;
	}
private:

};

class Cash : public Payment
{
public:
	Cash(int m)
	{
		SetMoney(m);
	}
	void Process() override
	{
		cout << "Processing cash payment" << endl;
	}
private:

};

int main()
{
	CreditCard cc(10000);
	Cash cash(5000);
	Payment* payments[] = { &cc, &cash };
	for (int i = 0; i < 2; ++i)
		payments[i]->Process();


	return 0;
}
