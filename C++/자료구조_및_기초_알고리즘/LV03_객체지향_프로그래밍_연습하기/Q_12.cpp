#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
	Book(const char* name, const char* author, const char* genre, int page)
	{
		strcpy_s(_name, name);
		strcpy_s(_author, author);
		strcpy_s(_genre, genre);
		_page = page;
	}
	void printInfo()
	{
		cout << "- \"" << _name << "\" by " << _author << " (" << _genre << ", " << _page << "p)" << endl;
	}
private:
	char _name[256];
	char _author[256];
	char _genre[256];
	int _page;
};

class Library
{
public:
	Library(const char* location, const char* manager)
	{
		strcpy_s(_location, location);
		strcpy_s(_manager, manager);
	}
	void printInfo(Book b1, Book b2)
	{
		cout << "Library: " << _location << " Library | Manager: " << _manager << endl;
		cout << "Books:" << endl;
		b1.printInfo();
		b2.printInfo();
	}
private:
	char _location[256];
	char _manager[256];
};

int main()
{
	Book b1("1984", "Orwell", "Dystopia", 320);
	Book b2("Dune", "Herbert", "Sci-Fi", 500);
	Library L1("Central", "MS.Kim");
	L1.printInfo(b1, b2);

	return 0;
}
