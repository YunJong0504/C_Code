#include <iostream>
#include <string>
using namespace std;

class SmartDevice
{
public:
	virtual void Execute(string c)
	{
		cout << "???" << endl;
	}
};

class SmartLight : public SmartDevice
{
public:
	void Execute(string c) override
	{
		string On = "turn on";
		if (c == On)
		{
			cout << "Light On" << endl;
		}
	}
};

class SmartSpeaker : public SmartDevice
{
public:
	void Execute(string c) override
	{
		string On = "turn on";
		if (c == On)
		{
			cout << "Speaker On" << endl;
		}
	}
};

int main()
{
	SmartLight sl; 
	SmartSpeaker ss;
	SmartDevice* devices[] = { &sl, &ss };
	for (int i = 0; i < 2; ++i)
		devices[i]->Execute("turn on");

	return 0;
}
