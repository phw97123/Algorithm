#include <vector>
#include <iostream>
#include <queue>
#include <queue>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	priority_queue<int,vector<int>,greater<int>> q;
	vector<int> v;

	while (t--)
	{
		int n;
		cin >> n;

		if (n > 0)
		{
			q.push(n);
		}
		else
		{
			if (!q.empty())
			{
				cout << q.top() << '\n';
				q.pop();
			}
			else
			{
				cout << 0 <<'\n';
			}
		}
	}
}