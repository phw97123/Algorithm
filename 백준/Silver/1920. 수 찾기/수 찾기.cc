#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);

	bool isIn = false; 
	vector<int> v; 

	int n;
	cin >> n; 
	for (int i = 0; i < n; i++)
	{
		int num; 
		cin >> num;
		v.push_back(num); 
	}

	sort(v.begin(), v.end());

	int m; 
	cin >> m; 
	for (int i = 0; i < m; i++)
	{
		int num; 
		cin >> num; 
		isIn = binary_search(v.begin(), v.end(), num);
		cout << isIn << '\n';				
	}
}
