#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

unordered_map<string, int> collections;
string s[100005];

int main(void)
{
	cin.tie(0); 
	int collectionNum, testNum;
	cin >> collectionNum >> testNum; 

	for(int i = 1; i<= collectionNum; i++)
	{
		cin >> s[i];
		collections[s[i]] = i;
	}

	while (testNum--)
	{
		string test;
		cin >> test;
		
		if (isdigit(test[0]))
			cout << s[stoi(test)] << '\n';
		else
			cout << collections[test] << '\n'; 
	}
}