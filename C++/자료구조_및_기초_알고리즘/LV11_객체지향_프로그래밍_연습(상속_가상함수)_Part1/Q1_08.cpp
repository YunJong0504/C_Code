#include <iostream>
#include <string>
using namespace std;

class Notification
{
public:
	void SetInfo(string i)
	{
		Info = i;
	}
	string GetInfo()
	{
		return Info;
	}
	virtual void Send()
	{
		cout << "???" << endl;
	}
private:
	string Info;
};

class EmailNotification : public Notification
{
public:
	EmailNotification(string i)
	{
		SetInfo(i);
	}
	void Send() override
	{
		cout << "Send to " << GetInfo() << endl;
	}
private:

};

class SMSNotification : public Notification
{
public:
	SMSNotification(string i)
	{
		SetInfo(i);
	}
	void Send() override
	{
		cout << "Send to " << GetInfo() << endl;
	}
private:

};

int main()
{
	EmailNotification e("kim@example.com");
	SMSNotification s("010-1234-5678");
	Notification* notices[] = { &e, &s };
	for (int i = 0; i < 2; ++i)
		notices[i]->Send();

	return 0;
}
