#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> adj[1002]; 
int visB[1002]; 
int visD[1002];

void bfs(int v)
{
	queue<int> q; 
	q.push(v); 
	visB[v] = true; 
	while (!q.empty())
	{
		int cur = q.front(); 
		q.pop(); 
		cout << cur << ' '; 
		for (auto nxt : adj[cur])
		{
			if (visB[nxt]) continue; 
			q.push(nxt); 
			visB[nxt] = true; 
		}
	}
}

void dfs(int cur)
{
	visD[cur] = true; 
	cout << cur << ' '; 
	for (auto nxt : adj[cur])
	{
		if (visD[nxt]) continue;
		dfs(nxt); 
	}
}

int main() {

	int N, M, V;
	cin >> N >> M >> V; 
	
	while (M--)
	{
		int u, v; 
		cin >> u >> v;

		adj[u].push_back(v); 
		adj[v].push_back(u); 
	}

	for (int i = 1; i <= N; i++)
	{
		sort(adj[i].begin(), adj[i].end()); 
	}
	
	dfs(V); 
	cout << endl; 
	bfs(V); 
}
