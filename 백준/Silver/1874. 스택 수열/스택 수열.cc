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

	int currentNum = 1;
	
	for (int i = 0; i < n; i++)
	{
		int target = v[0]; 

		while (currentNum <= target)
		{
			s.push(currentNum++); 
			cV.push_back('+'); 
		}

		if (s.top() == target)
		{
			s.pop(); 
			cV.push_back('-'); 
			v.erase(v.begin()); 
		}
		else
		{
			cout << "NO"; 
			return 0; 
		}
	}

	for (auto c : cV)
	{
		cout << c << '\n';
	}
}