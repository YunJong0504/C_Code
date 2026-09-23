#include <iostream>
#include <list>
using namespace std;

list<char> clist;

void add(char ch)
{
	clist.push_back(ch);
}

int main()
{
	int size;
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		char ch;
		cin >> ch;
		add(ch);
	}

	for (char& i : clist)
	{
		cout << i << " ";
	}

    return 0;
}
