#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    void SetInfo(string n, int s)
    {
        Name = n;
        Score = s;
    }
    int GetScore()
    {
        return Score;
    }
    virtual char GetGrade()
    {
        return 0;
    }
private:
    string Name;
    int Score;
};

class UndergraduateStudent : public Student
{
public:
    UndergraduateStudent(string n, int s)
    {
        SetInfo(n, s);
    }
    char GetGrade() override
    {
        if (GetScore() >= 90)
            return 'A';
        else
            return 'B';
    }
private:

};

class GraduateStudent : public Student
{
public:
    GraduateStudent(string n, int s)
    {
        SetInfo(n, s);
    }
    char GetGrade() override
    {
        if (GetScore() >= 95)
            return 'A';
        else
            return 'B';
    }
private:

};

int main()
{
    UndergraduateStudent us("Kim", 92);
    GraduateStudent gs("Lee", 92);
    Student* students[] = { &us, &gs };
    for (int i = 0; i < 2; ++i)
        std::cout << students[i]->GetGrade() << std::endl;

	return 0;
}
