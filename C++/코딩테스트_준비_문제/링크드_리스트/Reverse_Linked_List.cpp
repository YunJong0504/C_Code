#include <iostream>
using namespace std;

template<typename T>
class List {
public:
    struct Node
    {
        T data;
        Node* next;
    };

    List()
    {
        mHead = nullptr;
        mTail = nullptr;
    }

    void push_back(T data)
    {
        if (mHead == nullptr)
        {
            mHead = new Node();
            mHead->data = data;
            mHead->next = nullptr;
            mTail = mHead;
        }
        else
        {
            mTail->next = new Node();
            mTail->next->data = data;
            mTail->next->next = nullptr;
            mTail = mTail->next;
        }
    }

    void reverse()
    {
        Node* p = nullptr;
        Node* q = nullptr;
        Node* r = mHead;

        while (r != nullptr)
        {
            p = q;
            q = r;
            r = r->next;

            q->next = p;
        }
        mTail = mHead;
        mHead = q;
    }

private:
    Node* mHead;
    Node* mTail;
};


int main()
{
    List<int> intlist;
    intlist.push_back(1);
    intlist.push_back(2);
    intlist.push_back(3);
    intlist.push_back(4);

    intlist.reverse();

    return 0;
}
