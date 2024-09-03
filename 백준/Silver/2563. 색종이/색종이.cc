#include <iostream>
#include <string>

using namespace std;

int arr[101][101];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int maxX = 0;
	int maxY = 0;
	
	int t = n; 
	while (t--)
	{
		int a, b;
		cin >> a >> b;

		maxX = max(maxX, b);
		maxY = max(maxY, a); 

		for (int i = b; i <b + 10; i++)
		{
			for (int j = a; j <a + 10; j++)
			{
				arr[i][j]++;
			}
		}
	}

	int cnt = 0;
	for (int i = 0; i <= maxX + 10; i++)
	{
		for (int j = 0; j <= maxY + 10; j++)
		{
			if (arr[i][j] > 1)
				cnt += (arr[i][j]-1); 
		}
	}

	cout << n * 100 - cnt;
}