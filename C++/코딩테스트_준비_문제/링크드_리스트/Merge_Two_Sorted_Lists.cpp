#include <iostream>
using namespace std;

template <typename T>
class list
{
public:
    struct Node
    {
        T data;
        Node* back;
    };

    list()
    {
        mHead = nullptr;
        mTail = nullptr;
    }

    ~list()
    {
        Node* p = mHead;
        while (p != nullptr)
        {
            mHead = p->back;
            delete p;
            p = mHead;
        }

        mHead = nullptr;
        mTail = nullptr;
    }

    void push_back(T data)
    {
        if (mHead == nullptr)
        {
            mHead = new Node();
            mHead->data = data;
            mHead->back = nullptr;
            mTail = mHead;
        }
        else
        {
            mTail->back = new Node();
            mTail->back->data = data;
            mTail->back->back = nullptr;
            mTail = mTail->back;
        }
    }

    void push_front(T data)
    {
        Node* p = new Node();
        p->data = data;
        p->back = mHead;
        mHead = p;
    }

    void erase(T data)
    {
        Node* p = mHead;
        Node* prev = nullptr;
        while (p != nullptr)
        {
            if (p->data == data)
            {
                if (prev != nullptr)
                {
                    prev->back = p->back;
                }
                delete p;
                p = nullptr;
                break;
            }
            prev = p;
            p = p->back;
        }
    }

    void print()
    {
        Node* p = mHead;
        while (p != nullptr)
        {
            cout << p->data << " ";
            p = p->back;
        }
    }

    void insert(T data, int position)
    {
        Node* p = mHead;
        Node* prev = nullptr;
        Node* q = new Node();
        q->data = data;
        for (int i = 1; i < position; i++)
        {
            prev = p;
            p = p->back;
        }
        if (prev->back != nullptr)
        {
            prev->back = q;
            q->back = p;
        }
    }

    list<int> merge(list<int>& target)
    {
        list<int> result;

        Node* a = mHead;
        Node* b = target.mHead;

        while (a != nullptr && b != nullptr)
        {
            if (a->data > b->data)
            {
                result.push_back(b->data);
                b = b->back;
            }
            else if (a->data < b->data)
            {
                result.push_back(a->data);
                a = a->back;
            }
            else
            {
                result.push_back(a->data);
                result.push_back(b->data);
                a = a->back;
                b = b->back;
            }
            while (a != nullptr)
            {
                result.push_back(a->data);
                a = a->back;
            }
            while (b != nullptr)
            {
                result.push_back(b->data);
                b = b->back;
            }

            return result;
        }
    }

private:
    Node* mHead;
    Node* mTail;
};

int main()
{
    list<int> intList1;
    list<int> intList2;

    intList1.push_back(1);
    intList1.push_back(2);
    intList1.push_back(4);

    intList2.push_back(1);
    intList2.push_back(3);
    intList2.push_back(4);

    list<int> result = intList1.merge(intList2);
    result.print();

    return 0;
}
