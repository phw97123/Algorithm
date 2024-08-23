#include <iostream>

using namespace std;

int main()
{
	int l; 
	string s; 

	cin >> l; 
	cin >> s; 

	long long result = 0; 
	long long r = 1; 
	const int m = 1234567891; 
	
	for (int i = 0; i < l; i++)
	{
		result = (result + (s[i] - 'a' + 1) * r) % m; 
		r = (r * 31 )%m; 
	}
	cout << result;
}

