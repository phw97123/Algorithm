#include <iostream>

using namespace std;

int dp[1002]; 
int arr[1002]; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; 
	cin >> n; 
	int maxLength = 1; 

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i]; 
	}

	fill(dp, dp + n,1); 
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] < arr[i])
			{
				dp[i] = max(dp[i], dp[j] + 1); 
			}
		}
		maxLength = max(maxLength, dp[i]); 
	}

	cout << maxLength; 

}