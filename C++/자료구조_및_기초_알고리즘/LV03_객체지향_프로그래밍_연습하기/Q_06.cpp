#include <iostream>
#include <string>
using namespace std;

class Timer
{
public:
	Timer(int total, int elapsed, const char* name)
	{
		strcpy_s(_name, name);
		_total = total;
		_elapsed = elapsed;
		cout << "Timer \"" << _name << "\" started." << endl;
	}
	void print()
	{
		cout << "Elapsed: " << _elapsed << "s / Total: " << _total << "s" << endl;
	}
private:
	int _total;
	int _elapsed;
	char _name[256];
};

int main()
{
	Timer Cooking(300, 90, "Cooking");
	Cooking.print();

	return 0;
}
