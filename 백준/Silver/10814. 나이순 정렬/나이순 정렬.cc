#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, string> a , pair<int, string> b)
{
	return a.first < b.first;
}

int main()
{
	int n;
	cin >> n;

	vector <pair<int, string>> v;

	for (int i = 0; i < n; i++)
	{
		int a; 
		string s; 
		cin >> a >> s; 
		v.push_back({ a,s }); 
	}

	stable_sort(v.begin(), v.end(),cmp); 

	for (auto i : v)
	{
		cout << i.first << ' ' << i.second << '\n'; 
	}
}
