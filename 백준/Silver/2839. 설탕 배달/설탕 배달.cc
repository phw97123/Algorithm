#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int cnt = 0; 
	while (n >= 0)
	{
		if (n % 5 == 0)
		{
			cnt+= (n/5); 
			cout << cnt; 
			return 0; 
		}
		n -= 3; 
		cnt++; 
	}
	cout << -1; 
}