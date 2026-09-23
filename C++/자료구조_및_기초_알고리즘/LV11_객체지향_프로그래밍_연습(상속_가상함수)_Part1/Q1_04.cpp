#include <iostream>
#include <string>
using namespace std;

class Instrument
{
public:
	virtual void Play()
	{
		cout << "???" << endl;
	}
private:

};

class Piano : public Instrument
{
public:
	void Play() override
	{
		cout << "ding ding!" << endl;
	}
private:

};

class Guitar : public Instrument
{
public:
	void Play() override
	{
		cout << "strum strum!" << endl;
	}
private:

};

int main()
{
	Piano p;
	Guitar g;
	Instrument* instruments[] = { &p, &g };
	for (int i = 0; i < 2; ++i)
		instruments[i]->Play();

	return 0;
}
