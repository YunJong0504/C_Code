#include <iostream>
#include <string>
using namespace std;

class Player
{
public:
	Player(const char* name, char team, int score)
	{
		strcpy_s(_name, name);
		_team = team;
		_score = score;
	}
	void printInfo()
	{
		cout << "-Player : " << _name << " (Team " << _team << ") Score: " << _score << endl;
	}
	int getScore()
	{
		return _score;
	}
private:
	char _name[256];
	char _team;
	int _score;
};

class ScoreBoard
{
public:
	ScoreBoard(Player p1, Player p2)
	{
		cout << "[ScoreBoard]" << endl;
		p1.printInfo();
		p2.printInfo();
		int p1score = p1.getScore();
		int p2score = p2.getScore();
		cout << "Average: " << (p1score + p2score) / 2;
	}
private:
};

int main()
{
	Player p1("John", 'A', 80);
	Player p2("Mary", 'B', 90);
	ScoreBoard(p1, p2);

	return 0;
}
