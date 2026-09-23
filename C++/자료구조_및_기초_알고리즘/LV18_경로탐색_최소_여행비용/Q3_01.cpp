#include <iostream>
#include <algorithm>
using namespace std;

class SortedArray
{
	int size;
	int* p;

	void sort()
	{
		for (int i = 0; i < size - 1; i++)
		{
			for (int j = i + 1; j < size; j++)
			{
				if (p[i] > p[j])
				{
					int temp = p[i];
					p[i] = p[j];
					p[j] = temp;
				}
			}
		}
	}

public:
	SortedArray()
	{
		p = NULL;
		size = 0;
	}

	SortedArray(SortedArray& src)
	{
		size = src.size;
		p = new int[size];

		for (int i = 0; i < size; i++)
		{
			p[i] = src.p[i];
		}
	}

	SortedArray(int arr[], int size)
	{
		this->size = size;

		p = new int[size];

		for (int i = 0; i < size; i++)
		{
			p[i] = arr[i];
		}

		sort();
	}

	~SortedArray()
	{
		delete[] p;
	}

	SortedArray operator+(SortedArray& op2) 
	{
		SortedArray result;

		result.size = size + op2.size;
		result.p = new int[result.size];

		for (int i = 0; i < size; i++)
		{
			result.p[i] = p[i];
		}

		for (int i = 0; i < op2.size; i++) 
		{
			result.p[size + i] = op2.p[i];
		}

		result.sort();

		return result;
	}

	SortedArray& operator+=(SortedArray& op2)
	{
		int* temp = new int[size + op2.size];

		for (int i = 0; i < size; i++) 
		{
			temp[i] = p[i];
		}

		for (int i = 0; i < op2.size; i++) 
		{
			temp[size + i] = op2.p[i];
		}

		delete[] p;

		p = temp;
		size = size + op2.size;

		sort();

		return *this;
	}

	SortedArray& operator=(const SortedArray& op2)
	{
		if (this == &op2)
			return *this;

		delete[] p;

		size = op2.size;
		p = new int[size];

		for (int i = 0; i < size; i++) 
		{
			p[i] = op2.p[i];
		}

		return *this;
	}

	void show() 
	{
		cout << "배열 출력 : ";

		for (int i = 0; i < size; i++) 
		{
			cout << p[i] << " ";
		}

		cout << endl;
	}
};

int main()
{
	int n[] = { 2,20,6 };
	int m[] = { 10, 7, 8, 30 };

	SortedArray a(n, 3);
	SortedArray b(m, 4);
	SortedArray c;

	c = a + b;

	a.show();
	b.show();
	c.show();

	return 0;
}
