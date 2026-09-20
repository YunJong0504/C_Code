#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    unordered_set<string> setA;
    unordered_set<string> setB;

    for (int i = 0; i < a.length() - 1; i++)
    {
        string word = a.substr(i, 2);
        setA.insert(word);
    }

    for (int i = 0; i < b.length() - 1; i++)
    {
        string word = b.substr(i, 2);
        setB.insert(word);
    }

    int intersection = 0;

    for (const string& word : setA)
    {
        if (setB.find(word) != setB.end())
        {
            intersection++;
        }
    }

    unordered_set<string> unionSet = setA;

    for (const string& word : setB)
    {
        unionSet.insert(word);
    }

    int unionCount = unionSet.size();

    int answer = intersection * 100 / unionCount;

    cout << answer;

    return 0;
}
