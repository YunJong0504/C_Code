#include <iostream>
#include <string>
using namespace std;

class Account
{
public:
    void SetBalance(double b)
    {
        Balance = b;
    }
    double GetBalance()
    {
        return Balance;
    }
    virtual void Deposit(double d)
    {
        Balance += d;
    }
    virtual void Withdraw(double w)
    {
        Balance -= w;
    }
    virtual void ShowBalance()
    {
        cout << Balance << endl;
    }
private:
    double Balance;
};

class SavingsAccount : public Account
{
public:
    SavingsAccount(double b, double i)
    {
        SetBalance(b);
        Interest = i;
    }
    void Deposit(double d) override
    {
        int b = GetBalance();
        b += d;
        SetBalance(b);
    }
    void Withdraw(double w) override
    {
        int b = GetBalance();
        b -= w;
        SetBalance(b);
    }
    void ShowBalance() override
    {
        cout << "SavingsAccount : " << GetBalance() * (1 - Interest) << "$" << endl;
    }
private:
    double Interest;
};

class CheckingAccount : public Account
{
public:
    CheckingAccount(double b, double i)
    {
        SetBalance(b);
        Interest = i;
    }
    void Deposit(double d) override
    {
        int b = GetBalance();
        b += d;
        SetBalance(b);
    }
    void Withdraw(double w) override
    {
        int b = GetBalance();
        b -= w;
        SetBalance(b);
    }
    void ShowBalance() override
    {
        cout << "CheckingAccount : " << GetBalance() * Interest << "$" << endl;
    }
private:
    double Interest;
};

int main()
{
    SavingsAccount sa(1000, 0.03);
    CheckingAccount ca(2000, 1.5);
    Account* accounts[] = { &sa, &ca };
    for (int i = 0; i < 2; ++i) {
        accounts[i]->Deposit(500);
        accounts[i]->Withdraw(200);
        accounts[i]->ShowBalance();
    }

	return 0;
}
