#include <iostream>
#include <string>
using namespace std;

class Robot
{
public:
    void SetName(string n)
    {
        Name = n;
    }
    virtual void Move()
    {
        cout << endl;
    }
    virtual void Work()
    {
        cout << endl;
    }
private:
    string Name;
};

class CleaningRobot : public Robot
{
public:
    CleaningRobot(string n)
    {
        SetName(n);
    }
    void Move() override
    {
        cout << "moves slowly" << endl;
    }
    void Work() override
    {
        cout << "cleans floor" << endl;
    }
private:

};

class DeliveryRobot : public Robot
{
public:
    DeliveryRobot(string n)
    {
        SetName(n);
    }
    void Move() override
    {
        cout << "moves fast" << endl;
    }
    void Work() override
    {
        cout << "delivers package" << endl;
    }
private:

};

int main()
{
    CleaningRobot cr("Roomba");
    DeliveryRobot dr("DeliveryBot");
    Robot* robots[] = { &cr, &dr };
    for (int i = 0; i < 2; ++i) {
        robots[i]->Move();
        robots[i]->Work();
    }

	return 0;
}
