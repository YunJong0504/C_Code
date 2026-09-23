#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class FileSystemNode
{
private:
    string Name;
public:
    FileSystemNode(string n) : Name(n) {}
    virtual int GetSize() = 0;
    virtual void Display() = 0;
    string GetName()
    {
        return Name;
    }
};

class File : public FileSystemNode
{
private:
    int FileSize;
public:
    File(string n, int f) : FileSystemNode(n), FileSize(f) {}
    int GetSize() override
    {
        return FileSize;
    }
    void Display() override
    {
        cout << "File: " << GetName() << endl;
    }
};

class Folder : public FileSystemNode
{
private:
    int FileSize;
    FileSystemNode* Fold[2];
    int Idx;
public:
    Folder(string n) : FileSystemNode(n), FileSize(0), Idx(0) {}
    void Add(FileSystemNode* c)
    {
        Fold[Idx++] = c;
    }
    int GetSize() override
    {
        return FileSize;
    }
    void Display() override
    {
        cout << "Folder: " << GetName() << endl;

        for (int i = 0; i < Idx; i++)
        {
            FileSize += Fold[i]->GetSize();
            Fold[i]->Display();
        }
    }
};

int main()
{
    File f1("doc.txt", 100);
    File f2("image.png", 500);
    Folder folder("MyFolder");
    folder.Add(&f1);
    folder.Add(&f2);
    FileSystemNode* nodes[] = { &f1, &folder };
    for (int i = 0; i < 2; ++i) {
        nodes[i]->Display();
        cout << "Size: " << nodes[i]->GetSize() << endl;
    }

    return 0;
}
