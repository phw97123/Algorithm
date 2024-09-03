#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	int maxNum = 0;
	while (t--)
	{
		vector<int> v;
		queue<pair<int, int>> q;
		int n, m;
		cin >> n >> m;

		for (int i = 0; i < n; i++)
		{
			int num;
			cin >> num;
			maxNum = max(maxNum, num);
			q.push({ i,num });
			v.push_back(num);
		}

		stable_sort(v.begin(), v.end(),greater<>());

		int cnt = 0;
		while (!q.empty())
		{
			if (v[cnt] == q.front().second)
			{
				cnt++;
				if (q.front().first == m)
				{
					cout << cnt<<'\n';
					break;
				}

				q.pop();
			}
			else
			{
				pair<int, int> tmp = { q.front().first, q.front().second };
				q.pop();
				q.push(tmp);
			}
		}
	}
}