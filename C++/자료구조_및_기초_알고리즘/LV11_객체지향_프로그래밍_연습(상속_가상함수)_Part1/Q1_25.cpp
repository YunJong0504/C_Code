#include <iostream>
#include <string>
using namespace std;

class IRenderable
{
public:
	virtual void Render() const = 0;
};

class IUpdateable
{
public:
	virtual void Update() const = 0;
};

class GameObject : public IRenderable, public IUpdateable
{
	string Name;
public:
	void SetName(string n)
	{
		Name = n;
	}
	string GetName() const
	{
		return Name;
	}
};

class Player : public GameObject
{
public:
	Player(string n)
	{
		SetName(n);
	}
	void Render() const override
	{
		cout << GetName() << " Rendering...." << endl;
		cout << "Rendering Complete" << endl;
	}
	void Update() const override
	{
		cout << GetName() << " Updating...." << endl;
		cout << "Updating Complete" << endl;
	}
};

class Enemy : public GameObject
{
public:
	Enemy(string n)
	{
		SetName(n);
	}
	void Render() const override
	{
		cout << GetName() << " Rendering...." << endl;
		cout << "Rendering Complete" << endl;
	}
	void Update() const override
	{
		cout << GetName() << " Updating...." << endl;
		cout << "Updating Complete" << endl;
	}
};

int main()
{
	Player p("Hero");
	Enemy e("Goblin");
	IRenderable* renderables[] = { &p, &e };
	IUpdateable* updateables[] = { &p, &e };
	for (int i = 0; i < 2; i++)
	{
		updateables[i]->Update();
		renderables[i]->Render();
	}

	return 0;
}
