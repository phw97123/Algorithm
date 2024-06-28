#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
	int c; 
	while ( b != 0)
	{
		c = a % b; 
		a = b; 
		b = c; 
	}
	return a; 
}

int lbm(int a, int b)
{
	return a * b / gcd(a, b); 
}

int main()
{
	int a, b; 
	cin >> a >> b; 

	cout << gcd(a, b) << endl; 
	cout << lbm(a, b) << endl; 
}
