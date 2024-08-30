#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
	vector<int> v;
	unordered_map<int, int> map;
	int n, m;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num, cnt = 1;
		cin >> num;
		auto it = map.find(num); 
		if (!map.empty() && it != map.end())
			it->second++; 
		else
			map.insert({ num,cnt });
	}

	cin >> m; 
	for (int i = 0; i < m; i++)
	{
		int num; 
		cin >> num; 
		v.push_back(num); 
	}

	for (auto num : v)
	{
		auto it = map.find(num); 
		if (it != map.end())
			cout << it->second << ' '; 
		else
			cout << 0 << ' '; 
	}
}
