#include <iostream>
using namespace std;

class Book
{
public:
	Book(const char* title, const char* author, const char* publish, float price)
	{
		strcpy_s(_Title, title);
		strcpy_s(_Author, author);
		strcpy_s(_Publisher, publish);
		_Price = price;
	}
	void printInfo()
	{
		cout << "Title: \"" << _Title << "\"" << endl;
		cout << "Author: \"" << _Author << "\"" << endl;
		cout << "Publisher: \"" << _Publisher << "\"" << endl;
		cout << "Price: $" << _Price;
	}

private:
	char _Title[256];
	char _Author[256];
	char _Publisher[256];
	float _Price;
};

int main()
{
	Book One("1984", "George Orwell", "Penguin", 15.99);
	One.printInfo();

	return 0;
}
