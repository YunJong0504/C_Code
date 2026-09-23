#include <iostream>
#include <string>
using namespace std;

class Delivery
{
protected:
	double Distance;
public:
	Delivery(double d) : Distance(d) {}
	virtual double Calculate() = 0;
	virtual void GetInfo() = 0;
};

class StandardDelivery : public Delivery
{
public:
	StandardDelivery() : Delivery(1) {}
	double Calculate() override
	{
		return Distance * 3000;
	}
	void GetInfo() override
	{
		cout << "StandardDelivery!" << endl;
	}
};

class ExpressDelivery : public Delivery
{
public:
	ExpressDelivery(double d) : Delivery(d) {}
	double Calculate() override
	{
		return Distance * 500;
	}
	void GetInfo() override
	{
		cout << "ExpressDelivery!" << endl;
	}
};

int main()
{
	StandardDelivery std;
	ExpressDelivery exp(10);
	Delivery* deliveries[] = { &std, &exp };
	for (int i = 0; i < 2; ++i) {
		deliveries[i]->GetInfo();
		std::cout << deliveries[i]->Calculate() << std::endl;
	}

	return 0;
}
