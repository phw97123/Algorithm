#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int a = 0;
	while (n--)
	{
		stack<char> s;
		string str;
		cin >> str;

		for (int i = 0; i < str.size(); i++)
		{
			if (!s.empty() && s.top() == '(' && str[i] == ')')
				s.pop();
			else
				s.push(str[i]);
		}

		if (s.empty())
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}
}
