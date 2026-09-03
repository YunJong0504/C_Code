#include <iostream>
#include <algorithm>
using namespace std;

string book[10] = {};
int bookCnt = 0;
int clientCnt = 0;

bool search(string name, int n)
{
	int start = 0;
	int end = bookCnt - 1;
	int cnt = 0;

	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (book[mid] == name)
		{
			return true;
		}
		else if (book[mid] < name)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
		cnt++;
	}

	if (cnt > n)
		return false;
	else
		return true;
}

int main()
{
	cin >> bookCnt;
	for (int i = 0; i < bookCnt; i++)
	{
		cin >> book[i];
	}
	sort(book, book + bookCnt);

	cin >> clientCnt;
	for (int i = 0; i < clientCnt; i++)
	{
		string bookname = "";
		int time = 0;
		cin >> bookname >> time;

		if (search(bookname, time))
		{
			cout << "pass" << endl;
		}
		else
		{
			cout << "fail" << endl;
		}
	}


	return 0;
}
