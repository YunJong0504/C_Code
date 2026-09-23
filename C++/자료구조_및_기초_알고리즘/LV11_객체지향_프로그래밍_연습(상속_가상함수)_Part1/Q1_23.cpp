#include <iostream>
#include <string>
using namespace std;

class Device
{
    string Name;
public:
    void SetName(string n)
    {
        Name = n;
    }
    string GetName()
    {
        return Name;
    }
    virtual void PowerOn()
    {
        cout << endl;
    }
    virtual void ShowInfo()
    {
        cout << endl;
    }
    virtual void PowerOff()
    {
        cout << "Power off" << endl;
    }
};

class Smartphone : public Device
{
public:
    Smartphone(string n)
    {
        SetName(n);
    }
    void PowerOn() override
    {
        cout << "SmartPhone Power On" << endl;
    }
    void ShowInfo() override
    {
        cout << "Name: " << GetName() << endl;
    }
    void PowerOff() override
    {
        cout << "SmartPhone Power Off" << endl;
    }
};

class SmartWatch : public Device
{
public:
    SmartWatch(string n)
    {
        SetName(n);
    }
    void PowerOn() override
    {
        cout << "SmartWatch Power On" << endl;
    }
    void ShowInfo() override
    {
        cout << "Name: " << GetName() << endl;
    }
};

int main()
{
    Smartphone sp("Galaxy");
    SmartWatch sw("Apple Watch");
    Device* devices[] = { &sp, &sw };
    for (int i = 0; i < 2; ++i) {
        devices[i]->PowerOn();
        devices[i]->ShowInfo();
        devices[i]->PowerOff();
    }

	return 0;
}
