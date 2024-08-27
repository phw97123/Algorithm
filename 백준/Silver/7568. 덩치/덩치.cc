#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector < pair<int, int>> v;

	for (int i = 0; i < n; i++)
	{
		int a, b; 
		cin >> a >> b; 
		v.push_back({ a,b }); 
	}

	for (int i = 0; i < n; i++)
	{
		int cnt = 1;
		for (int j = 0; j < n; j++)
		{
			if (i != j && v[j].first > v[i].first && v[j].second > v[i].second)
			{
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
}
