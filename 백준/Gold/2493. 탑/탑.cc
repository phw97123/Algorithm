#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	
	vector<int> v(n);
	vector<int> result(n,0);
	stack<pair<int,int>> st;

	for (int i = 0; i < v.size(); i++)
	{
		cin >> v[i]; 

		while (!st.empty() && st.top().first < v[i])
		{
			st.pop(); 
		}

		if (!st.empty())
		{
			result[i] = st.top().second; 
		}
		
		st.push({v[i],i+1});
	}

	for (auto i : result)
	{
		cout << i << ' '; 
	}
}

