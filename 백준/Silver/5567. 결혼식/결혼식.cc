#include <vector>
#include <iostream>
#include <queue>
using namespace std;

vector<int> adj[502];
int dist[502]; 
bool vis[502]; 

int main() {

	int n, m;
	cin >> n >> m;

	while (m--)
	{
		int u, v;
		cin >> u >> v;

		adj[u].push_back(v);
		adj[v].push_back(u); 
	}

	fill(dist+1, dist + n, -1); 
	int cnt = 0; 
	queue<int> q;
	q.push(1);
	vis[1] = true; 
	dist[1] = 0;
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		for (auto nxt : adj[cur])
		{
			if ( vis[nxt] || dist[cur] >= 2) continue;
			q.push(nxt);
			vis[nxt] = true; 
			dist[nxt]= dist[cur]+1; 
			cnt++;
		}
	}
	cout << cnt; 
}
