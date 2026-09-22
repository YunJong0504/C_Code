#include <iostream>
#include <string>
using namespace std;

class Movie
{
public:
	Movie(const char* title, int duration, const char* genre, int age, const char* director)
	{
		strcpy_s(_title, title);
		strcpy_s(_genre, genre);
		strcpy_s(_director, director);
		_duration = duration;
		_age = age;
	}
	void printInfo()
	{
		cout << "[Movie]" << endl;
		cout << "Title: " << _title << endl;
		cout << "Duration: " << _duration << " min" << endl;
		cout << "Genre: " << _genre << endl;
		cout << "Rated: " << _age << "+" << endl;
		cout << "Directed by: " << _director;
	}
private:
	char _title[256];
	int _duration;
	char _genre[256];
	int _age;
	char _director[256];
};

int main()
{
	Movie A("Intersteller", 169, "Sci-Fi", 12, "Nolan");
	A.printInfo();

	return 0;
}
