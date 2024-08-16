#include <iostream>
#include <utility>
#include <queue>

#define X first
#define Y second

using namespace std;

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

string board[102];
int dist[102][102];

int main()
{
	int n, m; 
	cin >> n >> m; 

	for (int i = 0; i < n; i++)
		cin >> board[i];

	for (int i = 0; i < n; i++)
		fill(dist[i], dist[i] + m, 0);

	queue<pair<int, int>> q; 
	dist[0][0] = 1; 
	q.push({ 0,0 }); 

	while (!q.empty())
	{
		pair<int, int> cur = q.front(); q.pop(); 
		for (int i = 0; i < 4; i++)
		{
			int nx = cur.X + dx[i]; 
			int ny = cur.Y + dy[i]; 

			if (nx >= n || nx < 0 || ny >= m || ny < 0) continue;
			if (dist[nx][ny] > 0 || board[nx][ny] != '1') continue;

			dist[nx][ny] = dist[cur.X][cur.Y] + 1; 
			q.push({ nx,ny }); 
		}
	}

	cout << dist[n - 1][m - 1]; 
}

