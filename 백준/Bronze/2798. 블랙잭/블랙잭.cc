#include <iostream>

using namespace std;

int main()
{
	int n, m;
	int arr[30002]; 

	cin >> n >> m; 
	for (int i = 0; i < n; i++)
		cin >> arr[i]; 

	int sum = 0; 
	int result = 0; 
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				sum = arr[i] + arr[j] + arr[k];

				if (sum > m) continue;

				if (sum == m)
				{
					cout << m; 
					return 0; 
				}

				result = abs(sum - m) < abs(result - m) ? sum : result;
			}
		}
	}

	cout << result; 
}

