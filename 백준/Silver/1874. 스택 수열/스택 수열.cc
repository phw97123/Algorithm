#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v; 
	vector<int> result; 
	vector<char> vc;
	stack<int> st;

	int n; 
	cin >> n; 

	for (int i = 0; i < n; i++)
	{
		int num; 
		cin >> num; 
		v.push_back(num); 
	}

	int curNum = 1; 
	for (int i = 0; i < n; i++)
	{
		int target = v[i]; 

		while (curNum<=target)
		{
			st.push(curNum++); 
			vc.push_back('+'); 
		}

		if (target == st.top())
		{
			st.pop(); 
			vc.push_back('-');
		}
		else
		{
			cout << "NO"; 
			return 0; 
		}
	}

	for (auto c : vc)
	{
		cout << c << '\n'; 
	}
}
