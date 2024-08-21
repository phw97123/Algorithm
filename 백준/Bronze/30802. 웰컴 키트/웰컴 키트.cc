#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n; 
	int size[6]; 
	int t, p; 

	int a = 0, b = 0, c = 0;

	cin >> n; 
	for (int i = 0; i < 6; i++)
	{
		cin >> size[i]; 
	}
	cin >> t >> p;

	for (int i : size)
	{
		a += i / t; 
		if (i % t != 0)
			a += 1; 
	}

	b = n / p;
	c = n % p; 

	cout << a << '\n' << b << ' ' << c; 
}

