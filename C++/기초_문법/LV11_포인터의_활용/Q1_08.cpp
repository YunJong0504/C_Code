#include <iostream>
using namespace std;

struct PROFILE
{
	char name[7];
	int age;
	int weight;
};

int main()
{
	PROFILE A, B;
	cin >> A.name >> A.age >> A.weight;
	cin >> B.name >> B.age >> B.weight;

	for (int i = 0; i < 7; i++)
	{
		if (A.name[i] == 0)
			break;
		cout << A.name[i];
	}
	cout << " & ";

	for (int i = 0; i < 7; i++)
	{
		if (B.name[i] == 0)
			break;
		cout << B.name[i];
	}
	cout << endl;

	cout << "평균" << (A.age + B.age) / 2 << "세" << endl;
	cout << "평균" << (A.weight + B.weight) / 2 << "KG" << endl;
	return 0;
}
