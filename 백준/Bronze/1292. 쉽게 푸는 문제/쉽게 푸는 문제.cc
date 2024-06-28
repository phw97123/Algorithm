#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int k = 1;
	int arr[1001];
	for (int i = 1; i <= 1000 && k <= 1000; i++)
	{
		for (int j = 1; j <= i && k <= 1000; j++)
		{
			arr[k] = i;
			k++;
		}
	}

	int a, b;

	cin >> a >> b;

	for (int i = a; i <= b; i++)
	{
		sum += arr[i];
	}

	cout << sum;
}
