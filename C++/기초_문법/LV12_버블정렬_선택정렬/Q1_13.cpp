#include <iostream>
using namespace std;

int main()
{
	char ch1, ch2;
	cin >> ch1 >> ch2;

	char* p1 = &ch1;
	char* p2 = &ch2;

	char temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	cout << *p1 << " " << *p2;
	
	return 0;
}
