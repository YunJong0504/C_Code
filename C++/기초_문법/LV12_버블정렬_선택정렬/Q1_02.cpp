#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;


	int a = 0;
	while (a < 3)
	{
		int b = 0;
		while (b < 5)
		{
			cout << num;
			b++;
		}
		cout << endl;
		a++;
	}

	return 0;
}
