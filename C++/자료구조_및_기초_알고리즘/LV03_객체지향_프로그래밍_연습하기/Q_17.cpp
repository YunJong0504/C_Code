#include <iostream>
#include <string>
using namespace std;

class Movie
{
public:
	Movie() {}
	void setMovie(string title, string genre, string grade, int time)
	{
		_title = title;
		_genre = genre;
		_grade = grade;
		_time = time;
	}
	void printinfo()
	{
		cout << "- \"" << _title << "\" (" << _time << " min, " << _grade << ")" << endl;
	}
	int getTime()
	{
		return _time;
	}
private:
	string _title;
	string _genre;
	string _grade;
	int _time;
};

class Theater
{
public:
	Theater(string name, string location)
	{
		_name = name;
		_location = location;
	}
	void setMovie1(string t, string gen, string gra, int time)
	{
		m1.setMovie(t, gen, gra, time);
	}
	void setMovie2(string t, string gen, string gra, int time)
	{
		m2.setMovie(t, gen, gra, time);
	}
	void setTotal()
	{
		int m1_time = m1.getTime();
		int m2_time = m2.getTime();
		_totaltime = m1_time + m2_time;
	}
	void printInfo()
	{
		cout << "Theater: " << _name << " | Location: " << _location << endl;
		cout << "Now Showing:" << endl;
		m1.printinfo();
		m2.printinfo();
		cout << "Total: " << _totaltime << " minutes";
	}
private:
	string _name;
	string _location;
	int _totaltime;
	Movie m1;
	Movie m2;
};

int main()
{
	Theater cgv("CGV Gangnam", "Seoul");
	cgv.setMovie1("Avatar", "SF", "12+", 162);
	cgv.setMovie2("Titanic", "SF", "All", 195);
	cgv.setTotal();
	cgv.printInfo();

	return 0;
}
