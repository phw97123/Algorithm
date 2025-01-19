#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	int n;
	cin >> n;
	
	vector<int> v(n); 
	vector<int> result(n, -1);
	stack<int> st;
	
	for (int i = 0; i<n; i++)
	{
		cin >> v[i]; 
	}

	int a = 0; 
	for (int i = 0; i < n; i++)
	{
		while (!st.empty() && st.top()<=v[n-i-1])
		{
			st.pop(); 
		}

		if (!st.empty())
			result[i] = st.top(); 

		st.push(v[n - i - 1]);
	}

	for (int i = n-1; i>=0; i--)
	{
		cout << result[i] << '\n'; 
	}
}

