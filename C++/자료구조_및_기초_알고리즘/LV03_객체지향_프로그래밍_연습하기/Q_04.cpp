#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	Student(const char* name, int id, int math, int eng, int science)
	{
		strcpy_s(_name, name);
		_id = id;
		_math = math;
		_eng = eng;
		_science = science;
	}
	void PrintInfo()
	{
		cout << "Name: " << _name << " (ID: " << _id << ")" << endl;
		cout << "Math: " << _math << ", English: " << _eng << ", Science: " << _science << endl;
	}
	void Average()
	{
		cout << "Average Score: " << (float)((_math + _eng + _science) / 3) << endl;
	}
private:
	char _name[256];
	int _id;
	int _math;
	int _eng;
	int _science;
};

int main()
{
	Student John("John", 20231234, 85, 78, 92);
	Student Minho("Minho", 20231235, 85, 88, 92);
	Student Gahong("Gahong", 20231236, 95, 78, 92);

	John.PrintInfo();
	John.Average();
	Minho.PrintInfo();
	Minho.Average();
	Gahong.PrintInfo();
	Gahong.Average();

	return 0;
}
