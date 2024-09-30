#include <iostream>

using namespace std;

long long dp[102] = {0,1,1,1,2,2};
int main()
{
	int t; 
	cin >> t; 

	while (t--)
	{
		int n; 
		cin >> n; 

		int a = 0; 

		if (n < 6)
		{
			cout << dp[n] << endl; 
			continue; 
		}

		for (int i = 6; i <=n; i++)
		{
			dp[i] = dp[i - 1] + dp[i-5]; 
		}

		cout << dp[n] << endl; 
	}
}