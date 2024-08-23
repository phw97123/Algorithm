#include <iostream>

using namespace std;

int arr[15][15];

int main()
{
	int t;

	cin >> t;

	while (t--)
	{
		int k, n;
		cin >> k;
		cin >> n;
		
		for (int i = 1; i < 15; i++)
		{
			arr[0][i] = i;
		}

		for (int i = 1; i <= k; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				arr[i][j] = 0; 
				for (int k = 1; k <= j; k++)
				{
					arr[i][j] += arr[i - 1][k];
				}
			}
		}
		cout << arr[k][n] << endl;
	}
}
