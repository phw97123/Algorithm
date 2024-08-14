#include <bits/stdc++.h>
#include<unordered_set>

using namespace std;

unordered_set<string> logs;

int main()
{
	int num; 
	cin >> num; 
	
	while (num--)
	{
		string name, state; 
		cin >> name >> state; 

		if (state == "enter")
			logs.insert(name);
		else
			logs.erase(name); 
	}

	vector<string> names(logs.begin(), logs.end()); 
	sort(names.begin(), names.end(), greater<string>()); 
	for (auto name : names)
		cout << name<<'\n';
}

