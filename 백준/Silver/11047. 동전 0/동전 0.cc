#include <iostream>

using namespace std;

int arr[11];

int main()
{
	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int cnt = 0;
	int result = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		while (arr[i] + result <= k && result < k)
		{
			result += arr[i]; 
			cnt++;
		}

		if (result == k) break; 
	}
	cout << cnt;
}
