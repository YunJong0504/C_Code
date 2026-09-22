#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	Student() {}
	void setStud(string name, string id, string grade)
	{
		_name = name;
		_id = id;
		_grade = grade;
	}
	void printInfo()
	{
		cout << "-" << _name << " (" << _id << ", " << _grade << " year)" << endl;
	}
private:
	string _name;
	string _id;
	string _grade;
};

class Course
{
public:
	Course(string title, string instructor, int capacity)
	{
		_title = title;
		_instructor = instructor;
		_capacity = capacity;
	}
	void setS1(string n, string i, string g)
	{
		s1.setStud(n, i, g);
	}
	void setS2(string n, string i, string g)
	{
		s2.setStud(n, i, g);
	}
	void setS3(string n, string i, string g)
	{
		s3.setStud(n, i, g);
	}
	void printInfo()
	{
		cout << "Course: " << _title << " | Instructor: " << _instructor << " | Capacity: " << _capacity << endl;
		cout << "Students:" << endl;
		s1.printInfo();
		s2.printInfo();
		s3.printInfo();
	}
private:
	string _title;
	string _instructor;
	int _capacity;
	Student s1, s2, s3;
};

int main()
{
	Course cour1("Programming 101", "Dr.Kim", 30);
	cour1.setS1("Alice", "CS", "2nd");
	cour1.setS2("Bob", "EE", "1nd");
	cour1.setS3("Charlie", "CS", "3nd");
	cour1.printInfo();

	return 0;
}
