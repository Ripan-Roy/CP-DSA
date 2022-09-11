#include <bits/stdc++.h>
using namespace std;

void dfs(long long vertex, bool visited[], vector<long long> *AdjList)
{

    visited[vertex] = 1;

    for (auto i : AdjList[vertex])
        if (!visited[i])
            dfs(i, visited, AdjList);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        vector<long long> adj[n];
        for (int i = 0; i < m; i++)
        {
            long long x, y;
            cin >> x >> y;
            x--;
            y--;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bool visited1[n];
        memset(visited1, false, sizeof(visited1));
        dfs(0, visited1, adj);
        long long count = 0;
        while (!visited1[n - 1])
        {
            bool visited2[n];
            memset(visited2, false, sizeof(visited2));
            for (long long i = 0; i < n; i++)
            {
                if (visited1[i])
                {
                    if (i + 1 < n)
                    {
                        dfs(i + 1, visited2, adj);
                    }
                    if (i - 1 >= 0)
                    {
                        dfs(i - 1, visited2, adj);
                    }
                }
            }
            for (long long i = 0; i < n; i++)
            {
                visited1[i] |= visited2[i];
            }
            count++;
        }
        cout << count << "\n";
    }
    return 0;
}