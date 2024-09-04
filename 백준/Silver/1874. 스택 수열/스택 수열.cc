#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v;
	vector<char> cV;
	stack<int>s;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}

	int cnt = 1;
	while (!v.empty())
	{
		if (s.empty() || v[0] != s.top() && cnt <=n)
		{
			s.push(cnt++);
			cV.push_back('+');
		}
		else if (cnt > n && v[0] != s.top())
		{
			cout << "NO";
			return 0;
		}
		else
		{
			cV.push_back('-');
			s.pop();
			v.erase(v.begin());
		}
	}

	for (auto c : cV)
	{
		cout << c << '\n';
	}
}