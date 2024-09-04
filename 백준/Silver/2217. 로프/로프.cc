#include <iostream>
#include <algorithm>

using namespace std;

int arr[100001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n); 

	int maxW = 0;
	for (int i = 1; i <= n; i++)
	{
		int w = arr[n - i] * i;
		maxW = max(maxW, w);
	}

	cout << maxW;
}