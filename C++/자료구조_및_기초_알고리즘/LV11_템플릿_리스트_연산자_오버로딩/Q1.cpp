#include <iostream>
#include <print>
#include <vector>
#include <list>
using namespace std;

namespace ya
{
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
            if(prev->back != nullptr)
            {
                prev->back = q;
                q->back = p;
            }
        }

    private:
        Node* mHead;
        Node* mTail;
    };
}

int main()
{
    ya::list<int> intList;

    intList.push_back(1);
    intList.push_back(2);
    intList.push_back(3);
    intList.push_back(4);
    intList.push_back(5);
    intList.erase(2);
    intList.insert(7, 3);

    //std::list<int> stdList;
    //stdList.push_back(1);
    //stdList.push_back(2);

    return 0;
}
