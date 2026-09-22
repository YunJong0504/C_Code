#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	Student(const char* name, int grade, char cla, int score)
	{
		strcpy_s(_name, name);
		_grade = grade;
		_class = cla;
		_score = score;
	}
	void printInfo()
	{
		cout << "-" << _name << " (Grade " << _grade << ", Class " << _class << "): " << _score << endl;
	}
private:
	char _name[256];
	int _grade;
	char _class;
	int _score;
};

class Teacher
{
public:
	Teacher(const char* name, const char* subject, int years)
	{
		strcpy_s(_name, name);
		strcpy_s(_subject, subject);
		_years = years;
	}
	void printInfo()
	{
		cout << "Teacher: " << _name << " (" << _subject << ", " << _years << " years)" << endl;
	}
	void printStudent(Student s1, Student s2, Student s3)
	{
		s1.printInfo();
		s2.printInfo();
		s3.printInfo();
	}
private:
	char _name[256];
	char _subject[256];
	int _years;
};

int main()
{
	Student s1("Tom", 2, 'A', 85);
	Student s2("Jane", 2, 'A', 90);
	Student s3("Sam", 2, 'A', 75);
	Teacher t1("Mr.Lee", "Math", 10);
	t1.printInfo();
	t1.printStudent(s1, s2, s3);

	return 0;
}
