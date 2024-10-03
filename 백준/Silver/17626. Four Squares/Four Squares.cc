#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; 
	cin >> n; 

	vector<int> dp(n+1, INT_MAX); 
	dp[0] = 0; 

	for (int i = 1; i * i<= n; i++)
	{
		int square = i * i; 
		for (int j = square; j <= n; j++)
		{
			dp[j] = min(dp[j], dp[j - square] + 1); 
		}
	}

	cout << dp[n]; 
}