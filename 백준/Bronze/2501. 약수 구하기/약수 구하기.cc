#include <iostream>

int factor(int n, int k)
{
	int count = 0;

	if (n <= 0)
		return 0;

	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			count++;
			if (count == k)
				return i;
		}
	}

	if (count + 1 == k)
		return n;
	else
		return 0;
}

int main()
{
	int n, k = 0;

	std::cin >> n >> k;

	std::cout << factor(n, k);
}