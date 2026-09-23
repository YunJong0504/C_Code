#include <iostream>
#include <string>
using namespace std;

class Filter
{
public:
	virtual string Apply(string input) = 0;
};

class UpperCaseFilter : public Filter
{
public:
	string Apply(string input) override
	{
		string str = input;
		for (int i = 0; i < str.length(); i++)
		{
			if (islower(str[i]))
			{
				str[i] = toupper(str[i]);
			}
		}
		return str;
	}
};

class LowerCaseFilter : public Filter
{
public:
	string Apply(string input) override
	{
		string str = input;
		for (int i = 0; i < str.length(); i++)
		{
			if (isupper(str[i]))
			{
				str[i] = tolower(str[i]);
			}
		}
		return str;
	}
};

class ReverseFilter : public Filter
{
public:
	string Apply(string input) override
	{
		string str = input;
		for (int i = 0; i < str.length(); i++)
		{
			if (isupper(str[i]))
			{
				str[i] = tolower(str[i]);
			}
			else if (islower(str[i]))
			{
				str[i] = toupper(str[i]);
			}
		}
		return str;
	}
};

int main()
{
	UpperCaseFilter upper; LowerCaseFilter lower; ReverseFilter reverse;
	Filter* filters[] = { &upper, &lower, &reverse };
	for (int i = 0; i < 3; ++i)
		cout << filters[i]->Apply("Hello") << endl;

	return 0;
}
