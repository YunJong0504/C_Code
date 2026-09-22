#include <iostream>
using namespace std;

class CAL
{
public:
	CAL(int a, int b)
	{
		calculator(a, b);
	}
	void calculator(int num1, int num2)
	{
		_sum = num1 + num2;
		_sub = num1 - num2;
		_mul = num1 * num2;
		_div = num1 / num2;
		_mod = num1 % num2;
	}
	void printInfo()
	{
		cout << "덧셈:" << _sum << endl;
		cout << "뺄셈:" << _sub << endl;
		cout << "곱셈:" << _mul << endl;
		cout << "나눗셈:" << _div << endl;
		cout << "나머지:" << _mod << endl;
	}
private:
	int _sum;
	int _sub;
	int _mul;
	int _div;
	int _mod;
};

int main()
{
	int a, b;
	cin >> a >> b;

	CAL test(a, b);
	test.printInfo();

	return 0;
}
