#include <iostream>
using namespace std;
int main()
{
	int n; 
	cin >> n; 

	int ans = 0;
	int cnt = 3;
	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			ans = 9;
			continue; 
		}
		ans = ans * 2 - cnt;
		cnt = cnt * 2 - 1; 
		ans = ans * 2 - cnt; 
	}
	cout << ans; 
}