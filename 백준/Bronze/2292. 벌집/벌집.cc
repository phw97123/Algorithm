#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int i = 0;

	if (n == 1)
	{
		cout << 1; 
		return 0; 
	}
	
	for (int sum = 2; sum <= n; i++)
	{
		sum += 6 * i;
	}

	cout << i; 
}

