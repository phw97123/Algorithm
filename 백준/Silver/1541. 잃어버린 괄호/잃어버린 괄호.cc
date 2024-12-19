#include <vector>
#include <iostream>
#include <queue>
#include <string>
#include <sstream>

using namespace std;

int calculateSum(string part)
{
	stringstream ss(part); 
	int result = 0;
	string s; 
	while (getline(ss,s,'+'))
	{
		result += stoi(s); 
	}

	return result; 
}

int main() {

	string s; 
	cin >> s;
	
	stringstream ss(s);
	string segment; 

	vector<string> part; 

	while (getline(ss,segment,'-'))
	{
		part.push_back(segment); 
	}

	int result = calculateSum(part[0]);

	for (int i = 1; i < part.size(); i++)
	{
		result -= calculateSum(part[i]); 
	}

	cout << result << endl; 
}
