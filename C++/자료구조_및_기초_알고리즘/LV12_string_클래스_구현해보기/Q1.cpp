#include <iostream>
#include <cstring>
using namespace std;

namespace ya
{
    class string
    {
    public:
        string(const char* str)
        {
            mSize = strlen(str);
            mCapacity = (mSize * 2) + (mSize / 2);
            if (mCapacity == 0) mCapacity = 1;
            mStr = new char[mCapacity];
            memset(mStr, 0, mCapacity);
            memcpy(mStr, str, mSize + 1);
        }

        string(const string& other)
        {
            mSize = other.mSize;
            mCapacity = other.mCapacity;

            mStr = new char[mCapacity];
            memset(mStr, 0, mCapacity);
            memcpy(mStr, other.mStr, mSize + 1);
        }

        ~string()
        {
            if (mStr != nullptr)
            {
                delete[] mStr;
                mStr = nullptr;
            }
        }

        void operator+= (const char* str)
        {
            int len = strlen(str);
            int newSize = mSize + len;

            if (newSize >= mCapacity)
            {
                mCapacity = (newSize * 2) + (newSize / 2);
                char* newStr = new char[mCapacity];
                memset(newStr, 0, mCapacity);
                memcpy(newStr, mStr, mSize);
                delete[] mStr;
                mStr = newStr;
            }
            memcpy(mStr + mSize, str, len + 1);
            mSize = newSize;
        }

        char& operator[] (int index)
        {
            return mStr[index];
        }

        int Size() const
        {
            return mSize;
        }

        const char* c_str() const
        {
            return mStr;
        }

        bool IsEmpty() const
        {
            if (mSize == 0)
            {
                return true;
            }
            return false;
        }

        void Clear()
        {
            memset(mStr, 0, mCapacity);
        }

        bool operator== (const char* str)
        {
            if (mSize != strlen(str))
                return false;
            for (int i = 0; i < mSize; i++)
            {
                if (mStr[i] != str[i])
                    return false;
            }
            return true;
        }

    private:
        char* mStr;
        int mSize;
        int mCapacity;
    };
}

int main()
{
    

    return 0;
}
