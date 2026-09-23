#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int score[1000];
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> score[i];
	}

	for (int i = 0; i < n; i++)
	{
		int key = score[i];
		int j = i - 1;

		while (j >= 0 && score[j] < key)
		{
			score[j + 1] = score[j];
			j--;
		}

		score[j + 1] = key;
	}

	cout << "금" << score[0] << endl;
	cout << "은" << score[1] << endl;
	cout << "동" << score[2] << endl;

	return 0;
}
