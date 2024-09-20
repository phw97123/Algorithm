#include <iostream>
#include <vector> 

using namespace std;

int main()
{
	int t;
	cin >> t;
	vector<pair<int, int>> v;
	v.push_back({ 1,0 });
	v.push_back({ 0,1 });

	while (t--)
	{
		int n;
		cin >> n;

		int zero = 0;
		int one = 0;

		if (v.size() <= n)
		{
			for (int i = v.size() - 1; i < n; i++)
			{
				v.push_back({ v[i].first + v[i - 1].first, v[i].second + v[i - 1].second });
			}
		}
		cout << v[n].first << ' ' << v[n].second << '\n';
	}
}
