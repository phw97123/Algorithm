#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int l; 
	string s; 

	cin >> l; 
	cin >> s; 

	int result = 0; 
	
	for (int i = 0; i < s.size(); i++)
	{
		result += (s[i] - 96) * pow(31, i); 
	}

	cout << result; 
}

