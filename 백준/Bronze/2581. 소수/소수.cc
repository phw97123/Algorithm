#include <iostream>

using namespace std;

bool isPrime(int n)
{
	if (n == 1) return 0;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}

int main()
{
	int m, n;
	cin >> m>> n;

	int total = 0;
	int min = 0; 
	for (int i = m; i <= n; i++)
	{
		if (total == 0 && isPrime(i)) min = i; 
		if (isPrime(i))
			total += i; 
	}

	if (total == 0)
	{
		cout << -1; 
		return 0; 
	}

	cout << total << '\n'; 
	cout << min << '\n'; 
}