#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m; 
	cin >> n >> m; 

	unordered_map<string, string> map(n); 

	for (int i = 0; i < n; i++)
	{
		string site, pw; 
		cin >> site >> pw; 

		map.insert({ site, pw });
	}

	for (int i = 0; i < m; i++)
	{
		string site;
		cin >> site; 

		cout << map[site] << '\n'; 
	}
}