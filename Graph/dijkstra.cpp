#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000

void relax(int u, int v, int w, vector<int> &dist, vector<int> &parent, priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> &pq)
{
    if (dist[v] > dist[u] + w)
    {
        dist[v] = dist[u] + w;
        parent[v] = u;
        pq.push({dist[v], v});
    }
}

int main()
{
    int n, m, s, t;
    cin >> n >> m >> s >> t;
    vector<vector<pair<int, int>>> adj(n);
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    vector<int> dist(n, INF);
    dist[s] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, s});
    vector<int> parent(n, -1);
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        for (auto v : adj[u])
        {
            relax(u, v.first, v.second, dist, parent, pq);
        }
    }
    if (dist[t] == INF)
        cout << "No path from " << s << " to " << t << endl;
    else
    {
        cout << "Shortest path from " << s << " to " << t << " is " << dist[t] << endl;
        vector<int> path;
        for (int v = t; v != -1; v = parent[v])
            path.push_back(v);
        reverse(path.begin(), path.end());
        cout << "Path: ";
        for (int v : path)
            cout << v << " ";
        cout << endl;
    }
    //Test Case
    // 5 7 0 4
    // 0 1 10
    // 0 2 5
    // 1 2 2
    // 1 3 1
    // 2 1 3
    // 2 3 9
    // 2 4 2
    // 3 4 4
    
    return 0;
}
N