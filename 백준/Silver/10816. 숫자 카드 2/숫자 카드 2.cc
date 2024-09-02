#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL); 

	unordered_map<int, int> map; 
	int n,m; 
	cin >> n; 

	for (int i = 0; i < n; i++)
	{
		int a; 
		cin >> a; 

		auto it = map.find(a); 
		if (it != map.end())
			map[a]++;
		else
			map.insert({ a, 1 });
	}

	cin >> m; 
	for (int i = 0; i < m; i++)
	{
		int a; 
		cin >> a; 

		auto it = map.find(a); 
		if (it != map.end())
			cout << map[a] << ' ';
		else
			cout << 0 << ' '; 
	}
}