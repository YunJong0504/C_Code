#include <iostream>
#include <string>
using namespace std;

class Author
{
public:
	void setAuthor(const char* name, const char* email, const char* field)
	{
		strcpy_s(_name, name);
		strcpy_s(_email, email);
		strcpy_s(_field, field);
	}
	void printInfo()
	{
		cout << "Author: " << _name << " | Email: " << _email << " | Field: " << _field << endl;
	}
private:
	char _name[256];
	char _email[256];
	char _field[256];
};

class Article
{
public:
	Article(const char* title, int chars)
	{
		strcpy_s(_title, title);
		_chars = chars;
	}
	void setAuthor(const char* name, const char* email, const char* field)
	{
		_a1.setAuthor(name, email, field);
	}
	void print()
	{
		cout << "Article: \"" << _title << "\" (" << _chars << " chars)" << endl;
		_a1.printInfo();
	}
private:
	Author _a1;
	char _title[256];
	int _chars;
};

int main()
{
	Article A1("Rise of AI", 1240);
	A1.setAuthor("Alice Kim", "alice@domain.com", "Computer Science");
	A1.print();

	return 0;
}
