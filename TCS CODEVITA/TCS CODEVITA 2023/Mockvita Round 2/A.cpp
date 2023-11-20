#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    unordered_map<int, vector<int>> adj;

    for (int i = 1; i <= n; i++)
    {
        string line;
        getline(cin, line);

        istringstream iss(line);
        int a;
        while (iss >> a)
        {
            adj[i].push_back(a);
        }
    }

    pair<int, int> p;
    cin >> p.first >> p.second;

    queue<pair<int, int>> q;
    unordered_map<int, bool> vis;
    unordered_map<int, int> dist;

    q.push({p.first, 0});
    vis[p.first] = true;
    dist[p.first] = 0;
    bool check = false;
    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();

        int curNode = cur.first;
        int curdist = cur.second;

        if (curNode == p.second)
        {
            cout << curdist;
            check = true;
            break;
        }

        for (int child : adj[curNode])
        {
            if (!vis[child])
            {
                vis[child] = true;
                dist[child] = curdist + 1;
                q.push({child, curdist + 1});
            }
        }
    }
    if(!check) cout << -1;
    return 0;
}
