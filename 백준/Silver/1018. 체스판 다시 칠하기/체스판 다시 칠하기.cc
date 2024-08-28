#include <iostream>
#include <string> 
using namespace std;

string board[64];

int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> board[i];
	}

	int minCount = 64;
	for (int i = 0; i <= n - 8; i++)
	{
		for (int j = 0; j <= m - 8; j++)
		{
			int cnt1 = 0;
			int cnt2 = 0; 
			for (int x = 0; x <8; x++)
			{
				for (int y = 0; y <8; y++)
				{
					// W
					if ((x + y) % 2 == 0 && board[i + x][j + y] != 'W') cnt1++; 
					if ((x + y) % 2 == 1 && board[i + x][j + y] != 'B') cnt1++; 

					//B
					if ((x + y) % 2 == 0 && board[i + x][j + y] != 'B') cnt2++;
					if ((x + y) % 2 == 1 && board[i + x][j + y] != 'W') cnt2++; 
				}
			}

			minCount = min(minCount, min(cnt1, cnt2)); 
		}
	}

	cout << minCount << '\n';
}
