#include <iostream>
#include <queue>
using namespace std;

int startIdx;
int evid[] = { -1, 0, 0, 1, 2, 4, 4 };
int timeStemp[] = { 8, 3, 5, 6, 8, 9, 10 };

void run(int idx)
{
	if (idx == 0) {
		cout << "0번index";
		cout << "(출발)" << endl;
		return;
	}

	run(evid[idx]);
	cout << idx << "번index" << "(" << timeStemp[idx] << "시)" << endl;
}

int main()
{
	cin >> startIdx;
	run(startIdx);
	return 0;
}
