#include <iostream>
#include <string>
using namespace std;

class Transport
{
public:
    void SetDistance(int d)
    {
        Distance = d;
    }
    int GetDistance()
    {
        return Distance;
    }
    virtual int CalculateFare()
    {
        return Distance;
    }
private:
    int Distance;
};

class Taxi : public Transport
{
public:
    Taxi(int d)
    {
        SetDistance(d);
    }
    int CalculateFare() override
    {
        return GetDistance() * 1000;
    }
private:

};

class Bus : public Transport
{
public:
    Bus(int d)
    {
        SetDistance(d);
    }
    int CalculateFare() override
    {
        return 1500;
    }
private:

};

int main()
{
    Taxi taxi(5);
    Bus bus(5);
    Transport* transports[] = { &taxi, &bus };
    for (int i = 0; i < 2; ++i)
        std::cout << transports[i]->CalculateFare() << std::endl;

	return 0;
}
