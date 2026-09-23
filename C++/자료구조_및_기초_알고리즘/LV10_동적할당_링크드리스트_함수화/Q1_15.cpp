#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Array {
private:
    int count_;
    int* ary_;

public:
    Array(int count) {
        count_ = count;
        ary_ = new int[count_];

        for (int i = 0; i < count_; i++) {
            ary_[i] = rand() % 10;
        }
    }
    ~Array() {
        delete[] ary_;
    }
    void PrintArray()
    {
        for (int i = 0; i < count_; i++) 
        {
            cout << ary_[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    srand(time(NULL));

    Array arr1(3);
    Array arr2(5);

    arr1.PrintArray();
    arr2.PrintArray();

    return 0;
}
