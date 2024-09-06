#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; 
	cin >> n; 

	vector<int> v(n); 

	for (int i = 0; i<n; i++)
		cin >> v[i];

	sort(v.begin(), v.end()); 

	int tmp = 0; 
	int ans = 0;
	for (auto i : v)
	{
		tmp += i;
		ans += tmp; 
	}
	cout << ans; 

}