#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		
		unordered_map<string, int> clothes; 
		for (int i = 0; i < n; i++)
		{
			string name, type; 
			cin >> name >> type; 
			clothes[type]++; 
		}

		int result = 1; 
		for (auto p : clothes)
		{
			result *= (p.second + 1); 
		}
		cout << result - 1 << endl;
	}
}
