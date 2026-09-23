#include <iostream>
#include <string>
using namespace std;

class Exercise
{
public:
	void SetTime(int t)
	{
		Time = t;
	}
	int GetTime()
	{
		return Time;
	}
	virtual void PrintCalories()
	{
		cout << Time * 1 << endl;
	}
private:
	int Time;
};

class Running : public Exercise
{
public:
	Running(int t)
	{
		SetTime(t);
	}
	void PrintCalories() override
	{
		cout << GetTime() * 10 << endl;
	}
private:

};

class Cycling : public Exercise
{
public:
	Cycling(int t)
	{
		SetTime(t);
	}
	void PrintCalories() override
	{
		cout << GetTime() * 6 << endl;
	}
private:

};

int main()
{
	Running run(30);
	Cycling cyc(60);
	Exercise* logs[] = { &run, &cyc };
	for (int i = 0; i < 2; ++i)
		logs[i]->PrintCalories();

	return 0;
}
