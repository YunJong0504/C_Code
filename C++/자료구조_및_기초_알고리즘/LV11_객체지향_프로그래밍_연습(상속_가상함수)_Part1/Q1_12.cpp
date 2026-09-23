#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
	void SetInfo(string t, string a)
	{
		Title = t;
		Author = a;
	}
	string GetTitle()
	{
		return Title;
	}
	string GetAuthor()
	{
		return Author;
	}
	virtual void Display()
	{
		cout << "Title : " << Title << endl;
		cout << "Author : " << Author << endl;
	}
private:
	string Title;
	string Author;
};

class EBook : public Book
{
public:
	EBook(string t, string a, double b)
	{
		SetInfo(t, a);
		Byte = b;
	}
	void Display() override
	{
		cout << "Title : " << GetTitle() << endl;
		cout << "Author : " << GetAuthor() << endl;
		cout << Byte << "KB" << endl;
		cout << "----------------------------" << endl;
	}
private:
	double Byte;
};

class PaperBook : public Book
{
public:
	PaperBook(string t, string a, int p)
	{
		SetInfo(t, a);
		Page = p;
	}
	void Display() override
	{
		{
			cout << "Title : " << GetTitle() << endl;
			cout << "Author : " << GetAuthor() << endl;
			cout << Page << "p" << endl;
			cout << "----------------------------" << endl;
		}
	}
private:
	int Page;
};

int main()
{
	EBook eb("Clean Code", "Robert Martin", 5.2);
	PaperBook pb("Refactoring", "Martin Fowler", 450);
	Book* books[] = { &eb, &pb };
	for (int i = 0; i < 2; ++i)
		books[i]->Display();

	return 0;
}
