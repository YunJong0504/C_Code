#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int arr[1000];
	int result[1000];
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; )
	{
		if (i + 2 < n && arr[i] == arr[i + 1] && arr[i] == arr[i + 2])
		{
			i += 3;
		}
		else
		{
			result[count] = arr[i];
			count++;
			i++;
		}
	}

	sort(result, result + count);

	for (int i = 0; i < count; i++)
	{
		cout << result[i] << " ";
	}

	return 0;
}
