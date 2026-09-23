#include <iostream>
#include <string>
using namespace std;

class Drink
{
public:
    void SetInfo(string n, int p)
    {
        Name = n;
        Price = p;
    }
    virtual void Dispense()
    {
        cout << endl;
    }
private:
    string Name;
    int Price;
};

class Soda : public Drink
{
public:
    Soda(string n, int p)
    {
        SetInfo(n, p);
    }
    void Dispense() override
    {
        cout << "Dispensing soda with ice" << endl;
    }
private:

};

class Juice : public Drink
{
public:
    Juice(string n, int p)
    {
        SetInfo(n, p);
    }
    void Dispense() override
    {
        cout << "Dispensing fresh juice" << endl;
    }
private:

};

int main()
{
    Soda soda("Coke", 1500);
    Juice juice("Orange", 2000);
    Drink* drinks[] = { &soda, &juice };
    for (int i = 0; i < 2; ++i)
        drinks[i]->Dispense();

	return 0;
}
