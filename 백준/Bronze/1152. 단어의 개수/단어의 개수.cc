#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	getline(cin, s,'\n');
	
	if (s.empty())
	{
		cout << 0; 
		return 0; 
	}

	int cnt = 0; 
	bool isWord = false; 

	for (auto c : s)
	{
		if (c != ' ' && !isWord)
		{
			cnt++; 
			isWord = true;
		}
		else if (c == ' ')
		{
			isWord = false;
		}
	}

	cout << cnt;
}

