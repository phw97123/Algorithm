#include <iostream>
#include <string> 
#include <set>
#include <algorithm>

using namespace std;

struct compare
{
	bool operator() (const string& a, const string& b)
		const {
		if (a.size() == b.size())
			return a < b; 
		return a.size() < b.size();
	}
};

int main()
{
	int n;
	cin >> n;

	set<string, compare> sortSet;
	string s;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		sortSet.insert(s);
	}

	for (auto s : sortSet)
	{
		cout << s << endl;
	}
}
