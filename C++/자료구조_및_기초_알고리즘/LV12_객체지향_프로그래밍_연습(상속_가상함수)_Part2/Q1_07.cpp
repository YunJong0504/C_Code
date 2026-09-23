#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Component
{
public:
    virtual void Display() = 0;
    virtual ~Component() {}
};

class Leaf : public Component
{
private:
    string Name;
public:
    Leaf(string n) : Name(n) {}
    void Display() override
    {
        cout << "Name : " << Name << endl;
    }
};

class Composite : public Component
{
private:
    string Name;
    Component* Folder[10];
    int Idx;
public:
    Composite(string n) : Name(n), Idx(0) {}
    void Add(Component* c)
    {
        Folder[Idx++] = c;
    }
    void Display() override
    {
        cout << "Folder : " << Name << endl;

        for (int i = 0; i < Idx; i++)
        {
            Folder[i]->Display();
        }
    }
};

int main()
{
    Leaf l1("Item1");
    Leaf l2("Item2");
    Composite comp("Folder");
    comp.Add(&l1);
    comp.Add(&l2);
    Component* components[] = { &l1, &comp };
    for (int i = 0; i < 2; ++i)
        components[i]->Display();

    return 0;
}
