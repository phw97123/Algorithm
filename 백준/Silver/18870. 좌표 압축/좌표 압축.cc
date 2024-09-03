#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v1; 
	vector<int> v2; 

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a; 
		cin >> a; 
		v1.push_back(a); 
		v2.push_back(a); 
	}
	sort(v2.begin(), v2.end());
	v2.erase(unique(v2.begin(), v2.end()), v2.end()); 

	unordered_map<int, int> m; 

	for (int i = 0; i < v2.size(); i++)
	{
		m[v2[i]] = i; 
	}

	for (int i = 0; i < v1.size(); i++)
	{
		cout << m[v1[i]] << ' '; 
	}
}